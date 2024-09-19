using System;
using System.Collections.Generic;
using System.Numerics;
using System.IO;

namespace Lb_6
{
    class Program
    {
        private static HashSet<int> prime = new HashSet<int>();
        private static int public_key;
        private static int private_key;
        private static int n;
        private static Random random = new Random();

        // Таблиця відповідності символів та їх кодів
        static Dictionary<char, int> charToCode = new Dictionary<char, int>
        {
            {'А', 0}, {'Б', 1}, {'В', 2}, {'Г', 3}, {'Д', 4},
            {'Е', 5}, {'Є', 6}, {'Ж', 7}, {'3', 8}, {'И', 9},
            {'І', 10}, {'Ї', 11}, {'Й', 12}, {'К', 13}, {'Л', 14},
            {'М', 15}, {'Н', 16}, {'О', 17}, {'П', 18}, {'Р', 19},
            {'С', 20}, {'Т', 21}, {'У', 22}, {'Ф', 23}, {'Х', 24},
            {'Ц', 25}, {'Ч', 26}, {'Ш', 27}, {'Щ', 28}, {'Ь', 29},
            {'Ю', 30}, {'Я', 31}, {' ', 32}
        };

        // Функція для шифрування за допомогою RSA
        static int EncryptRSA(int message, int e, int n)
        {
            BigInteger m = new BigInteger(message);
            BigInteger c = BigInteger.ModPow(m, e, n);
            return (int)c;
        }

        static void Main(string[] args)
        {
            PrimeFiller();
            SetKeys();

            Console.WriteLine($"Відкритий ключ: ({public_key}, {n})");
            Console.WriteLine($"Приватний ключ: ({private_key}, {n})");

            // Імена файлів
            string inputFileName = "input.txt";
            string outputFileName = "output.txt";
            string hashFileName = "hash.txt";

            // Читання тексту з файлу
            string inputText;
            try
            {
                inputText = File.ReadAllText(inputFileName).ToUpper();
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Помилка читання файлу: {ex.Message}");
                return;
            }

            // Перетворення тексту на числові коди
            List<int> codes = new List<int>();
            foreach (char c in inputText)
            {
                if (charToCode.ContainsKey(c))
                {
                    codes.Add(charToCode[c]);
                }
                else
                {
                    Console.WriteLine($"Символ '{c}' не знайдено в таблиці.");
                    return;
                }
            }

            // Шифрування кодів за допомогою RSA
            List<int> encryptedCodes = new List<int>();
            foreach (int code in codes)
            {
                int encryptedCode = EncryptRSA(code, public_key, n);
                encryptedCodes.Add(encryptedCode);
            }

            // Запис зашифрованих кодів у файл
            try
            {
                File.WriteAllText(outputFileName, string.Join(" ", encryptedCodes));
                Console.WriteLine($"Зашифрований текст записано у файл: {outputFileName}");
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Помилка запису файлу: {ex.Message}");
            }

            // Обчислення хеш-функції H(M) = ∑mi mod 33
            int hash = 0;
            foreach (int code in codes)
            {
                hash += code % 33;
            }

            // Запис хеш-функції у файл
            try
            {
                File.WriteAllText(hashFileName, hash.ToString());
                Console.WriteLine($"Хеш-функцію записано у файл: {hashFileName}");
            }
            catch (Exception ex)
            {
                Console.WriteLine($"Помилка запису файлу: {ex.Message}");
            }
        }

        public static void PrimeFiller()
        {
            bool[] sieve = new bool[250];
            for (int i = 0; i < 250; i++)
            {
                sieve[i] = true;
            }

            sieve[0] = false;
            sieve[1] = false;

            for (int i = 2; i < 250; i++)
            {
                for (int j = i * 2; j < 250; j += i)
                {
                    sieve[j] = false;
                }
            }

            for (int i = 0; i < sieve.Length; i++)
            {
                if (sieve[i])
                {
                    prime.Add(i);
                }
            }
        }

        public static int PickRandomPrime()
        {
            int k = random.Next(0, prime.Count);
            var enumerator = prime.GetEnumerator();
            for (int i = 0; i <= k; i++)
            {
                enumerator.MoveNext();
            }

            int ret = enumerator.Current;
            prime.Remove(ret);
            return ret;
        }

        public static void SetKeys()
        {
            int prime1 = PickRandomPrime();
            int prime2 = PickRandomPrime();

            n = prime1 * prime2;
            int fi = (prime1 - 1) * (prime2 - 1);

            int e = 2;
            while (true)
            {
                if (GCD(e, fi) == 1)
                {
                    break;
                }
                e += 1;
            }

            public_key = e;

            int d = 2;
            while (true)
            {
                if ((d * e) % fi == 1)
                {
                    break;
                }
                d += 1;
            }

            private_key = d;
        }

        public static int GCD(int a, int b)
        {
            if (b == 0)
            {
                return a;
            }
            return GCD(b, a % b);
        }
    }
}

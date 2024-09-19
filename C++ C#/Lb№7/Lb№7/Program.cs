using System;

namespace Lb_7
{
    class Program
    {
        // Функція для обчислення a^b mod P за допомогою швидкого піднесення до степеня
        private static long PowerMod(long x, long y, long p)
        {
            long res = 1; // Ініціалізуємо результат

            // Обчислюємо a^b mod P за допомогою швидкого піднесення до степеня
            x %= p; // Зменшуємо x до значення в межах модулю

            while (y > 0)
            {
                // Якщо y - непарне, ми додаємо x до результату
                if (y % 2 == 1)
                    res = (res * x) % p;

                // Зменшуємо y до найбільшого непарного числа, менше за y
                y /= 2;
                x = (x * x) % p;
            }
            return res;
        }

        private static long Power(long a, long b, long P)
        {
            return PowerMod(a, b, P);
        }

        private static long K(long a, long b, long c, long P)
        {
            // Обчислюємо a^b mod P та a^c mod P
            long abModP = PowerMod(a, b, P);
            long acModP = PowerMod(a, c, P);

            // Перемножуємо результати
            long result = (abModP * acModP) % P;

            return result;
        }

        static void Main()
        {
            long P, a, Xa, Xb;

            Console.WriteLine("Введіть значення P (просте число):");
            P = long.Parse(Console.ReadLine());

            Console.WriteLine("Введіть значення a (первісний корінь для P, a):");
            a = long.Parse(Console.ReadLine());

            Console.WriteLine("Введіть перший приватний ключ:");
            Xa = long.Parse(Console.ReadLine());

            Console.WriteLine("Введіть другий приватний ключ:");
            Xb = long.Parse(Console.ReadLine());

            long x = Power(a, Xa, P); // Генеруємо перший ключ 
            long y = Power(a, Xb, P); // Генеруємо другий ключ

            Console.WriteLine("\nПерший ключ: " + x);
            Console.WriteLine("Другий ключ: " + y);

            // Генеруємо секретний ключ після обміну ключами
            long ka = Power(y, Xa, P); // Перший секретний ключ
            long kb = Power(x, Xb, P); // Другий секретний ключ

            Console.WriteLine("\nПерший секретний ключ: " + ka);
            Console.WriteLine("Другий секретний ключ: " + kb);
            long k = K(a, Xa, Xb, P);
            Console.WriteLine("K: " + k);
        }
    }
}

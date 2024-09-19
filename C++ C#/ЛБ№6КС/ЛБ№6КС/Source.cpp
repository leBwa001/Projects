#include <iostream> 
#include <omp.h> 

#define N 4096

float(*a)[N] = new float[N][N];
float(*b)[N] = new float[N][N];

using namespace std;

void fillRandomValuesFloat() {
	srand(static_cast<unsigned int>(time(nullptr)));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			a[i][j] = static_cast<float>(rand() % 100); // Заповнення випадковими значеннями від 0 до 99
			b[i][j] = static_cast<float>(rand() % 100); // Заповнення випадковими значеннями від 0 до 99
		}
	}
}

void fillRandomValuesDouble() {
	srand(static_cast<unsigned int>(time(nullptr)));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			a[i][j] = static_cast<double>(rand() % 100); // Заповнення випадковими значеннями від 0 до 99
			b[i][j] = static_cast<double>(rand() % 100); // Заповнення випадковими значеннями від 0 до 99
		}
	}
}

void Pruklad3()
{
	fillRandomValuesFloat();
	float(*c)[N] = new float[N][N];
	double t1 = omp_get_wtime();
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < N; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	double t2 = omp_get_wtime();
	cout << "t2-t1=" << t2 - t1 << endl;
	//cout << c[N - 1][N - 1] << ' '<<endl;
}

void Pruklad4()
{
	fillRandomValuesFloat();
	cout << "Pruklad4" << endl;
	float(*c)[N] = new float[N][N];
	float x[4], y[4];
	double t1 = omp_get_wtime();
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			float s[4];
			for (int l = 0; l < 4; l++) s[l] = 0;
			for (int k = 0; k < N; k += 4)
			{
				for (int l = 0; l < 4; l++)
				{
					x[l] = a[i][k + l]; y[l] = b[k + l][j];
				};
				__asm
				{
					movups xmm0, x;
					movups xmm1, y;
					movups xmm2, s;
					mulps xmm1, xmm0;
					addps xmm2, xmm1;
					movups s, xmm2;
				};
			}
			c[i][j] = s[0] + s[1] + s[2] + s[3];
		}
	double t2 = omp_get_wtime();
	cout << "t2-t1=" << t2 - t1 << endl;
	//cout << c[N - 1][N - 1] << ' '<<endl;
}

void Pruklad5_1()
{
	fillRandomValuesFloat();
	cout << "Pruklad5_1" << endl;
	for (int i = 0; i < N; i++)
		for (int j = i; j < N; j++)
		{
			float buf = b[i][j];
			b[i][j] = b[j][i];
			b[j][i] = buf;
		}
	float(*c)[N] = new float[N][N];
	double t1 = omp_get_wtime();
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < N; k++)
				c[i][j] += a[i][k] * b[j][k];
		}
	double t2 = omp_get_wtime();
	cout << "t2-t1=" << t2 - t1 << endl;
	//cout << c[N - 1][N - 1] << ' ';
}

void Pruklad5_2()
{
	fillRandomValuesFloat();
	cout << "Pruklad5_2" << endl;
	for (int i = 0; i < N; i++)
		for (int j = i; j < N; j++)
		{
			float buf = b[i][j];
			b[i][j] = b[j][i];
			b[j][i] = buf;
		}
	float(*c)[N] = new float[N][N];
	double t1 = omp_get_wtime();
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			register float s = 0;
			for (int k = 0; k < N; k++)
				s += a[i][k] * b[j][k];
			c[i][j] = s;
		}
	double t2 = omp_get_wtime();
	cout << "t2-t1=" << t2 - t1 << endl;
	//cout << c[N - 1][N - 1] << ' ';
}

void Pruklad6_1()
{
	fillRandomValuesFloat();
	cout << "Pruklad6_1" << endl;
	for (int i = 0; i < N; i++)
		for (int j = i; j < N; j++)
		{
			float buf = b[i][j];
			b[i][j] = b[j][i];
			b[j][i] = buf;
		}
	float(*c)[N] = new float[N][N];
	float x[4], y[4];
	double t1 = omp_get_wtime();
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			float s[4];
			for (int l = 0; l < 4; l++) s[l] = 0;
			for (int k = 0; k < N; k += 4)
			{
				for (int l = 0; l < 4; l++)
				{
					x[l] = a[i][k + l]; y[l] = b[j][k + l];
				};
				__asm
				{
					movups xmm0, x;
					movups xmm1, y;
					movups xmm2, s;
					mulps xmm1, xmm0;
					addps xmm2, xmm1;
					movups s, xmm2;
				};
			}
			c[i][j] = s[0] + s[1] + s[2] + s[3];
		}
		double t2 = omp_get_wtime();
	cout << "t2-t1=" << t2 - t1 << endl;
	//cout << c[N - 1][N - 1] << ' ';
}

void Pruklad6_2()
{
	cout << "Pruklad6_2" << endl;
	float* a = new float[N * N];
	float* b = new float[N * N];
	const float scale = 100.0f / RAND_MAX; // Масштабування значень від 0 до RAND_MAX до діапазону від 0 до 100
	for (int i = 0; i < N * N; i++) {
		a[i] = static_cast<float>(rand()) * scale; // Генерувати випадкові значення від 0 до 100 для a
		b[i] = static_cast<float>(rand()) * scale; // Генерувати випадкові значення від 0 до 100 для b
	}
	for (int i = 0; i < N; i++)
		for (int j = i; j < N; j++)
		{
			float buf = b[N * i + j];
			b[N * i + j] = b[N * j + i];
			b[N * j + i] = buf;
		}
	float* c = new float[N * N];
	float x[4], y[4];
	double t1 = omp_get_wtime();
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			float s[4];
			for (int l = 0; l < 4; l++) s[l] = 0;
			for (int k = 0; k < N; k += 4)
			{
				for (int l = 0; l < 4; l++)
				{
					x[l] = a[N * i + k + l]; y[l] = b[N * j + k + l];
				};
				__asm
				{
					movups xmm0, x;
					movups xmm1, y;
					movups xmm2, s;
					mulps xmm1, xmm0;
					addps xmm2, xmm1;
					movups s, xmm2;
				};
			}
			c[N * i + j] = s[0] + s[1] + s[2] + s[3];
		}
	double t2 = omp_get_wtime();
	cout << "t2-t1=" << t2 - t1 << endl;
	//cout << c[N - 1 + N * (N - 1)] << ' ';
}

void Pruklad6_3() 
{
	cout << "Pruklad6_3" << endl;
	float* a = new float[N * N];
	float* b = new float[N * N];
	const float scale = 100.0f / RAND_MAX; // Масштабування значень від 0 до RAND_MAX до діапазону від 0 до 100
	for (int i = 0; i < N * N; i++) {
		a[i] = static_cast<float>(rand()) * scale; // Генерувати випадкові значення від 0 до 100 для a
		b[i] = static_cast<float>(rand()) * scale; // Генерувати випадкові значення від 0 до 100 для b
	}
	for (int i = 0; i < N; i++)
		for (int j = i; j < N; j++)
		{
			float buf = b[N * i + j];
			b[N * i + j] = b[N * j + i];
			b[N * j + i] = buf;
		}
	float* c = new float[N * N];
	float s[4];
	double t1 = omp_get_wtime();
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			int Ni = 4 * N * i;
			int Nj = 4 * N * j;
			__asm
			{
				mov eax, a
				add eax, Ni
				mov ebx, b
				add ebx, Nj
				xorps xmm2, xmm2
				mov ecx, N / 4
				m:
				movups xmm0, [eax]
					movups xmm1, [ebx]
					mulps xmm0, xmm1
					addps xmm2, xmm0
					add eax, 16
					add ebx, 16
					loop m
					movups s, xmm2
			}
			c[N * i + j] = s[0] + s[1] + s[2] + s[3];
		}
	double t2 = omp_get_wtime();
	cout << "t2-t1=" << t2 - t1 << endl;
	//cout << c[N - 1 + N * (N - 1)] << ' ';
}

void main()
{
	cout << "N=" << N << endl;
	/*Pruklad3();
	Pruklad4();*/
	/*Pruklad5_1();
	Pruklad5_2();
	Pruklad6_1();*/
	//Pruklad6_2();
	Pruklad6_3();
}
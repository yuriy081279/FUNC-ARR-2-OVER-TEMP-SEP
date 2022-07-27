#include<iostream>
using namespace std;
#define tab "\t"
const int STROKA = 3;
const int STOLB = 4;
float y = 4;

void FillRand(int arr[STROKA][STOLB], const int STROKA, const int STOLB);
void FillRand(double arr[STROKA][STOLB], const int STROKA, const int STOLB);
void FillRand(char arr[STROKA][STOLB], const int STROKA, const int STOLB);
void FillRand(float arr[STROKA][STOLB], const int STROKA, const int STOLB);

template<typename T>
void Print(T arr[STROKA][STOLB], const int STROKA, const int STOLB);

template<typename T>
double Sum(T arr[STROKA][STOLB], const int STROKA, const int STOLB);

template<typename T>
double Avg(T arr[STROKA][STOLB], const int STROKA, const int STOLB);

template<typename T>
T minValueIn(T arr[STROKA][STOLB], const int STROKA, const int STOLB);

template<typename T>
T maxValueIn(T arr[STROKA][STOLB], const int STROKA, const int STOLB);

template<typename T>
void shiftLeft(T arr[STROKA][STOLB], const int STROKA, const int STOLB);

template<typename T>
void shiftRight(T arr[STROKA][STOLB], const int STROKA, const int STOLB);

void main()
{
	setlocale(LC_ALL, "");

	int i_arr_2[STROKA][STOLB];
	double i_brr_2[STROKA][STOLB];
	char i_crr_2[STROKA][STOLB];
	float i_drr_2[STROKA][STOLB];

	FillRand(i_arr_2, STROKA, STOLB);
	Print(i_arr_2, STROKA, STOLB);
	cout << " Сумма элементов данного массива = " << Sum(i_arr_2, STROKA, STOLB) << endl;
	cout << " Среднее арифметическое элементов этого массива = " << Avg(i_arr_2, STROKA, STOLB) << endl;
	cout << " Минимальное значение в этом массиве = " << minValueIn(i_arr_2, STROKA, STOLB) << endl;
	cout << " Максимальное значение в этом массиве = " << maxValueIn(i_arr_2, STROKA, STOLB) << endl;
	shiftLeft(i_arr_2, STROKA, STOLB);
	cout << " Сдвинутый массив влево на " << y << " элемента" << endl;
	Print(i_arr_2, STROKA, STOLB);
	shiftRight(i_arr_2, STROKA, STOLB);
	cout << " Сдвинутый массив вправо на " << y << " элемента" << endl;
	Print(i_arr_2, STROKA, STOLB);
	cout << "------------------------------------------------";

	cout << endl << endl;
	FillRand(i_brr_2, STROKA, STOLB);
	Print(i_brr_2, STROKA, STOLB);
	cout << " Сумма элементов данного массива = " << Sum(i_brr_2, STROKA, STOLB) << endl;
	cout << " Среднее арифметическое элементов этого массива = " << Avg(i_brr_2, STROKA, STOLB) << endl;
	cout << " Минимальное значение в массиве = " << minValueIn(i_brr_2, STROKA, STOLB) << endl;
	cout << " Максимальное значение в этом массиве = " << maxValueIn(i_brr_2, STROKA, STOLB) << endl;
	shiftLeft(i_brr_2, STROKA, STOLB);
	cout << " Сдвинутый массив влево на " << y << " элемента" << endl;
	Print(i_brr_2, STROKA, STOLB);
	shiftRight(i_brr_2, STROKA, STOLB);
	cout << " Сдвинутый массив вправо на " << y << " элемента" << endl;
	Print(i_brr_2, STROKA, STOLB);
	cout << "------------------------------------------------";

	cout << endl << endl;
	FillRand(i_crr_2, STROKA, STOLB);
	Print(i_crr_2, STROKA, STOLB);
	cout << " Сумма элементов данного массива = " << Sum(i_crr_2, STROKA, STOLB) << endl << endl;
	cout << " Среднее арифметическое элементов этого массива = " << Avg(i_crr_2, STROKA, STOLB) << endl << endl;
	cout << " Минимальное значение в массиве  = " << minValueIn(i_crr_2, STROKA, STOLB) << endl << endl;
	cout << " Максимальное значение в этом массиве = " << maxValueIn(i_crr_2, STROKA, STOLB) << endl << endl;
	shiftLeft(i_crr_2, STROKA, STOLB);
	cout << " Сдвинутый массив влево на " << y << " элемента" << endl;
	Print(i_crr_2, STROKA, STOLB);
	shiftRight(i_crr_2, STROKA, STOLB);
	cout << " Сдвинутый массив вправо на " << y << " элемента" << endl;
	Print(i_crr_2, STROKA, STOLB);
	cout << "------------------------------------------------";

	cout << endl << endl;
	FillRand(i_drr_2, STROKA, STOLB);
	Print(i_drr_2, STROKA, STOLB);
	cout << " Сумма элементов данного массива = " << Sum(i_drr_2, STROKA, STOLB) << endl << endl;
	cout << " Среднее арифметическое элементов этого массива = " << Avg(i_drr_2, STROKA, STOLB) << endl << endl;
	cout << " Минимальное значение в массиве = " << minValueIn(i_drr_2, STROKA, STOLB) << endl << endl;
	cout << " Максимальное значение в этом массиве = " << maxValueIn(i_drr_2, STROKA, STOLB) << endl << endl;
	shiftLeft(i_drr_2, STROKA, STOLB);
	cout << " Сдвинутый массив влево на " << y << " элемента" << endl;
	Print(i_drr_2, STROKA, STOLB);
	shiftRight(i_drr_2, STROKA, STOLB);
	cout << " Сдвинутый массив вправо на " << y << " элемента" << endl;
	Print(i_drr_2, STROKA, STOLB);
}

void FillRand(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(double arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			arr[i][j] = rand() % 1000;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			arr[i][j] = rand();
		}
	}
}
void FillRand(float arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			arr[i][j] = rand() % 100000;
			arr[i][j] /= 1000;
		}
	}
}
template<typename T>
void Print(T arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}
template<typename T>
double Sum(T arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	double SUM = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			SUM += arr[i][j];
		}
	}
	return (double)SUM;
}

template<typename T>
double Avg(T arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	return Sum(arr, STROKA, STOLB) / (STROKA * STOLB);
}

template<typename T>
T minValueIn(T arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int x = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			for (int c = 0; c < STROKA; c++)
			{
				for (int d = 0; d < STOLB; d++)
				{
					if (arr[i][j] > arr[c][d])
					{
						++x;
					}

				}
			}
			if (x == 0)
			{
				return arr[i][j];
			}
			x = 0;
		}
	}
}
template<typename T>
T maxValueIn(T arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int x = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			for (int c = 0; c < STROKA; c++)
			{
				for (int d = 0; d < STOLB; d++)
				{
					if (arr[i][j] < arr[c][d])
					{
						++x;
					}

				}
			}
			if (x == 0)
			{
				return arr[i][j];
			}
			x = 0;
		}
	}
}
template<typename T>
void shiftLeft(T arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < y; i++)
	{
		T x = arr[0][0];
		for (int i = 0; i < STROKA; i++)
		{
			for (int j = 0; j < STOLB; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[STROKA - 1][STOLB - 1] = x;
	}
}
template<typename T>
void shiftRight(T arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	for (int i = 0; i < y; i++)
	{
		T x = arr[STROKA - 1][STOLB - 1];
		for (int i = STROKA - 1; i >= 0; i--)
		{
			for (int j = STOLB - 1; j >= 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
		}
		arr[0][0] = x;
	}
	cout << endl;
}
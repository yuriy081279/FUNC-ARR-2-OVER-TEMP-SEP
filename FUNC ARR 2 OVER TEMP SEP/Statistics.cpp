#include"Statistics.h"
#include"stdafx.h"
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
	int y = 4;
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
	int y = 4;
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
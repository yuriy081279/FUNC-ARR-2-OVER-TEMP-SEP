#include"stdafx.h"
#include"constants.h"
double Sum(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int SUM = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			SUM += arr[i][j];
		}
	}
	return (double)SUM;
}
double Sum(double arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	double SUM = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			SUM += arr[i][j];
		}
	}
	return SUM;
}
char Sum(char arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	char SUM = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			SUM += arr[i][j];
		}
	}
	return SUM;
}
float Sum(float arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	float SUM = 0;
	for (int i = 0; i < STROKA; i++)
	{
		for (int j = 0; j < STOLB; j++)
		{
			SUM += arr[i][j];
		}
	}
	return SUM;
}

double Avg(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	return Sum(arr, STROKA, STOLB) / (STROKA * STOLB);
}
double Avg(double brr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	return Sum(brr, STROKA, STOLB) / (STROKA * STOLB);
}
char Avg(char crr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	return Sum(crr, STROKA, STOLB) / (STROKA * STOLB);
}
float Avg(float drr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	return Sum(drr, STROKA, STOLB) / (STROKA * STOLB);
}

int minValueIn(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
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
double minValueIn(double brr[STROKA][STOLB], const int STROKA, const int STOLB)
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
					if (brr[i][j] >= brr[c][d])
					{
						++x;
					}
				}
			}
			if (x == 0)
			{
				return brr[i][j];

			}
			x = 0;
		}
	}
}
char minValueIn(char crr[STROKA][STOLB], const int STROKA, const int STOLB)
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
					if (crr[i][j] >= crr[c][d])
					{
						++x;
					}
				}
			}
			if (x == 0)
			{
				return crr[i][j];

			}
			x = 0;
		}
	}
}
float minValueIn(float drr[STROKA][STOLB], const int STROKA, const int STOLB)
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
					if (drr[i][j] > drr[c][d])
					{
						++x;
					}
				}
			}
			if (x == 0)
			{
				return drr[i][j];

			}
			x = 0;
		}
	}
}
int maxValueIn(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
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
double maxValueIn(double brr[STROKA][STOLB], const int STROKA, const int STOLB)
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
					if (brr[i][j] < brr[c][d])
					{
						++x;

					}
				}
			}
			if (x == 0)
			{
				return brr[i][j];

			}
			x = 0;
		}
	}
}
char maxValueIn(char crr[STROKA][STOLB], const int STROKA, const int STOLB)
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
					if (crr[i][j] < crr[c][d])
					{
						++x;
					}
				}
			}
			if (x == 0)
			{
				return crr[i][j];

			}
			x = 0;
		}
	}
}
float maxValueIn(float drr[STROKA][STOLB], const int STROKA, const int STOLB)
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
					if (drr[i][j] < drr[c][d])
					{
						++x;
					}
				}
			}
			if (x == 0)
			{
				return drr[i][j];

			}
			x = 0;
		}
	}
}

void shiftLeft(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y = 4;
	for (int i = 0; i < y; i++)
	{
		int x = arr[0][0];
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
void shiftRight(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y = 4;
	for (int i = 0; i < y; i++)
	{
		int x = arr[STROKA - 1][STOLB - 1];
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

void shiftLeft(double brr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y = 4;
	for (int i = 0; i < y; i++)
	{
		double x = brr[0][0];
		for (int i = 0; i < STROKA; i++)
		{
			for (int j = 0; j < STOLB; j++)
			{
				brr[i][j] = brr[i][j + 1];
			}
		}
		brr[STROKA - 1][STOLB - 1] = x;
	}
}
void shiftRight(double brr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y = 4;
	for (int i = 0; i < y; i++)
	{
		double x = brr[STROKA - 1][STOLB - 1];
		for (int i = STROKA - 1; i >= 0; i--)
		{
			for (int j = STOLB - 1; j >= 0; j--)
			{
				brr[i][j] = brr[i][j - 1];
			}
		}
		brr[0][0] = x;
	}
	cout << endl;
}
void shiftLeft(char crr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y = 4;
	for (int i = 0; i < y; i++)
	{
		char x = crr[0][0];
		for (int i = 0; i < STROKA; i++)
		{
			for (int j = 0; j < STOLB; j++)
			{
				crr[i][j] = crr[i][j + 1];
			}
		}
		crr[STROKA - 1][STOLB - 1] = x;
	}
}
void shiftRight(char crr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y = 4;
	for (int i = 0; i < y; i++)
	{
		char x = crr[STROKA - 1][STOLB - 1];
		for (int i = STROKA - 1; i >= 0; i--)
		{
			for (int j = STOLB - 1; j >= 0; j--)
			{
				crr[i][j] = crr[i][j - 1];
			}
		}
		crr[0][0] = x;
	}
	cout << endl;
}
void shiftLeft(float drr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y = 4;
	for (int i = 0; i < y; i++)
	{
		float x = drr[0][0];
		for (int i = 0; i < STROKA; i++)
		{
			for (int j = 0; j < STOLB; j++)
			{
				drr[i][j] = drr[i][j + 1];
			}
		}
		drr[STROKA - 1][STOLB - 1] = x;
	}
}
void shiftRight(float drr[STROKA][STOLB], const int STROKA, const int STOLB)
{
	int y = 4;
	for (int i = 0; i < y; i++)
	{
		float x = drr[STROKA - 1][STOLB - 1];
		for (int i = STROKA - 1; i >= 0; i--)
		{
			for (int j = STOLB - 1; j >= 0; j--)
			{
				drr[i][j] = drr[i][j - 1];
			}
		}
		drr[0][0] = x;
	}
	cout << endl;
}
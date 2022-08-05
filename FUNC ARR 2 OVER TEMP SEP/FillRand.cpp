#include"stdafx.h"
#include"constants.h"

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
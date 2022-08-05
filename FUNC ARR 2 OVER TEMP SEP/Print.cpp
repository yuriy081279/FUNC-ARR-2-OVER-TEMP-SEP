#include"stdafx.h"
#include"constants.h"
void Print(int arr[STROKA][STOLB], const int STROKA, const int STOLB)
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
void Print(double arr[STROKA][STOLB], const int STROKA, const int STOLB)
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
void Print(char arr[STROKA][STOLB], const int STROKA, const int STOLB)
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
void Print(float arr[STROKA][STOLB], const int STROKA, const int STOLB)
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
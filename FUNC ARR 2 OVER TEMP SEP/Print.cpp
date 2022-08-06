#include"Print.h"
#include"stdafx.h"
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
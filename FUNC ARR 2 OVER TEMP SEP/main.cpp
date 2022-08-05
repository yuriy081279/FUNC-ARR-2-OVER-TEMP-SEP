#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"
int y=4;
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
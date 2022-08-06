#pragma once
#include"constants.h"
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
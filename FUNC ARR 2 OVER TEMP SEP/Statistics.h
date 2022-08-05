#pragma once
#include"constants.h"
double Sum(int arr[STROKA][STOLB], const int STROKA, const int STOLB);
double Sum(double arr[STROKA][STOLB], const int STROKA, const int STOLB);
char Sum(char arr[STROKA][STOLB], const int STROKA, const int STOLB);
float Sum(float arr[STROKA][STOLB], const int STROKA, const int STOLB);

double Avg(int arr[STROKA][STOLB], const int STROKA, const int STOLB);
double Avg(double arr[STROKA][STOLB], const int STROKA, const int STOLB);
char Avg(char arr[STROKA][STOLB], const int STROKA, const int STOLB);
float Avg(float arr[STROKA][STOLB], const int STROKA, const int STOLB);

int minValueIn(int arr[STROKA][STOLB], const int STROKA, const int STOLB);
double minValueIn(double arr[STROKA][STOLB], const int STROKA, const int STOLB);
char minValueIn(char arr[STROKA][STOLB], const int STROKA, const int STOLB);
float minValueIn(float arr[STROKA][STOLB], const int STROKA, const int STOLB);

int maxValueIn(int arr[STROKA][STOLB], const int STROKA, const int STOLB);
double maxValueIn(double arr[STROKA][STOLB], const int STROKA, const int STOLB);
char maxValueIn(char arr[STROKA][STOLB], const int STROKA, const int STOLB);
float maxValueIn(float arr[STROKA][STOLB], const int STROKA, const int STOLB);

void shiftLeft(int arr[STROKA][STOLB], const int STROKA, const int STOLB);
void shiftLeft(double brr[STROKA][STOLB], const int STROKA, const int STOLB);
void shiftLeft(char crr[STROKA][STOLB], const int STROKA, const int STOLB);
void shiftLeft(float drr[STROKA][STOLB], const int STROKA, const int STOLB);

void shiftRight(int arr[STROKA][STOLB], const int STROKA, const int STOLB);
void shiftRight(double brr[STROKA][STOLB], const int STROKA, const int STOLB);
void shiftRight(char crr[STROKA][STOLB], const int STROKA, const int STOLB);
void shiftRight(float drr[STROKA][STOLB], const int STROKA, const int STOLB);
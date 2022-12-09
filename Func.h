#include <iostream>
#include <locale>
#include <random>
#include <ctime>
#include <windows.h>
#ifndef KR3_FUNC_H
#define KR3_FUNC_H
#define STROK 9
#define STOLBC 11
#define RAZM_MAS 38
//void input_matr(int(*Q)[STOLBC]);
//void obrabotk_matr(int(*Q)[STOLBC]);

//void obrabotk_mas(int* R);
extern "C" {
void func(int *R);
void funk(int(*Q)[STOLBC]);
}
//void func(int(*Q)[STROK][STOLBC]);
//
//void input_mas(int* R);

//void LoadRun(LPCSTR s   , char type);

#endif //KR3_FUNC_H

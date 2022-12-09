#include <windows.h>
#include "load.h"
#include <stdio.h>
#include <iostream>
#include "Func.h"
using namespace std;
void LoadRun(LPCSTR s, char type) {
	int Q[STROK][STOLBC], R[RAZM_MAS];
	void * lib;
	void(*matrix)(int[STROK][STOLBC]);
	void(*mass)(int*);
	lib = LoadLibrary(s);
		if (!lib) {
			cout << "cannot open library \n";
			return;
		}

		if (type == '2')
		{

			matrix = (void(*)(int[STROK][STOLBC]))GetProcAddress((HINSTANCE)lib, "funk");
			if (matrix == NULL) {
				cout << "cannot load function funk\n";
			}
			else {
				matrix(Q);
			}
		}
		else
		{
			mass = (void(*)(int R[RAZM_MAS]))GetProcAddress((HINSTANCE)lib, "func");
			if (mass == NULL) {
				cout << "cannot load function func\n";
			}
			else {
				mass(R);
			}
		}
		FreeLibrary((HINSTANCE)lib);
}
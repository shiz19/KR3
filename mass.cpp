#include "Func.h"
#include <iostream>
using namespace std;
extern "C" {
void input(int* R) {
    int i;
    for (i = 0; i < RAZM_MAS; i++) {
        R[i] = rand() % 100 - 50;
        cout << "R[" << i << "] = " << R[i]<< endl;
    }
}
void obrabotk_mas(int* R) {
    int i, CHISLO_1, KOLVO_CH_MAS = 0;
    for (i = 0; i < RAZM_MAS; i++) {
        CHISLO_1 = R[i] % 5;
        if (CHISLO_1 == 1) {
            R[i] = i;
            cout << "Iz massiva R " << R[i] << " element massiva Delitsya na 5 s ostatkom 1" << endl;
            KOLVO_CH_MAS++;
        }
    }
    cout << "Vsego is massiva R podelilos na 5 s ostatkom 1: " << KOLVO_CH_MAS << " chisel" << endl;
}



void func(int* R) {
    int i, CHISLO_1, KOLVO_CH_MAS = 0;
    system("cls");
    cout << "Vash Massiv:" << endl;
    input(R);
    cout << "Rabotay po zadaniy" << endl;
    cout << "Vash Novyi Matrica:" << endl;
    obrabotk_mas(R);
}}
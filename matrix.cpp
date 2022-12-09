#include "Func.h"
#include <iostream>
using namespace std;
extern "C"{
void input(int(*Q)[STOLBC]) {
    int e, m;
    for (e = 0; e < STROK; e++) {
        for (m = 0; m < STOLBC; m++) {
            Q[e][m] = rand() % 100 - 50;
            cout << Q[e][m] << "\t";

        }
        cout << endl;
    }
}
void obrabotk_matr(int(*Q)[STOLBC]) {
    int e, m,CHISLO_1,KOLVO_CH_MATR=0;
    for (e = 0; e < STROK ; e++)
    {
        for (m = 0; m < STOLBC; m++) {
            CHISLO_1=Q[e][m]%5;
            if (CHISLO_1 == 1)
            {
                cout <<"Iz matricy Q element is stroki "<<e+1<<" i stolbca "<<m+1<<" Delitsya na 5 s ostatkom 1"<<endl;
                KOLVO_CH_MATR++;
            }
        }
    }
    cout << "\nVsego is matricy Q podelilos na 5 s ostatkom 1: "<< KOLVO_CH_MATR <<" chisel"<<endl;
}
void funk(int(*Q)[STOLBC]) {
    int e, m,CHISLO_1,KOLVO_CH_MATR=0;
    system("cls");
    cout << "Vash Matrica:" << endl;
    input(Q);
    cout << "Rabotay po zadaniy" << endl;
    cout << "Vash Novyi Matrica:" << endl;
    obrabotk_matr(Q);
}
}


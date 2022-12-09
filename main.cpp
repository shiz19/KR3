#include <iostream>
#include "Func.h"
#define RAZM_MAS 38
using namespace std;
int main() {
    int Q[STROK][STOLBC], R[RAZM_MAS];
    char menu;
    cout << "S chem Rabotaev?" << endl;
    cout << "1. Massiv" << endl;
    cout << "2. Matrica" << endl;
    cout << "3. Exit" << endl;
    cin >> menu;
    switch (menu) {
        case '1': {
            system("cls");
            cout << "Vash Massiv:" << endl;
            cout << "Rabotay po zadaniy" << endl;
            cout << endl;
            func(R);
            break;
        }
        case '2': {
            system("cls");
            cout << "Vasha matryca:" << endl;
            funk(Q);
            cout << "Rabotay po zadaniy" << endl;

            cout << endl;
            break;
        }
        case '3': {
            return 0;
        }
        default:
            break;
    }

    system("pause");
}
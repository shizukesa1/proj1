 

#include <iostream>
#include"time.h"
#include<iomanip>
using namespace std;

int main()
{
    srand(time(NULL));
    const int m = 5;
    const int n = 5;
    int mas[n][m];
    int max;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            mas[i][j] = rand() % 45 - 13;
            cout << setw(4) << mas[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        }
    }
    cout << "*************************************" << endl;
    max = mas[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mas[i][j] > max) {
                max = mas[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mas[i][j] == max) {
                mas[i][j] = 0;
            }
            cout << setw(4) << mas[i][j];
        }
        cout << endl;
    }
    return 0;
}

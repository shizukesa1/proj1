#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    cout <<"add code for lr 9"
    double a, b, c, x, F;
    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;
    cout << "Enter c" << endl;
    cin >> c;
    cout << "Enter x" << endl;
    cin >> x;
    if ((x < 5) && (c != 0)) {
        F = -a * pow(x, 2) - b;
        cout << " F = -a * pow(x, 2) - b =" << F << endl;
    }
    else {
        if ((x > 5) && (c == 0)) {
            F = (x - a) / x;
            cout << "F = (x - a) / x =" << F << endl;
        }
        else {
            if (c != 0) {
                F = -1 * x / c;
                cout << "F=-x/c= " << F << endl;
            }
            else {
                cout << "F=-x/c " << endl;
                cout << "division by zero";
            }
        }
    }
}

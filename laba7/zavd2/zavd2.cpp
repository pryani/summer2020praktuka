#include <iostream>
#include <random>
#include <cstdlib>
#include <time.h>
using namespace std;
int mass(int m, int n) {
    srand(time(NULL));
    int a[10][10];
    int dob = 1;
    for (int k = 0; k < m; k++) {
        for (int j = 0; j < n; j++) {
            a[k][j] = rand() % 109 + (-37);
            cout << a[k][j] << "  ";
        }
        cout << endl;
    }
    for (int k = 0; k < 2; k++) {
        for (int j = 0; j < n; j++) {
            dob *= a[k][j];
        }
    }
    cout << "Добуток перших 2 рядків: " << dob << endl;
    return 0;
}
int main(int argc, const char* argv[]) {
    // insert code here...
    setlocale(LC_ALL, "Russian");
    int m, n;
    cout << "Введіть M,N: " << endl;
    cin >> m >> n;
    mass(m, n);
    return 0;
}
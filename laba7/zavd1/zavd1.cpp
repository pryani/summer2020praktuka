#include <iostream>
#include <cstdlib>
#include <random>
#include <time.h>
using namespace std;
int mass(int k, int i) {
    srand(time(NULL));
    int y[3];
    for (int j = 0; j < k; j++) {
        y[j] = rand() % 109 + (-37);
        i++;
        cout << y[j] << "   ";
    }
    int dob, sum;
    dob = 1;
    sum = 0;
    for (int j = 0; j < k; j++) {
        if (y[j] > 0) {
            sum += 1;
        }
        else {
            dob *= y[j];
        }
    }
    cout << endl << "Добуток: " << dob;
    cout << endl << "Кількість: " << sum << endl;
    return 0;
}
int main(int argc, const char* argv[]) {
    // insert code here...
    setlocale(0, "ukrainian");
    int k, i;
    cout << "Введіть K(від 1 до 12): ";
    cin >> k;
    cout << "Введіть номер варіанту: ";
    cin >> i;
    mass(k, i);
    return 0;
}
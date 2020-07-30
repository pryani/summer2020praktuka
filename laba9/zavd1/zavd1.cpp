#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, const char* argv[]) {
    // insert code here...
    int n;
    cout << "Введіть N: " << endl;
    cin >> n;
    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }
    int plus[n];
    int minus[n];
    for (int i = 0; i < n; i++) {
        plus[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        minus[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 109 + (-37);
            cout << arr[i][j] << "\t" << "\t";
            if (arr[i][j] > 0) {
                plus[j] = 1;
            }
            else if (arr[i][j] < 0) {
                minus[j] = 1;
            }
        }
        cout << endl;
    }
    cout << endl << rand() % n << endl;
    delete[] arr;
    return 0;
}

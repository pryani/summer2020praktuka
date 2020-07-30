#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(int argc, const char* argv[]) {
    setlocale(LC_ALL, "Russian");
    int v[11];
    int sum, dob;
    sum = 0;
    dob = 1;
    for (int i = 1; i <= 11; i++) {
        v[i] = (rand() % 50 + 1);
        cout << v[i] << "   ";
        if (i % 2 == 0) {
            sum += v[i];
        }
        else {
            dob = dob * v[i];
        }
    };
    cout << endl << "Сума елементiв що мають парний iндекс : " << sum << endl;
    cout << "Добуток елементiв що мають не парний iндекс: " << dob << "     ";
    return 0;
}

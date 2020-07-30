
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, const char* argv[]) {
    // insert code here...
    setlocale(LC_ALL, "Russian");
    int k[3][6];
    int kilk;
    kilk = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            k[i][j] = rand() % 109 + (-37);
            cout << k[i][j] << "   ";
            if (k[i][j] < 0) {
                kilk += 1;
            }
        }
        cout << endl;
    }
    cout << endl << "Кiлькість вiд'ємних елементiв: " << kilk;
    return 0;
}


#include <iostream>
#include <math.h>
using namespace std;
void krug(int x, int y, int r) {
    if (pow(x, 2) + pow(y, 2) <= pow(r, 2)) {
        cout << "Точка входить в круг " << endl;
    }
    else {
        cout << "Точка не входить в круг " << endl;
    }
}
int main(int argc, const char* argv[]) {
    setlocale(0, "ukrainian");
    // insert code here...
    int x, y, r;
    cout << "Введіть X, Y, R: " << endl;
    cin >> x >> y >> r;
    krug(x, y, r);
    return 0;
}
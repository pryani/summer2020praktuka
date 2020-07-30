#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <stdio.h>

using namespace std;
int main(int argc, const char* argv[]) {
    // insert code here...
    setlocale(LC_ALL, "Russian");
    char stringg[50];
    cout << "Введіть ПІБ" << endl;
    gets_s(stringg);
    double length;
    length = strlen(stringg);
    cout << "Довжина рядка: " << length << endl;
    int a;
    a = 0;
    for (int i = 0; i < length; i++) {
        if (stringg[i] == 'a') {
            a += 1;
        }
    }
    cout << "Кількість букв А: " << a << endl;
    char mas[20];
    for (int i = 0; i < length; i++) {
        if (stringg[i] == ' ') {
            break;
        }
        mas[i] = stringg[i];
    }
    string str = string(mas);
    reverse(str.begin(), str.end());
    string name = string(stringg);

    for (int i = 0; i < name.length(); i++) {
        name.erase(i, 1);
        if (name[i] == ' ') {
            break;
        }
    }
    name.erase(0, 4);
    int count = 0;
    for (int i = 0; i < name.length(); i++) {
        if (name[i] == ' ') {
            break;
        }
        count += 1;
    }
    count += 4;
    cout << str << " " << endl;
    cout << "Кількість букв в імені: " << count << endl;
    return 0;
}

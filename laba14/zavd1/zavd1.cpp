#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char* argv[]) {
    // insert code here...
    setlocale(LC_ALL, "Russian");
    string s;
    string s1;
    string s2;
    cout << "Введіть першу строку: " << endl;
    getline(cin, s);
    cout << "Введіть другу строку: " << endl;
    getline(cin, s1);
    for (double i = s.length(); i > 0; i--) {
        if (s[i] == ' ') {
            s.erase(i, 1);
            s.insert(i, s1 + " ");
        }
    }

    cout << s << endl;
    return 0;
}
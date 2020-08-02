#include <iostream>
#include <string.h>

using namespace std;
struct study {
    int  count;
    char type;
};
int main()
{
    setlocale(LC_ALL, "Russian");
    int countt;
    char typee[50];
    int n, c;
    c = 0;
    cout << "введіть кількість навчальних закладів: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Введіть кількість учнів:\t";
        cin >> countt;
        cout << "Введіть тип навчального закладу:\t";
        cin >> typee;
        string str = string(typee);
        if (str == "school") {
            c += 1;
        }
        str = "";
    }
    cout << endl << c << endl;
    return 0;
}
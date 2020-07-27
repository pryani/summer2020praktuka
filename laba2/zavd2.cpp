#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(int argc, const char * argv[]) {
	setlocale(LC_ALL, "Russian");
    // insert code here...
    int a[10];
    for (int i=0; i<10; i++) {
        a[i]= (rand()% 50 + 1);
        cout<<a[i]<<"   ";
    };
    int tm;
    for (int i=0; i<10; i++) {
        for (int j=0; j<10-i-1; j++) {
            if (a[j] > a[j + 1]) {
                tm = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tm;
            }
        }
    }
    cout<<endl<<"Відсортований масив:"<<endl;
    for (int i =0; i<10; i++) {
        cout<<a[i]<<"   ";
    }
    double s1,s2;
    s1=0;
    s2=0;
    for (int i=0; i<5; i++) {
        s1+=a[i];
    }
    cout<<endl<<"Сума перших пяти елементів: "<<s1;
    for (int i=5; i<10; i++) {
        s2+=a[i];
    }
    cout<<endl<<"Сума останніх пяти елементів: "<<s2;
    double rez;
    rez= s1/s2;
    cout<<endl<<"Результат ділення: "<<rez;
    return 0;
}

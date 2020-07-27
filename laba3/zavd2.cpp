#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    setlocale(LC_ALL, "Russian");
    int g[5][4];
    int mas[20];
    double rez[5];
    int k;
    double n;
    double dob1;


    for (int i=0; i<5; i++) {
        for (int j=0; j<4; j++) {
            g[i][j] = rand() % 109 + (-37);
            cout<<g[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl;
    k=0;
    for (int j=1; j<4; j+=2) {
        n=0;
        dob1=1;
        for (int i=0; i<5; i++) {
            if (g[i][j]>0) {

                n+=1;
                mas[i]=g[i][j];

//                cout<<mas[i]<<"    ";
                dob1*=mas[i];

            }
        }
        rez[k]=pow(dob1,1/n);
        k++;
    }
    cout<<"Результат:"<<endl;
    for (int i=0; i<k; i++) {
        cout<<rez[i]<<"  ";
    }
    return 0;
}

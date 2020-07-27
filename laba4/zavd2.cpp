#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    setlocale(LC_ALL, "Russian");
    int a[3][3];
    a[0][0]= 29;
    a[0][1]=5;
    a[0][2]=-1;
    a[1][0]=3;
    a[1][1]=1;
    a[1][2]=13;
    a[2][0]=-8;
    a[2][1]=4;
    a[2][2]=29;
    int n=3;
    int max,sumd;
    max = a[0][0];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<<a[i][j]<<"   ";
            if (a[i][j]>max) {
                max=a[i][j];
            }
        }
        cout<<endl;
    }
    cout<<endl<<"Максимальний елемент: "<<max<<endl;
    sumd=0;
    for (int i = 0; i < n; i++) {

        sumd+=a[i][n-1-i];
    }
    cout<<"Сума Бічної діагоналі: "<<sumd<<endl;
    int mas[5];
    for (int i=0; i<5; i++) {
        mas[i]=0;
    }
    for (int i =0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i][j]==max) {
                mas[i]=1;
            }
        }
        cout<<endl;
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (mas[i]==1) {
                for (int k=0; k<n; k++) {
                    a[i][k]=sumd;
                }
            }
        }
    }
    for(int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<< a[i][j]<< "   ";
        }
        cout<<endl;
    }
    return 0;
}

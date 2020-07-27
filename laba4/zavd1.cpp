
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Russian");
    int r[9][9];
    int sumun,sum2;
    sumun = 0;
    sum2=0;
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            r[i][j] = rand() % 109 + (-37);
            cout<<r[i][j]<<"    ";
            if (i > j) {
                sumun+=r[i][j];
            }
            if (i<=j) {
                if (r[i][j]>sumun) {
                    sum2+=r[i][j];
                }
            }
        }
        cout<<endl;
    }
    cout<<"≈лементи п≥д д≥агоналю: "<<sumun<<endl;
    cout<<"≈лементи б≥льш≥ за елементи п≥д д≥агоналю: ";
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            if (i<=j) {
                if (r[i][j]>sumun) {
                    cout<<r[i][j]<<"   ";
                }
            }
        }
     }

    cout<<endl<<"—ума елемент≥в б≥льших за елементи п≥д д≥агоналю: "<<sum2<<"   ";
    return 0;
}


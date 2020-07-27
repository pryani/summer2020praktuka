#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(int argc, const char * argv[]) {
	setlocale(LC_ALL, "Russian");
    int v[11];
    int sum, dob;
    sum=0;
    dob=1;
    for (int i=1; i<=11; i++) {
        v[i]= (rand()% 50 + 1);
        cout<<v[i]<<"   ";
        if (i%2 ==0) {
            sum+=v[i];
        } else {
            dob=dob*v[i];
        }
    };
    cout<<endl<<"Сума елементів що мають парний індекс: "<<sum<<endl;
    cout<<"Добуток елементів що мають не парний індекс: "<<dob<<"     ";
    return 0;
}

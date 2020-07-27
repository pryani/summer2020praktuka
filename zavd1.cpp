#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
	setlocale(LC_ALL, "Russian");
    double x,y;
    cout<<"Введіть координати точки(x,y): ";
    cin>>x>>y;
    cout<<"";
    if (x>=-3 && x<=0 && y>=-1 && y<=1 && y<=x+2 && y>=x-1 ) {
        cout<<"Точка входить в область";
    } else {
        cout<<"Точка не входить в область";

    }
    return 0;
}

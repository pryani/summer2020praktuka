#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
	setlocale(LC_ALL, "Russian");
    double x,y;
    cout<<"������� ���������� �����(�,y): ";
    cin>>x>>y;
    cout<<"";
    if (x>=-3 && x<=0 && y>=-1 && y<=1 && y<=x+2 && y>=x-1 ) {
        cout<<"����� ������� � �������";
    } else {
        cout<<"����� �� ������� � �������";

    }
    return 0;
}

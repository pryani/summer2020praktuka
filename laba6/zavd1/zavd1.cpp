#include <iostream>
#include <random>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
    srand(time(NULL));
    setlocale(0, "ukrainian");
    const int t = 6;
    int sum[6];
    for (int i(0); i < 6; i++)
        sum[i] = 0;
    int tmp;
    cout << "|1|2|3|4|5|" << endl;
    for (int i(0); i < 6; i++)
    {
        cout << "__" << i + 1 << "|";
        for (int j(0); j < 5; j++)
        {
            cout.width(5);
            cout.fill('_');
            tmp = rand() % (10 * t + 50);
            sum[i] += tmp;
            cout << tmp << "|";
        }
        cout << endl;
    }
    int mxind = 0;
    for (int i(1); i < 6; i++)
        if (sum[mxind] < sum[i])
            mxind = i;
    cout << endl << "у " << mxind + 1 << " населеному пункті проголосувало найбільше людей" << endl;
    return 0;
}
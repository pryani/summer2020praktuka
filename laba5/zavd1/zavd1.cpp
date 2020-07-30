#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введіть розмір масиву:" << endl;
    cin >> n;
    int* a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Введіть a[" << i << "]\t";
        cin >> a[i];
    }
    for (int* i = a; i < (a + n); i = (i + 2))
        for (int* j = i; j < (a + n); j = (j + 2))
            if (*i > * j)
                swap(*i, *j);
    for (int* i = (a + 1); i < (a + n); i = (i + 2))
        for (int* j = i; j < (a + n); j = (j + 2))
            if (*i < *j)
                swap(*i, *j);
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    delete[] a;
    return 0;
}

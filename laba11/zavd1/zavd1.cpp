#include <iostream>
using namespace std;
struct baginfo
{
	unsigned int count;
	double weight;
};
int main()
{

	baginfo data[24];
	int sumcount = 0;
	double sumweight = 0;
	for (int i(0); i < 24; i++)
	{
		cout << "passenger #" << i + 1 << endl;
		cout << "input count:\t";
		cin >> data[i].count;
		cout << "input weight:\t";
		cin >> data[i].weight;
		sumcount += data[i].count;
		sumweight += data[i].weight;
	}
	double avercount = sumcount / 24;
	double averweight = sumweight / sumcount;
	int firstp = 0;
	for (int i(0); i < 24; i++)
		if (data[i].count > 2)
			firstp++;
	cout << "1.) " << firstp << endl;
	int secoundp = 0;
	for (int i(0); i < 24; i++)
		if (data[i].count == 1 && data[i].weight < 25)
			secoundp++;
	cout << "2.) " << secoundp << endl;
	int thirdp = 0;
	for (int i(0); i < 24; i++)
		if (data[i].count > avercount)
			thirdp++;
	cout << "3.) " << thirdp << endl;
	for (int i(0); i < 24; i++)
		if (abs((data[i].weight / data[i].count) - averweight) < 0.5)
		{
			cout << "4.) " << i + 1 << endl;
			goto metka;
		}
	cout << "4.) passenger not found" << endl;
metka:
	system("pause");
	return 0;
}
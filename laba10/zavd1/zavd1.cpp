#include <iostream>
#include <string>
using namespace std;
struct airinfo
{
	unsigned int number;
	string type;
	string destairport;
	string days;
	unsigned int distance;
	unsigned int cost;
	static airinfo mincostK(airinfo* data, int count)
	{
		airinfo result;
		result.number = -1;
		int min = 0;
		for (int i(1); i < count; i++)
			if (data[min].cost > data[i].cost && data[i].destairport == "Kyiv")
				min = i;
		if (data[min].destairport != "Kyiv")
			return result;
		result.number = data[min].number;
		result.type = data[min].type;
		result.destairport = data[min].destairport;
		result.days = data[min].days;
		result.distance = data[min].distance;
		result.cost = data[min].cost;
		return result;
	}
};
int main()
{
	int n;
	cout << "input count of flights" << endl;
	cin >> n;
	airinfo* data = new airinfo[n];
	for (int i(0); i < n; i++)
	{
		cout << i + 1 << endl;
		data[i].number = i + 1;
		cout << "input type:\t";
		cin >> data[i].type;
		cout << "input destination airport:\t";
		cin >> data[i].destairport;
		cout << "input departure days:\t";
		cin >> data[i].days;
		cout << "input distance:\t";
		cin >> data[i].distance;
		cout << "input cost:\t";
		cin >> data[i].cost;
	}
	airinfo mincost = airinfo::mincostK(data, n);
	if (mincost.number != -1)
	{
		cout << "\nRESULT:";
		cout << "\nnumber:\t" << mincost.number;
		cout << "\ntype:\t" << mincost.type;
		cout << "\ndestination airport:\t" << mincost.destairport;
		cout << "\ndeparture days:\t" << mincost.days;
		cout << "\ndistance:\t" << mincost.distance;
		cout << "\ncost:\t" << mincost.cost;
	}
	else
		cout << "\nRESULT:\ndata not found" << endl;
	delete[] data;
	system("pause");
	return 0;
}
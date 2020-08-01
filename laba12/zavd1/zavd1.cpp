#include <iostream>

using namespace std;
struct list
{
	int data;
	list* ptr;
};
list* createlist(int data = 0)
{
	list* tail = new list;
	tail->data = data;
	tail->ptr = NULL;
	return tail;
}
void addlist(list*& head, int data)
{
	list* ptr = new list;
	ptr->data = data;
	ptr->ptr = NULL;
	head->ptr = ptr;
	head = ptr;
}
void insertlist(list* iter, int data)
{
	list* ptr = new list;
	ptr->data = data;
	list* tmp = iter->ptr;
	iter->ptr = ptr;
	ptr->ptr = tmp;

}
void deletelist(list* tail)
{
	if (tail == NULL)
		return;
	list* ptr = tail->ptr;
	delete tail;
	deletelist(ptr);
};
void dpllist(list* iter)
{
	for (int i(0); iter != NULL; i++)
	{
		if ((i ) % 2 == 0)
		{
			insertlist(iter, iter->data);
			iter = iter->ptr;
		}
		iter = iter->ptr;
	}
}
void printlist(list* tail)
{
	cout << "\nlist:\n";
	while (tail != NULL)
	{
		cout << tail->data << ' ';
		tail = tail->ptr;
	}
}
int main()
{
	int n;
	cout << "input count:\t";
	cin >> n;
	int tmp;
	cout << "input 1 element :\t";
	cin >> tmp;
	list* tail = createlist(tmp);
	list* head = tail;
	for (int i(1); i < n; i++)
	{
		cout << "input " << i +1 << " element :\t";
		cin >> tmp;
		addlist(head, tmp);
	}
	dpllist(tail);
	printlist(tail);
	deletelist(tail);
	system("pause");
	return 0;
}
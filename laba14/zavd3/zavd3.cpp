#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, const char* argv[]) {
    int count;
    cout << "input count of lines of text:\t";
    cin >> count;
    vector<string> text;
    const char del[4] = { '\t','\n','.',',' };
    string temp;
    cin.ignore();
    for (int i(0); i < count; i++)
    {
        getline(cin, temp);
        for (int j(0); j < 4; j++)
            while (temp.find(del[j]) != -1)
                temp.erase(temp.find(del[j]), 1);
        text.push_back(temp);
    }

    for (int i(0); i < text.size(); i++)
        cout << text[i] << endl;
    cout << endl;
    system("pause");
    return 0;
}

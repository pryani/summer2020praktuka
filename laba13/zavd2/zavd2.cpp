#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, const char* argv[]) {
    int count1;
    cout << "input count of lines of first text:\t";
    cin >> count1;
    vector<string> words_ftext;
    string temp;
    cin.ignore();
    for (int i(0); i < count1; i++)
    {
        getline(cin, temp);
        char delim = ' ';
        while (temp.find(delim) != -1)
        {
            words_ftext.push_back(temp.substr(0, temp.find(delim)));
            temp.erase(0, temp.find(delim) + 1);
        }
        words_ftext.push_back(temp);

    }
    for (int i(0); i < words_ftext.size(); i++)
    {
        while (words_ftext[i].find('.') != -1)
            words_ftext[i].erase(words_ftext[i].find('.'), 1);
        while (words_ftext[i].find(',') != -1)
            words_ftext[i].erase(words_ftext[i].find(','), 1);
        while (words_ftext[i].find('!') != -1)
            words_ftext[i].erase(words_ftext[i].find('!'), 1);
    }
    int count2;
    cout << "input count of lines of second text:\t";
    cin >> count2;
    cin.ignore();
    vector<string> text2;
    for (int i(0); i < count2; i++)
    {
        getline(cin, temp);
        for (int j(0); j < words_ftext.size(); j++)
            while (temp.find(words_ftext[j]) != -1)
                temp.erase(temp.find(words_ftext[j]), words_ftext[j].length());
        text2.push_back(temp);
    }
    for (int i(0); i < text2.size(); i++)
        cout << text2[i] << endl;
    cout << endl;
    system("pause");
    return 0;
}

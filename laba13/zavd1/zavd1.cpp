
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main(int argc, const char* argv[]) {
    // insert code here...
    string path = "text.txt";
    string path2 = "text1.txt";
    ifstream fin;
    fin.open(path);
    ofstream file;
    file.open(path2);
    if (!fin.is_open()) {
        cout << "Error, file is not opened" << endl;
    }
    else {
        string str;
        while (!fin.eof()) {
            str = "";
            getline(fin, str);
            if (str[str.size() - 1] == '!') {
                str = "";
            }

            file << str << "\n";

            cout << str << endl;
        }
    }
    file.close();
    fin.close();
    return 0;
}

#include<iostream>
using namespace std;
// case check

int main() {
	char ch;
    cout << "Enter a character" << endl;
    cin >> ch;
	if (ch >= 'A' && ch <= 'Z')
        cout << "1" << endl;
    else if (ch >= 'a' && ch <= 'z')
        cout << "0" << endl;
    else
        cout << "-1" << endl;
}

#include<iostream>
using namespace std;
// character patterns

int main(){
	int n,i,j;
    cin >> n;
    for (i=1;i<=n;i++) {
        for (j=1;j<=i;j++) {
            char ch = 'A'+i-1;
            cout << ch;
        }
        cout << endl;
    }
    for (i=1;i<=n;i++) {
        char ch = 'A'+i-1;
        for (j=1;j<=i;j++) {
            cout << ch;
            ch=ch+1;
        }
        cout << endl;
    }
    for (i=1;i<=n;i++) {
        char ch = 'A'+n-i;
        for (j=1;j<=i;j++) {
            cout << ch;
            ch=ch+1;
        }
        cout << endl;
    } 
}

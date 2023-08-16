#include<iostream>
using namespace std;
// diamond pattern

int main() {
	int n,i,j;
    cin >> n;
    for (i=1;i<=n/2+1;i++) {
        for (j=1;j<=n;j++) {
            if (j<=(n/2 + 1)-i || j>=(n/2 + 1)+i) {
                cout << " ";
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }
    for (i=1;i<=n/2;i++) {
        for (j=1;j<=n;j++) {
            if (j<=i || j>n-i) {
                cout <<" ";
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

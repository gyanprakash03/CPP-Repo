#include<iostream>
using namespace std;
// more patterns

int main(){
	int n,i,j;
    cin >> n;
    for (i=1;i<=n;i++) {
        int num = 1;
        for (j=1;j<=n;j++) {
            if (j<=n-i) {
                cout << " ";
            }
            else {
                cout << num;
                num++;
            }
        }
        cout << endl;
    }
    int z=n;
    for (i=1;i<=n;i++) {
        for (j=1;j<=n-i+1;j++) {
            cout << z;
        }
        cout << endl;
        z=z-1;
    }
}

#include <iostream>
using namespace std;
// pyramid number pattern

int main() {
	int n,i,j;
    int k=2;
    int m=0;
    cin >> n;
    for (i=1;i<=n;i++) {
        int z=i;
        for (j=1;j<2*n;j++) {
            if (j>n-i && j<=n) {
                cout << z;
                z++;
            }
            else if (j<=n-i || j>=n+i) {
                cout << " ";
            }
            else {
                cout << m;
                m=m-1;
            } 
        }
        cout << endl;
        m=0;
        m=m+k;
        k=k+2;
    }
}

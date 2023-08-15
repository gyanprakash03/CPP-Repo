#include <iostream>
using namespace std;
// all prime numbers between

int main(){
	int n,i,j;
    cin >> n;
    cout << "2" << endl;
    for (i=3;i<=n;i++) {
        int p=0;
        for (j=2;j<i;j++) {
            if (i%j==0) {
                break;
            }
            else {
                p++;
            }
        }
        if (p==(i-2)) {
            cout << i << endl;
        }
    }
}
#include<iostream>
using namespace std;
//  reverse number pattern

int main(){
	int n,i,j,k;
    cin >> n;
    for (i=1;i<=n;i++) {
        k=i;
        for (j=1;j<=i;j++) {
            cout << k;
            k=k-1;
        }
        cout << endl;
    }
}

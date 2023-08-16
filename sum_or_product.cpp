#include<iostream>
using namespace std;
// sum or product

int main() {
	int n,i;
    cin >> n;
    int c;
    cin >> c;
    int sum=0;
    int product=1;
    if (c==1) {
        for (i=1;i<=n;i++) {
            sum = sum + i;
        }
        cout << sum << endl;
    }
    else if (c==2) {
        for (i=1;i<=n;i++) {
            product = product * i;
        }
        cout << product << endl;
    }
    else {
        cout << "-1" << endl;
    }
}

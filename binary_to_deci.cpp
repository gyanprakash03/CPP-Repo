#include<iostream>
using namespace std;
// binary to decimal

int main() {
	int n,i;
    cin >> n;
    int count=0;
    int num;
    int deci=0;
    while (n!=0) {
        int p = n%10;
        num = p;
        for (i=1;i<=count;i++) {
            num = num*2;
        }
        count++;
        deci = deci + num;
        n=n/10;
    }
    cout << deci;
}
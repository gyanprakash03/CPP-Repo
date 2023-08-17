#include<iostream>
using namespace std;

int main() {
	int n;
    cin >> n;
    int rev = 0;
    while (n!=0) {
        int p = n%10;
        n = n/10;
        rev = rev*10 + p;
    }
    cout << rev;
}

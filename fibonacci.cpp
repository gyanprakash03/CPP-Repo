#include<bits/stdc++.h>
using namespace std;
// fibonacci series

int fibonacci(int a) {
    if (a==1) {
        return 0;
    }
    else if (a==2) {
        return 1;
    }
    else 
        return fibonacci(a-1) + fibonacci (a-2);
}    

int main() {
    int n;
    cin >> n;
	cout << fibonacci(n);
}


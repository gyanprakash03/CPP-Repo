#include<iostream>
using namespace std;

int main() {
	int x, n, z, i;
    cin >> x >> n;
    z = x;
    if(n == 0) {
        cout << "1" << endl;
    }
    else if(n == 1) {
        cout << x << endl;
    }
    else {   
    	for(i=2;i<=n;i++) {
            z = z*x;
    	}
        cout << z << endl;
    }
    
}

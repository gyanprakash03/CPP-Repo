#include<iostream>
using namespace std;
// terms of ap

int main() {
	int n,i;
    cin >> n;
    int count=0;
    for (i=1;;i++) {
        int p = ((3*i)+2);
        if (p%4 != 0) {
            cout << p << " ";
            count++;
        }
        if (count == n) {
            break;
        }
    }
}

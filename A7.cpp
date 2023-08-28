#include<iostream>
using namespace std;
// sum of even and odd

int main() {
	 int N, even = 0, odd = 0, r;
    cin >> N;

    while ( N> 0) {
        r = N % 10;
        if (r % 2 == 0) {
          even = even + r;
        }
        else {
          odd = odd + r;
        }
        N = N/ 10;
    }

    cout << even << " " << odd;

}

#include<iostream>
using namespace std;
// pyramid star pattern

int main(){
	int i,j;
    int N;
    cin >> N;
    for (i=1;i<=N;i++) {
        for (j=1;j<2*N;j++) {
            if (j>N-i && j<N+i) {
            	cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

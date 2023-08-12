#include<iostream>
using namespace std;
// sum of even numbers till N

int main(){
	int N,i;
    int sum=0;
    cin >> N;
    for (i=2;i<=N;i+=2) {
        sum += i;
    }
    cout << sum << endl;
}
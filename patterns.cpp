#include<iostream>
using namespace std;
// patterns

int main(){
	int i,j;
    int N;
    int num=1;
    cin >> N;
    for(i=1;i<=N;i++) {
        for(j=1;j<=i;j++) {
            cout << num;
            num++;
        }
        cout << endl;
        num=num-(i-1);   
    }

    int k;
    num=1;
    cin >> N;
    for(i=1;i<=N;i++) {
        for(k=1;k<=N-i;k++) {
            cout << " ";
        }
        for(j=1;j<=i;j++) {
            cout << num;
            num++;
        }
        cout << endl;
        num=num-(i-1);   
    }
}


#include<iostream>
using namespace std;
// farhenheit to celcius table

int main(){
    int S,E,W,i;
    cin >> S >> E >> W;
    for(i=S;i<=E;i+=W) {
        cout << i << " " << ((i-32)*5)/9 << endl;
    }
}

#include <iostream>
using namespace std;

// function to print numberrs from 1 to n using recursion

void print(int n){
    static int x=1;
    if (x==n+1){
        return;
    }
    cout << x << " ";
    x++;
    print (n);
}

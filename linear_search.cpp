#include<iostream>
using namespace std;
// linear search

int linearSearch(int *arr, int n, int x)
{
    int i;
    for (i=0;i<n;i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main () {
    int t;
    cin >> t;
    int n,i,j,x;
    int arr[100000];
    for (i=1;i<=t;i++) {
        cin >> n;
        for (j=0;j<n;j++) {
            cin >> arr[j];
        }
        cin >> x;
        int index = linearSearch(arr,n,x);
        cout << index;
    }
}
#include<iostream>
using namespace std;
// count characters

int main(){
	int n;
    n = cin.get();
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    while (n != '$') {
        if (n>='a' && n<='z') {
            count1++;
        }
        else if (n>='0' && n<='9') {
            count2++;
        }
        else {
            count3++;
        }
        n = cin.get();
    }
    cout << count1 << " " << count2 << " " << count3;
}

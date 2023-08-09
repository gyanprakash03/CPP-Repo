#include<iostream>
#include<cmath>
using namespace std;
// total salary

int main() {
	double hra, da, pf, totalSalary;
    int basic, allow;
    char grade;
    cin >> basic >> grade;
    if(grade == 'A') {
        allow = 1700;
    }
    else if(grade == 'B') {
        allow = 1500;
    }
    else {
        allow = 1300;
    }
    hra = 0.20*basic;
    da = 0.50*basic;
    pf = 0.11*basic;
    totalSalary = round(basic + hra + da + allow - pf);
    if(basic >= 0 && basic <=7500000) {
        cout << totalSalary << endl;
    }
}
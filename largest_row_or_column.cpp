#include <iostream>
using namespace std;

// function to print the largest row/column sum in a 2d array

void findLargest(int **input, int nRows, int mCols)
{
    int num = -2147483648;
    int index;
    for (int i=0;i<nRows;i++) {
        int sum = 0;
        for (int j=0;j<mCols;j++) {
            sum = sum + input[i][j];
        }
        if (sum > num) {
            num = sum;
            index = i;
        }
    }
    int num1 = -2147483648;
    int index1;
    for (int j=0;j<mCols;j++) {
        int sum1 = 0;
        for (int i=0;i<nRows;i++) {
            sum1 = sum1 + input[i][j];
        }
        if (sum1 > num1) {
            num1 = sum1;
            index1 = j;
        }
    }
    if (num >= num1) {
        cout << "row" << " " << index << " " << num;
    }
    else {
        cout << "column" << " " << index1 << " " << num1;
    }
}
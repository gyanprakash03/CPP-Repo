#include <iostream>
using namespace std;

//  function to print a 2d array in spiral way

void spiralPrint(int **input, int nRows, int nCols)
{
        int cs = 0;
    int ce = nCols-1;
    int rs = 0;
    int re = nRows-1;
    int count = 0;
    int num = nRows * nCols;
    while (count < num) {
        for (int i=cs;i<=ce;i++) {
            cout << input[rs][i] << " ";
            count++;
        }
        for (int i=rs+1;i<=re;i++) {
            cout << input[i][ce] << " ";
            count++;
        }
        rs = rs+1;
        for (int i=ce-1;i>=cs;i--) {
            cout << input[re][i] << " ";
            count++;
        }
        ce = ce-1;
        for (int i=re-1;i>=rs;i--) {
            cout << input[i][cs] << " ";
            count++;
        }
        re = re-1;
        cs = cs+1;
    }
}

void spiralPrint(int **input, int nRows, int nCols)
{
    int i, k = 0, l = 0;
    
    while (k < nRows && l < nCols) {
        for (i = l; i < nCols; ++i) {
            cout << input[k][i] << " ";
        }
        k++;
        for (i = k; i < nRows; ++i) {
            cout << input[i][nCols - 1] << " ";
        }
        nCols--;
        if (k < nRows) {
            for (i = nCols - 1; i >= l; --i) {
                cout << input[nRows - 1][i] << " ";
            }
            nRows--;
        }
        if (l < nCols) {
            for (i = nRows - 1; i >= k; --i) {
                cout << input[i][l] << " ";
            }
            l++;
        }
    }
}
#include<iostream>
using namespace std;
// intersection of two arrays

void intersection(int *input1, int *input2, int size1, int size2)
{
    int i, j, k;
    int count = 0;
    int num = 0;
    for (i = 0; i < size1; i++) {
                for (k = 0; k < size2; k++)
                {
                    if (input1[i] == input2[k])
                    {
                        count++;
                        input2[k] = -99999;
                        break;
                    }
                }
                if (count > 0)
                {
                    cout << input1[i];
                    cout << " ";
                }
        count = 0;
    }
}
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// function to find the number of pairs whose sum equals to x

int pairSum(int *input, int size, int x)
{
    int i, j;
    int count = 0;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (input[i] + input[j] == x)
            {
                count++;
            }
        }
    }
    return count;
}

// function to find the number of triplets whose sum equals x

int tripletSum(int *input, int size, int x)
{
    int i, j, k;
    int count = 0;
    for (i = 0; i < size - 2; i++)
    {
        for (j = i + 1; i < size - 1; j++)
        {
            for (k = j + 1; k < size; k++)
            {
                if (input[i] + input[j] + input[k] == x)
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int tripletSum2(int *input, int size, int x)
{
    sort(input, input + size);
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        int a = i + 1;
        int b = size - 1;
        int p = input[i];
        while (a < b)
        {
            if (p + input[a] + input[b] == x)
            {
                count ++;
                a++;
                b--;
            }

            else if (p + input[a] + input[b] < x)
                a++;

            else
                b--;
        }
    }
    return count;
}

// int main ()
// {
//     int input[10];
//     int i;
//     for (i=0;i<6;i++) {
//         cin >> input[i];
//     }
//     int x = 4;
//     int size = 6;
//     int count = tripletSum(input,size,x);
//     cout << count;
// }
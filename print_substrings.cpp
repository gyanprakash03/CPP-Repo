#include <iostream>
using namespace std;

// function to print all substrings of a character array

void printSubstrings(char input[]) {
    for (int k=0;input[k]!='\0';k++) {
        for (int i=k;input[i] != '\0';i++) {
            for (int j=k;j<=i;j++) {
                cout << input[j];
            }
            cout << endl;
        }
    }
}
#include <cstring>
// function to remove all duplicate characters in an string

void removeConsecutiveDuplicates(char input[]) {
    if (input[0] == '\0') {
        return;
    }
    char str[1000000];
    str[0] = input[0];
    int k=1;
    for (int i=1;input[i]!='\0';i++) {
        if (input[i] != input[i-1]) {
            str[k] = input[i];
            k++;
        }
    }
    strcpy(input,str);
}
// function to check if a string is a permutation of the other

bool isPermutation(char input1[], char input2[]) {
    int frq[256];
    for (int i=0;i<256;i++) {
        frq[i] = 0;
    }
    for (int i=0;input1[i]!='\0';i++) {
        frq[input1[i]]++;
    }
    for (int i=0;input2[i]!='\0';i++) {
        frq[input2[i]]--;
    }
    for (int i=0;i<256;i++) {
        if (frq[i] != 0) {
            return false;
        }
    }
    return true;
}
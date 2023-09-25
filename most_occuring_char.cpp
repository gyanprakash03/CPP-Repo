// function to return the highest occuring character

char highestOccurringChar(char input[]) {
    int frq[256];
    for (int i=0;i<256;i++) {
        frq[i] = 0;
    }
    for (int i=0;input[i]!='\0';i++) {
        frq[input[i]]++;
    }
    int num=0;
    char one;
    for (int i=0;i<256;i++) {
        if (frq[i] > num) {
            num = frq[i];
            one = i;
        }
    }
    return one;
}
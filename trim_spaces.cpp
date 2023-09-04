
// function to trim spaces in an array

void trimSpaces(char input[]) {
    int i=0;
    int k=0;
    while (input[i] != '\0') {
        if (input[i] != ' ') {
            input[k] = input[i];
            k++;
        }
        i++;
    }
    input[k]='\0';
}
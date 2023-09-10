// function to remove all occurences of a character in a string

void removeAllOccurrencesOfChar(char input[], char c) {
    for (int i=0;input[i] != '\0';i++) {
        if (input[i] == c) {
            for (int j=i;input[j] != '\0';j++) {
                input[j] = input[j+1];
            }
            i=i-1;
        }
    }
}
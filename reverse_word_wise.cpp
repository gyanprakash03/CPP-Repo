// function to reverse a string word wise i.e., first word will be last word

void reverseStringWordWise(char input[]) {
    int count=0;
    for (int i=0;input[i]!='\0';i++) {
        count++;
    }
    int j=count-1;
    int i=0;
    while(i<j) {
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
    int b=0;
    for (int k=0;k<=count;k++) {
        if (input[k]==' ' || input[k]=='\0') {
            int a = k-1;
            while(b<a) {
                char temp=input[b];
                input[b]=input[a];
                input[a]=temp;
                b++;
                a--;
            }
            b = k+1;
        }
    }
}
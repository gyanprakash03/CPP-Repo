// function to find out the minimum length word in a string

void minLengthWord(char input[], char output[]){
    int ab=0;
	for (int i=0;input[i]!='\0';i++) {
        ab++;
    }
	int num=0;
    int count;
    int len=ab;
    for (int i=0;i<ab;i++) {
        if (input[i]==' ' || input[i]=='\0') {
            count = i-num;
            if(count<len) {
                int k=0;
                len = count;
                for (int z=0;z<ab;z++) {
                    output[z] = '\0';
                }
                for (int m=num;m<i;m++) {
                    output[k] = input[m];
                    k++;
                }
            }
            num = i+1;
        }
    }

}
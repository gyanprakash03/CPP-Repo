// function to push all zeros in an array to the end

void pushZeroesEnd(int *input, int size)
{
    int k=0;
    for (int i=0;i<size;i++){
        if (input[i] != 0) {
            input[k]=input[i];
            k++;
        }
    }
    for (int i=k;i<size;i++) {
        input[i]=0;
    }
}
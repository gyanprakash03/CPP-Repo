// function to perform intersection sort

void insertionSort(int *input, int size)
{
    int j;
    for (int i=1;i<size;i++) {
        int temp = input[i];
        for (j=i-1;j>=0;j--) {
            if (temp < input[j]) {
                input[j+1] = input[j];
            }
            else {
                break;
            } 
        }
        input[j+1] = temp;
    }
}
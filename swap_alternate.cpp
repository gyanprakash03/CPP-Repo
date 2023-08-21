
// function to swap alternate elements of an array

void swapAlternate(int *arr, int size)
{
    int i;
    int j=1;
    if (size%2 == 0) {
        for (i=0;i<size;i=i+2) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j=j+2;
        }
    }
    else {
        for (i=0;i<size-1;i=i+2) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j=j+2;
        }
    }
}
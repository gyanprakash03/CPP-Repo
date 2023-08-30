// function to rotate an array to a certain extent

void rotate(int *input, int d, int n)
{
    int k=0;
    int arr[d];
    for (int i=0;i<d;i++) {
        arr[i]=input[i];
    }
    for (int i=d;i<n;i++) {
        input[k]=input[i];
        k++;
    }
    int j=0;
    for (int i=k;i<n;i++) {
        input[i] = arr[j];
        j++;
    }
}
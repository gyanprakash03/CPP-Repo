
// function to merge two sorted arrays into one sorted array

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int i=0;
    int j=0;
    int k=0;
    if (size1==0) {
        while(j<size2) {
        ans[k] = arr2[j];
        j++;
        k++;
    }
    }
    if (size2 == 0) {
        while(i<size1) {
        ans[k] = arr1[i];
        i++;
        k++;
    }
    }
    else {
        while(i<size1 && j<size2) {
            if (arr1[i] < arr2[j]) {
                ans[k] = arr1[i];
                k++;
                i++;
            }
            else if(arr1[i] > arr2[j]) {
                ans[k] = arr2[j];
                k++;
                j++;
            }
            else if(arr1[i] == arr2[j]) {
                ans[k] = arr1[i];
                ans[k+1] = arr2[j];
                k=k+2;
                i++;
                j++;
            }
        }
        while(i<size1) {
            ans[k] = arr1[i];
            i++;
            k++;
        }
        while(j<size2) {
            ans[k] = arr2[j];
            j++;
            k++;
        }
    }
}
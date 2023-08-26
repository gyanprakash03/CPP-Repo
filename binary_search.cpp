
// function to do a binary search 

int binarySearch(int *input, int n, int val)
{
    int str = 0;
    int end = n-1;
    if(val<input[str] || val>input[end]){
		return -1;
	}
    while (str <= end) {
    	int mid = (str + end)/2;
        if (input[mid] == val) {
            return mid;
        }
        else if (input[mid] < val) {
            str = mid+1;
        }
        else {
            end = mid-1;
        }
    }
   
}
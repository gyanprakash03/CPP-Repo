// function to find the first index having number x using recursion

int firstIndex(int input[], int size, int x) {
	if (size==0) {
        return -1;
    }
    static int i = 0;
    int so;
    if (input[0]==x) {
        return i;
    }
    else {
        i++;
        so = firstIndex(input+1,size-1,x);
    }
    return so;
}
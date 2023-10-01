// function to check whether a numbeer is present in an array using recursion

bool checkNumber(int input[], int size, int x) {
	if (size==0) {
        return false;
    }
    int so;
    if (input[0]==x) {
        return true;
    }
    else {
        so = checkNumber(input+1,size-1,x);
    }
    return so;
}

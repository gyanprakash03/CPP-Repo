// function to find power of a number using recursion

int power(int x, int n) {
	if (n==0) {
        return 1;
    }
    int output = x * power(x,n-1);
    return output;
}

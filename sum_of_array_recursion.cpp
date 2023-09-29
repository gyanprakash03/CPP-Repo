// function to find the sum of all elments of an array using recursion

int sum(int input[], int n) {
	if (n==0) {
        return 0;
    }
    if (n==1) {
        return input[0];
    }
    int so = input[0] + sum(input+1, n-1);
    return so;
}
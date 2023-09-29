// function to count the number of digits of a number using recursion

int count(int n){
    static int c = 0;
    if (n%10 == 0 && n%3 == 0) {
        return c;
    }
    else {
    	c++;
    }
    count(n/10);
}

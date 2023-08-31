// function to check palindrome

bool checkPalindrome(char str[]) {
    int count=0;
    int i=0;
    while (str[i] != '\0') {
        count ++;
        i++;
    }
    int k=0;
    int j=count-1;
    while (k < j) {
        if (str[k] != str[j]) {
            return false;
        }
        k++;
        j--;
    }
    return true;
}

// function to add two arrays as integers

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    int num1 = 0;
    int num2 = 0;
    for (int i = 0; i < size1; i++)
    {
        num1 = (num1 * 10) + input1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        num2 = (num2 * 10) + input2[i];
    }
    int sum = num1 + num2;
    if (size1 >= size2)
    {
        for (int i = size1; i >= 0; i--)
        {
            output[i] = sum % 10;
            sum = sum / 10;
        }
    }
    if (size1 < size2)
    {
        for (int i = size2; i >= 0; i--)
        {
            output[i] = sum % 10;
            sum = sum / 10;
        }
    }
}
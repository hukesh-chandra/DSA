#include <stdio.h>


int Factorial(int n)
{
    if (n < 0)
    {
    
        return -1; 
    }
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * Factorial(n - 1);
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = Factorial(num);

    if (result == -1)
    {
        printf("Error: Factorial is not defined for negative numbers.\n");
    }
    else
    {
        printf("Factorial of %d is %d\n", num, result);
    }

    return 0;
}

#include <stdio.h>

void number1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void number2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j >= 1; j--)
        {
            printf("%d ", n - j - i + 1);
        }
        printf("\n");
    }
}

void number3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf("  ");
        }

        for(int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        for(int j = 1;j<i;j++)
        {
            printf("%d ", i-j);
        }

        printf("\n");
    }
}

void diamond1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
            printf("  ");
        for (int j = 0; j < 2 * i + 1; j++)
            printf("* ");
        for (int j = 0; j < n - i - 1; j++)
            printf("  ");
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("  ");
        for (int j = 0; j < 2 * (n - i-1)-1; j++)
            printf("* ");
        for (int j = 0; j <= i; j++)
            printf("  ");
        printf("\n");
    }
}

int main()
{
    diamond1(5);
    return 0;
}
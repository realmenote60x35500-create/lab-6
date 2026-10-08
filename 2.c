#include <stdio.h>
int main()
{

    int n;
    int press;
    for (;;)
    {
        printf("enter n\n");
        if (scanf("%d", &n) != 1)
        {
            break;
        }
        // int prime = 1;
        if (n == 1 || n == 0)
        {
            printf("%d is not prime number\n", n);
            break;
        }
        else
        {
            for (int i = 2; i <= n; i++)
            {
                if (n % i == 0)
                {
                    printf("%d is not prime number\n", n);
                }
                else
                {
                    printf("%d is  prime number\n", n);
                }
                break;
            }
        }

        printf("if you want to stop press 1 or continue to press 0\n");
        scanf("%d", &press);
        if (press == 1)
        {
            break;
        }
    }

    return 0;
}
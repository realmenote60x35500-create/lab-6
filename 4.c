#include <stdio.h>
int main()
{
    int stock_code[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int size = sizeof(stock_code) / sizeof(stock_code[0]);
    int product_code;
    int found;
    printf("enter product code\n");
    scanf("%d", &product_code);
    for (int i = 0; i <= size; i++)
    {

        if (product_code == stock_code[i])
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("stock available\n");
    }
    else
    {
        printf("stock not available\n");
    }

    return 0;
}
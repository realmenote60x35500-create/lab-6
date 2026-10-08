#include <stdio.h>
int main()
{
    int seats[30];
    int count = 0;
    // int total_seats[30];1

    for (int i = 1; i <= 30; i++)
    {
        printf("seat no %d:\n", i);
        scanf("%d", &seats[i - 1]);
        if (seats[i - 1] == 0)
        {
            printf("empty seat no.is%d\n", i);
            count++;
        }
        if (i == 30)
            break;
    }
    // printf(" seat no % d \n", );
    printf("count is %d", count);

    return 0;
}

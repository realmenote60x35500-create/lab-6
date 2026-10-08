#include <stdio.h>
int main()
{
    char week[] = {'m', 't', 'w', 'T', 'f', 's', 'S'};// this is the first letter of week name.
    int size = sizeof(week) / sizeof(week[0]);
    int temp;
    float total_temp = 0;
    for (int i = 0; i < size; i++)
    {
        printf("enter temp\n");
        scanf("%d", &temp);
        total_temp = total_temp + temp;
        if (temp > 35)
        {
            printf("heat warning in %c\n", week[i]);
        }
        else
        {
            printf("no heat\n");
        }
    }
    printf("average temp id %.2f", total_temp / 7);

    return 0;
}
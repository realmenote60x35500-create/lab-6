#include <stdio.h>
int main()
{
    int month[6];
    float rainfall;
    float deficiet = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("enter month\n");
        scanf("%d", &month[i]);
        printf("enter rainfall\n");
        scanf("%f", &rainfall);
        if (rainfall > 100)
        {
            printf("surplus\n");
            printf("month is %d\n", month[i]);
        }
        else if (rainfall == 100)
        {
            printf("expected rainfall");
            printf("month is %d\n", month[i]);
        }
        else
        {
            printf("deficiet\n");
            printf("month is %d\n", month[i]);
            deficiet = deficiet + (100 - rainfall);
        }
    }
    printf("deficiet of all six month is %d mm", deficiet);

    return 0;
}
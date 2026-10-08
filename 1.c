#include <stdio.h>
int main()
{
    int distance;
    int fuel;
    for (int i = 1; i < 6; i++)
    {
        printf("enter distance for %d\n", i);
        scanf("%d", &distance);
        printf("enter fuel for %d\n", i);
        scanf("%d", &fuel);
        float mileage = distance / fuel;
        if (mileage > 15)
        {
            printf("good mileage\n");
        }
        else
        {
            printf("poor mileage\n");
        }
    }

    return 0;
}
#include <stdio.h>
int main()
{
    char ch[9];
    // int num[9];
    // int count = 0;
    int num_count = 0;
    int ch_count = 0;
    for (int i = 0; i <= 9; i++)
    {
        printf("enter key press\n");
        scanf(" %c", &ch[i]);
        if (ch[i] >= '0' && ch[i] <= '9')
        {
            num_count = num_count + 1;
        }
        if ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z'))
        {
            ch_count = ch_count + 1;
        }
    }
    printf(" num count is %d\n", num_count);
    printf(" ch count is %d\n", ch_count);
    printf("count is %d\n", num_count + ch_count);
    return 0;
}
#include <stdio.h>

int main()
{
    char secret[5] = {'s', 't', 'u', 'n', 't'};
    char display[5] = {'_', '_', '_', '_', '_'};
    int used[26] = {0};

    int wrong = 0;
    int revealed = 0;
    int found;
    char guess;

    while (wrong < 6 && revealed < 5)
    {
        printf("\nWord: %c %c %c %c %c\n",
               display[0], display[1], display[2], display[3], display[4]);

        printf("Enter a letter: ");
        scanf(" %c", &guess);

        /* Convert uppercase to lowercase */
        if (guess >= 'A' && guess <= 'Z')
        {
            guess = guess + 32;
        }

        /* Check already guessed */
        if (used[guess - 'a'] == 1)
        {
            printf("Already guessed!\n");
            continue;
        }

        used[guess - 'a'] = 1;
        found = 0;

        /* Check all 5 positions */
        if (secret[0] == guess)
        {
            display[0] = guess;
            revealed++;
            found = 1;
        }

        if (secret[1] == guess)
        {
            if (display[1] == '_')
            {
                display[1] = guess;
                revealed++;
            }
            found = 1;
        }

        if (secret[2] == guess)
        {
            display[2] = guess;
            revealed++;
            found = 1;
        }

        if (secret[3] == guess)
        {
            display[3] = guess;
            revealed++;
            found = 1;
        }

        if (secret[4] == guess)
        {
            if (display[4] == '_')
            {
                display[4] = guess;
                revealed++;
            }
            found = 1;
        }

        if (found == 0)
        {
            wrong++;
            printf("Wrong attempt!\n");
        }
        else
        {
            printf("Letter is present!\n");
        }

        printf("Wrong attempts: %d/6\n", wrong);

        printf("Used letters: ");

        if (used[0])
            printf("a ");
        if (used[1])
            printf("b ");
        if (used[2])
            printf("c ");
        if (used[3])
            printf("d ");
        if (used[4])
            printf("e ");
        if (used[5])
            printf("f ");
        if (used[6])
            printf("g ");
        if (used[7])
            printf("h ");
        if (used[8])
            printf("i ");
        if (used[9])
            printf("j ");
        if (used[10])
            printf("k ");
        if (used[11])
            printf("l ");
        if (used[12])
            printf("m ");
        if (used[13])
            printf("n ");
        if (used[14])
            printf("o ");
        if (used[15])
            printf("p ");
        if (used[16])
            printf("q ");
        if (used[17])
            printf("r ");
        if (used[18])
            printf("s ");
        if (used[19])
            printf("t ");
        if (used[20])
            printf("u ");
        if (used[21])
            printf("v ");
        if (used[22])
            printf("w ");
        if (used[23])
            printf("x ");
        if (used[24])
            printf("y ");
        if (used[25])
            printf("z ");

        printf("\n");
    }

    if (revealed == 5)
    {
        printf("\nYou won!\n");
        printf("Secret word: %c%c%c%c%c\n",
               secret[0], secret[1], secret[2], secret[3], secret[4]);
    }
    else
    {
        printf("\nYou lost!\n");
        printf("Secret word: %c%c%c%c%c\n",
               secret[0], secret[1], secret[2], secret[3], secret[4]);
    }

    return 0;
}
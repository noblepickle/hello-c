#include <stdio.h>
#include <string.h>

int main(void)
{
    char answer[100];
    do
    {
        printf("What's your Name? ");
        fgets(answer, 100, stdin);
    }
    while (answer[0] == '\n');

    answer[strcspn(answer, "\n")] = '\0';

    printf("Hello, %s!\n", answer);
    return 0;
}

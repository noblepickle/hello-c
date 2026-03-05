#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float x = get_int("What's x? ");
    float y = get_int("What's y? ");

    printf("%0.50f\n", x / y);
}
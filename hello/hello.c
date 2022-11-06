#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string sometext = get_string("What is your name?: ");
    printf("Greetings, %s\n", sometext);

}

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>
#include <stdio.h>

int main(void)

{
string text = get_string("Text: ");


for (int i = 0; i < strlen(text); i++)

    if islower(text[i])
    {
        printf("%c", text[i] -32);
    }
    
    else
    {
        printf("%c", text[i]);
    }
printf("\n");    
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: "); //Prompting the user for Height to create the pyramid.
    } 
    while (n < 1 || n > 8); 
    for (int f = 1; f <= n; f++) //Loop used to create rows
    {
        for (int c = 0; c < n; c++) //Loop used to create columns
        {
            if (c < n - f) //Conditional used to print "." or "#"
            {
                printf(" ");
            }
            else 
            {
                printf("#");
            }
        }
        printf("\n");
    } 
}

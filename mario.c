#include <cs50.h> /*The cs50.h library is exclusive of CS50 Harvard Introduction to Computer Science to manage the get_int function*/
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: "); //Prompting the user for Height to create the pyramid.
    } 
    while (n < 1 || n > 8); 
    for (int r = 1; r <= n; r++) //Loop used to create rows
    {
        for (int c = 0; c < n; c++) //Loop used to create columns
        {
            if (c < n - r) //Conditional used to print "." or "#"
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

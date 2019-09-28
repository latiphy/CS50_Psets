#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    int height;
    int spaces;
    int hashes;
    
    do
    {
        printf("choose a number between 1 and 8!\n");
        height = get_int("Height: ");
    }

    while (height <= 0 || height > 8);

    for (int n = 1; n <= height; n++)
    {

        for (spaces = (height - (n)); spaces > 0; spaces--)
        {
            printf(" ");
        }
  
        for (hashes = 1; hashes <= n; hashes++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}

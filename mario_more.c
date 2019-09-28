#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    int height;
    int spaces;
    int hashes1;
    int hashes2;
    
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
  
        for (hashes1 = 1; hashes1 <= n; hashes1++)
        {
            printf("#");
        }
        printf("  ");
        for (hashes2 = 1; hashes2 <= n; hashes2++)
        {
            printf("#");
        }
        printf("\n");
    }
}

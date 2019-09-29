#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Try using: ./caesar k \n");
        return 1;
    }
    
    int k = atoi(argv[1]);

    if (k < 0)
    {
        printf("Try a intenger greater than 0 :) \n");
        return 1;
    }
    else
    {
        
        string l = get_string("plaintext: ");
        printf("ciphertext: ");
        for (int i = 0, n = strlen(l); i < n; i++)
        {
            if islower(l[i])
            {
                printf("%c", (((l[i] + k) - 97) % 26) + 97);
            }               
            else if isupper(l[i])
            {
                printf("%c", (((l[i] + k) - 65) % 26) + 65);
            }
            else
            {
                printf("%c", l[i]);
            }
        }
        printf("\n");
        return (0);
    }
}

```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Height of your pyramid: ");
    int height = get_int();
    while (height < 0 || height >= 24)
    {
        printf("Please choose a size between 0 and 23: ");
        height = get_int();
    }
    
    for (int i = 1; i < height + 1; i++)
    {
        for (int j = 0; j < (height + 1) * 2; j++)
        {
            if (j < height - i)
            {
                printf(" ");
            }
            else if (j < height)
            {
                printf("#");
            }
            else if (j < height + 2)
            {
                printf(" ");
            }
            else if (j < height + 2 + i)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}
```

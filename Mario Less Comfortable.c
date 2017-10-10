```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Size of your pyramid: ");
    int size = get_int();
    while (size < 0 || size >= 24)
    {
        printf("Please choose a size between 0 and 23: ");
        size = get_int();
    }
    
    for (int i = 1; i < size + 1; i++)
    {
        for (int j = 0; j < size + 1; j++)
        {
            if (j < size - i)
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
```

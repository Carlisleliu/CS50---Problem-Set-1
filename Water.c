```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("How long is your shower (in minutes): ");
    int minutes = get_int();
    printf("minutes: %i\n", minutes);
    printf("bottles: %i\n", minutes * 12);
}
```

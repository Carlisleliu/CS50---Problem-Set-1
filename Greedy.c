```
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("O hai! How much change is owed? ");
    float change = get_float();
    while (change < 0)
    {
        printf("How much change is owed? ");
        change = get_float();
    }
    
    int mount = round(change * 100);
    int number = 0;
    
    while (mount >= 25)
    {
        mount -= 25;
        number++;
    }
    while (mount >= 10) {
        mount -= 10;
        number++;
    }
    while (mount >= 5) {
        mount -= 5;
        number++;
    }
    while (mount >= 1) {
        mount -= 1;
        number++;
    }
    
    printf("%i\n", number);
}
```

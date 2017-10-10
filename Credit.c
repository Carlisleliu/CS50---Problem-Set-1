```
#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("Please key in your credit card number: ");
    long long credit = get_long_long();
    while (credit < 0)
    {
        printf("please key in a valid credit card number: ");
        credit = get_long_long();
    }
    
    int total = 0, last_digit, count = 1;
    long long get_digit = credit;
    
    while (get_digit > 0)
    {
        last_digit = get_digit % 10;
        
        if (count % 2 != 0)
        {
            total += last_digit;
        }
        else
        {
            last_digit = last_digit * 2;
            
            if (last_digit >= 10)
            {
                total += (1 + last_digit % 10);
            }
            else
            {
                total += last_digit;
            }
        }
        
        count++;
        get_digit /= 10;
    }

    if (total % 10 == 0)
    {
        if (credit >= 4 * pow(10, 12) && credit < 5 * pow(10, 12))
        {
            printf("VISA\n");
        }
        else if (credit >= 34 * pow(10, 13) && credit < 35 * pow(10, 13))
        {
            printf("AMEX\n");
        }
        else if (credit >= 37 * pow(10, 13) && credit < 38 * pow(10, 13))
        {
            printf("AMEX\n");
        }
        else if (credit >= 4 * pow(10, 15) && credit < 5 * pow(10, 15))
        {
            printf("VISA\n");
        }
        else if (credit >= 51 * pow(10, 14) && credit < 56 * pow(10, 14))
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
```

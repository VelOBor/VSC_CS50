#include <stdio.h>
#include <cs50.h>

int repeat_flag = 1;
float price_calc(retail, discount);

int main(void)
{

 while (repeat_flag == 1)
 {
    printf("%.2f", price_calc);

    if (get_char("Would you like to do another calculation? y/n\n") == 'y')
    {
        repeat_flag = 1;
    }
    else repeat_flag = 0;
 }
}

float price_calc(retail, discount)
{
    float retail = get_float("Retail price: ");
    float discount = get_float("Discount percent: ");
    return (retail * ((100 - discount)/100));
}
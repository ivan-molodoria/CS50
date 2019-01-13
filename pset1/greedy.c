# include <cs50.h>
# include <stdio.h>

int main(void)
{
    // Get change (float), check is it positive value and convert it to cents (integer)
    float sum;
    do
    {
        sum = get_float("How many change do you need, buddy?\n");
    }
    while ( sum < 0 );

    // Convert
    int sum_cent = (sum*100);


    int arr[] = {1, 5, 10, 25};
    int quarters = 0;
    int dimes = 0;
    int fives = 0;
    int cents = 0;

    while (sum_cent >=arr[3])
        {
            sum_cent -= arr[3]; quarters++;
        }

        while (sum_cent >= arr[2])
            {
                sum_cent -= arr[2]; dimes++;
            }
            while ( sum_cent >= arr[1])
            {
                sum_cent -= arr[1]; fives++;
            }
            cents = sum_cent;

    int coins = (quarters+dimes+fives+cents);
    printf("Quarters: %i Dimes: %i Fives: %i Cents: %i \n", quarters, dimes, fives, cents);
    printf ("Total: %i\n", coins);
}
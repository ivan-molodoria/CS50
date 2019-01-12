# include <cs50.h>
# include <stdio.h>

// Get change (float), check is it positive value and convert it to cents (integer)
int GetSum(void)
{
    float sum;
    do
    {
        sum = get_float("How many change do you need, buddy?\n");
    }
    while ( sum < 0 );
    int sum_cent = (sum*100);
    return sum_cent;
}

int GetChange(int sum)
{
    // Set an array
    int arr[] = {1, 5, 10, 25};
    int q = sum/arr[3];
    int d = (sum-q*arr[3])/10;
    int f = (sum-q*arr[3]-d*arr[2])/5;
    int c = (sum-q*arr[3]-d*arr[2]-f*arr[1]);
    int coins = (q+d+f+c);
    printf("Quarters: %i Dimes: %i Fives: %i Cents: %i \n", q, d, f, c);
    return coins;
}


int main(void)
{
   int sum = GetSum();
   int coins = GetChange(sum);
    printf ("Total: %i\n", coins);
}
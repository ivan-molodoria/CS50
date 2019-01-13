# include <cs50.h>
# include <stdio.h>


// get height and check is it in range, if not - ask again
int GetHeight(void)
{
    int x;
    do
    {
        x = get_int("Height: ");
    }
    while (x > 23|| x < 0);
    return x;
}

// return value
int main(void)
{
    int h = GetHeight();

    for (int i=1; i <= h; i++)
    {
        //add spaces
        for (int spaces=h-i; spaces >= 1; spaces--)
        {
            printf(" ");
        }
        //add #'s
        for (int dash=1; dash <= i+1; dash++)
        {
            printf("#");
        }
    printf("\n");
    }
}



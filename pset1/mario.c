# include <cs50.h>
# include <stdio.h>

//int GetHeight();


// get height and check is it in range, if not - ask again
int GetHeight(void)
{
    int x;
    do
    {
        x = get_int("Height: ");
    }
    while (x > 23 || x < 0);
    return x;
}

// retturn value
int main(void)
{
    int h = GetHeight();

    for (int i=1; i <= h; i++)
    {
        //add spaces
        for (int spaces=i-h; spaces <= 0; spaces++)
        {
            printf(" ");
        }
        //add #'s
        for (int t=0; t <= i; t++)
        {
            printf("#");
        }
    printf("\n");
    }
}



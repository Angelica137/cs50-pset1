#include <stdio.h>
#include <cs50.h>

/*mario pyramids are built using user inpput*/

int main()
{
    int height = get_int("\n");
    while(height < 1)
    {
       height = get_int("\n");
    }

    printf("Height: %d\n", height);
}
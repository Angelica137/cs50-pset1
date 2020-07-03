#include <stdio.h>
#include <cs50.h>

int main()
{
	/* declare your vars */
	int height,row,space,symbol;
	char *gap = "  ";
	//get user input
    do
    {
       height = get_int("Height: ");
    }
    while(height < 1 || height > 8);

		//print pyramid
		for (row = 1; row <= height; row++) {
		space = height - row;
		printf("%*s", space, "");
		symbol = row;
		printf("%.*s", symbol, "##########");
		printf("%s", gap);
		printf("%.*s", symbol, "##########");
		printf("\n");
		}
		return 0;
}
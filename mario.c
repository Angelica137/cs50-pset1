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
    
    // Declaring character pointers
    char *ptr1 = "#";
    char *ptr2 = " ";
    
    // Declaring array of length hight
    char* n[height];
	
	// Assigning values to array indexe
	int i = 0;
	for (i = 0; i < 4; i++)
	{
    	n[i] = ptr1;
	}
	
	printf("Hello");
	return 0;
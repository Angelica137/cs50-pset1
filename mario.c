#include <stdio.h>
#include <string.h>
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
    
    // Declaring array for gap
    char* gap[2] = {" ", " ",};
    
    // Declaring array of length hight
    char* n[height];
	
	// Assigning values to array indexe
	int i = 0;
	for (i = 0; i < height; i++)
	{
    	n[i] = ptr1;
	}

    char *strcat(char *dest, const char *src);
    
    char str[1024] = "Hello World";
    char tmp = '\0';
    size_t len = strlen(str);
    printf("%s\n", n[i]);
    snprintf(str + len, sizeof str - len, "%c", tmp);
    printf("%s\n", str);

}
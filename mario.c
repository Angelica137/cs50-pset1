#include <stdio.h>
#include <string.h>
#include <cs50.h>

/*mario pyramids are built using user inpput*/

int main()
{
    int height;
    do
    {
       height = get_int("Height: ");
    }
    while(height < 1 || height > 8);

    printf("Height: %d\n", height);
    
    // Declaring character pointers
    char *ptr1 = "#";
    char *ptr2 = " ";
    
    // Declaring array for gap
    char* gap[2] = {" ", " ",};
    
    // Declaring array of length hight
    char* n[height];
	
	// Assigning values to array index
	int i = 0;
	for (i = 0; i < height; i++)
	{
    	n[i] = ptr1;
	}
	return n;

    char *strcat(char *dest, const char *src);
    
    char str[1024] = "Hello World";
    char tmp = '\0';
    size_t len = strlen(str);
    printf("%s\n", n[i]);
    snprintf(str + len, sizeof str - len, "%c", tmp);
    printf("%s\n", str);

}






#include <stdio.h>
#include <cs50.h>

void hash_loop(int rowNumber);

int get_valid_height(void);

int main(void)
{
    int height = get_valid_height();

    for (int i = 0; i < height; i++)
    {
        int spaces = height - i - 1;
        printf("%*s", spaces, "");
        hash_loop(i);
        printf("  ");
        hash_loop(i);
        printf("\n");
    }

}
/*this function creates the hashes*/
void hash_loop(int rowNumber)
{
    for (int j = 0; j <= rowNumber; j++)
    {
        printf("#");
    }
}

/* this function gets the height*/
int get_valid_height(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    return height;
}



int main() /*main is a function, int is its returnt type. I am declaring a function

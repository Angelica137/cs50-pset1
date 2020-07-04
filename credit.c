#include <stdio.h>
#include <cs50.h>

int main()
{
	  //declare your var
	  int user_input;
	
	  //get user input
    user_input = get_long("Number: ");
    
		// checksum function
		long number = user_input;
		int sum = 0;
		int count = 0;
    
		// sum alternate digits from last digit
		while(number > 0)
		{
			int lastDigit = number % 10;
			sum = sum + lastDigit;
			number = number /100;
		}
		printf("%d", sum);
    
		// sum alternate digits from second to last digit and time by 2
		number = user_input / 10;
		while(number > 0)
		{
			int lastDigit = number % 10;
			int timesTwo = lastDigit * 2;
			//this takes the value of sum form the first case and adds this result
			// the new sum = the previous value sum + timesTwo, we divide this value in two digits by using
			// %10 and /10 and adding them separately
			sum = sum + (timesTwo % 10) + (timesTwo/10);
			number = number /100;
		}
		printf("%d", sum);

    // this resets the number tothe original and divides by 10
    number = user_input;
		while (number !=0)
    {
      number = number / 10;
			count++;
    }

		return 0;
}
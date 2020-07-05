#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
	  //declare your var
	  long userInput;
	
	  //get user input
    userInput = get_long("Number: ");
    
		// checksum function
		long number = userInput;
		int sum = 0;
		int count = 0;
		long divisor = 10;
		char result[11];
    
		// sum alternate digits from last digit
		while(number > 0)
		{
			int lastDigit = number % 10;
			sum = sum + lastDigit;
			number = number /100;
		}
		printf("%d\n", sum);
    
		// sum alternate digits from second to last digit and time by 2
		number = userInput / 10;
		while(number > 0)
		{
			int lastDigit = number % 10;
			int timesTwo = lastDigit * 2;
			//this takes the value of sum form the first case and adds this result
			// the new sum = the previous value sum + timesTwo, we divide this value in two digits by using
			// %10 and /10 and adding them separately
			sum = sum + (timesTwo % 10) + (timesTwo / 10);
			number = number / 100;
		}
		printf("%d\n", sum);

		// get the first digits of the number
		// get the length of the number, muiltiply by 10 to know 
		// how many zeroes to move to the left to get divisor
    number = userInput;
		while(number != 0)
		{
			number = number / 10;
			count++;
		}
    // increase the divisor to count - 2
		for (int i = 0; i < count - 2; i++)
		{
			divisor = divisor * 10;
		}

    int firstDigit = userInput / divisor;
		int firstTwoDigits = userInput / (divisor / 10);
    
		//check if the number is valid
		if (sum % 10 == 0)
		{
       if (firstDigit == 4 && (count == 13 || count == 16))
			 {
         strcpy(result, "VISA");
			 }
			 else if ((firstTwoDigits == 34 || firstTwoDigits == 37) && count == 15)
			 {
         strcpy(result, "AMEX");
			 }
			 else if ((50 < firstTwoDigits && firstTwoDigits < 56) && count == 16)
			 {
				 strcpy(result, "MASTERCARD");
			 }
			 else
			 {
				strcpy(result, "Invalid");
			 }
		}
		else 
		{
			strcpy(result, "Invalid");
		}

		printf("%s\n", result);

		return 0;
}
/* This program computes the square root of a
positive number. */

//Jhalak Choudhary 
//b17046

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char* argv[]) 
{
	if (argc != 2) 
	{
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}
	if(input < 0) 
	{
		printf("Invalid Input");
		exit(-1);
	}
	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("some changes for conflicts");
	printf("End of program. Exiting.");
	return(0);

} // end main

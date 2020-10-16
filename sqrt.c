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
		printf("DEBUG:Sqrt of %d is %f i\n", input, sqrt(abs(input)));
		return(0);
	}
	if(input < 0) 
	{
		printf("DEBUG:Invalid Input");

		exit(-1);
	}
	int input = atoi(argv[1]);
	printf("DEBUG:Sqrt of %d is %f\n", input, sqrt(input));
	printf("DEBUG:End of program. Exiting.");
	return(0);

} // end main

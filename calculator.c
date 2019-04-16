#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a,b, result;
	char opr;

	if(argc!=4)
	{
		printf("Invalid arguments...\n");
		return -1;
	}

	//get values
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	//get operator
	opr=argv[2][0];

	//calculate according to operator
	switch(opr)
	{
		case '+':
		    result = add_(a, b);

			break;
		case '-':
			result=sub_(a,b);
			break;
		case '_':
			result=multiply_(a,b);
			break;
		case '/':
		    result = div_(a,b);
		default:
			result=0;
			break;
	}

	if(opr=='+' || opr=='-' || opr=='_'|| opr== '/')
		printf("Result: %d %c %d = %d\n",a,opr,b,result);
	else
		printf("Undefined Operator...\n");

	return 0;
}

/**
 * Function to add two numbers
 */
float add_(float num1, float num2)
{
    return num1 + num2;
}

/**
 * Function to subtract two numbers
 */
float sub_(float num1, float num2)
{
    return num1 - num2;
}

/**
 * Function to multiply two numbers
 */
float multiply_(float num1, float num2)
{
    return num1 * num2;
}

/**
 * Function to divide two numbers
 */
float div_(float num1, float num2)
{
    return num1 / num2;
}
/*
 * fun_ret.c
 *
 *  Created on: 30-Jul-2021
 *      Author: yellareddy
 */
#include<stdio.h>

int function_add_numbers(int ,int ,int );

int main()
{
	int retValue;
	retValue=function_add_numbers(12,13,0);  // when you calling a function you need to pass 12 integer values..
	printf("SUM = %d\n",retValue);
	return 0;
}


//This is the function definition
int function_add_numbers(int a,int b,int c)  //Here,the compiler comes to know about the exact prototype of the function.
//So the second warning its says 'What I assumed conflicts with what you have written
{
	int sum;
	sum=a+b+c;
	return sum;
}



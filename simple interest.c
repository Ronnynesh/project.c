/*
program to find the simple interest
Author:Ronny
Date:10/1/2024
Reg  no:CT101/G/22047/24
*/
//preprocessor directive_scanf(),printf()
#include<stdio.h>
int main(){
	float p,r,t,si;
	//prompt the user to enter principle amount
	printf("enter the principle amount:");
	scanf("%f",&p);
	//prompt the user to enter the rate
	printf("enter the rate of interest: ");
	scanf("%f",&r);
	//prompt the user to enter the time
	printf("enter the time duration:");
	scanf("%f",&t);
	//calculate the simple interest
	si=(p*r*t)/100;
	printf("the simple interest is %f\n",si);
	
	return 0;
}
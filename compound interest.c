/*program to calculate compound interest
Author:Ronny
Date:10/1/2024
Reg no:CT101/G/22047/24
*/
//preprocessor directive scanf(),printf()
#include<stdio.h>
#include<math.h>
int main(){
	float p,n,r,ci;
	printf("enter the principle amount:");
	scanf("%f",&p);
	
	printf("enter the the time:");
	scanf("%f",&n);
	
	printf("enter the rate:");
	scanf("%f",&r);
	
	//calculate the compound interest
	ci=p*(pow((1+r/100),n))-p;
	printf("ci=%0.2f",ci);
	
	return 0;
}
	
	
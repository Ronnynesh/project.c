/*program to check if a customer qualify for loan
Author:Ronny
Date:11/1/2024
Reg No:CT101/G/22047/24
*/
//Preprocessor directive
#include<stdio.h>
int main(){
	int age;
	float income;
	//check the age of the user
	printf("enter age: ");
	scanf("%d",&age);
	//check the annual income of the user
	printf("enter the annual income: ");
	scanf("%f", &income);
	//check if the customer is qualified for a loan
	if (age>=21&income>=21000){
		 printf("congratulation you qualify for a loan, \n");
	}else{
		 
		printf("unfortunately,we area unable to offer you a loan at this time,\n");
	}
	return 0;
}
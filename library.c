/*program to calculate the fine for overdue library books
Author:Ronny
Date:1/2/2024
Reg no:CT101/G/22047/24
*/
//Preprocessor directive scanf(),printf(),
#include<stdio.h>
int main(){
	int book_id,due_date,return_date,days_overdue;
	float fine_rate,fine_amount;
	printf("enter the book_id:");
	scanf("%d",&book_id );
	printf("enter the due_date:");
	scanf("%d",&due_date);
	printf("enter the return_date:");
	scanf("%d",&return_date);
	
    //calculate days_overdue=return_date-due_date;
    //determine finerate based on days overdue;
	if("days_over<=7");{
	fine_rate= 20;
			}
	if("days_overdue=<14");{
		fine_rate=50;
	}
	if("days_overdue>=15");{
		fine_rate=100;
	}
	//calculate fine_amount=fine_rate*days_overdue;
	//display results
	printf("book_id \t %d\n",book_id);
	printf("due_date  %d\n",due_date);
	printf("return_date  %d\n",return_date);
	printf("days_overdue%d\n",days_overdue);
	printf("fine_rate  %f\n",fine_rate);
	printf("fine_amount %.1f\n",fine_amount);
	
  return 0;
}
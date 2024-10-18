#include<stdio.h>

int main(){
	int customerid,unitsconsumed;
	char customername;
	double chargeperunit,totalbill,surchargefee,totalamounttopay,totalbills;
	
	
	printf("enter the customerid:");
	scanf("%d",&customerid);
	printf("enter the unitsconsumed:");
	scanf("%d",&unitsconsumed);
	printf("enter the customername:");
	scanf("%s",&customername);
  //customer information
  if(unitsconsumed<=199){chargeperunit=1.20;}
  	else if(unitsconsumed<=400){chargeperunit=1.50;}
  		else if(unitsconsumed<=600){chargeperunit=1.80;}
  			else chargeperunit=2.00;
	//calculate the total bill
	totalbill+=unitsconsumed*chargeperunit;
//calculate the total amount to pay=totalbill
//display output
printf(" the customerid:%d\n,customerid ");
printf("the customername:%s\n,customername");
printf("the unitsconsumed:%d\n,unitsconsumed");
printf("chargesperunit:%d\n,chargesperunit");
printf("totalamounttopay:%d\n,totalamounttopay");
return 0;
}
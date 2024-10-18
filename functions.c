//functions
#include<stdio.h>
//calculate the electricity
float processbill( int unitsconsumed){
float chargeperunit,totalamount,totalbill;

if(unitsconsumed<=199){chargeperunit=1.20;}
	else if(unitsconsumed<=400){chargeperunit=1.50;}
		else if(unitsconsumed<=600){chargeperunit=1.80;}
			else{chargeperunit=2.00;}
				 //calculate the bill before surcharge
			 totalbill=unitsconsumed*chargeperunit;
			 if(unitsconsumed>400){totalamount=totalamount*0.15;}
			 	
			 	return totalamount;
}
			 
int main(){
int customerid,chargeperunit,unitsconsumed;
char customername;	
float totalbill;
printf("enter the customerid:");
scanf("%d",&customerid);
printf("enter the customername:");
scanf("%s",&customername);
printf("enter unitsconsumed:");
scanf("%d",&unitsconsumed);
//calculate the total bill
totalbill=chargeperunit*unitsconsumed;

printf("customerid:%d\n",customerid);
printf("customername:%s\n",customername);
printf("unitsconsumed:%d\n",unitsconsumed);
printf("chargeperunit:%d\n",chargeperunit);
printf("totalbill:%d\n",totalbill);

return  0;
}			
			


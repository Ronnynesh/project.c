//2D array
#include<stdio.h>
int main(){
	int i,j;
	int num[2][3]={{3,5,6},{1,2,4}};
            
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
	
	printf("num[%d][%d]= %d \n",i,j, num[i][j]);	
	}
	
	}
	return 0;
}
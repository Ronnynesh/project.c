//3D array
#include<stdio.h>
int main(){
	int i,j,k;
	int num[2][2][3]={{{10,23,43},{12,65,34}},{{78,90,21},{34,23,45,}}};
	for(i=0;i<2;i++)
	{for(j=0;j<2;j++)
	for(k=0;k<3;k++)
	{
		printf("num[%d][%d][%d]=%d \n",i,j,k,num[i][j][k]);
	}
	}
	return 0;
}
	
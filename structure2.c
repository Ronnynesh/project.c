#include<stdio.h>
#include<string.h>
struct book{
	char title[30];
	char author[30];
	char ISBN[13];
	float price;
	int publication_year;
}book;
int main(){
	printf("enter the title:");
	scanf("%s",&book.title);
	printf("enter the author:");
	scanf("%s",&book.author);
	printf("enter the ISBN:");
	scanf("%s",&book.ISBN);
	printf("enter the price:");
	scanf("%f",&book.price);
	printf("enter the publication_year:");
	scanf("%d",&book.publication_year);
	
	return 0;
}
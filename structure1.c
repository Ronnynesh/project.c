#include<stdio.h>
#include<string.h>
struct book{
	char title[30];
	char author[30];
	float price;
	char ISBN[13];
	int publication_year;
}book;
int main(){
	strcpy(book.title,"introduction_to_programming");
	strcpy(book.author,"john_smith");
	book.price = 49.99;
	
	strcpy(book.ISBN,"9780131103627");
	
	book.publication_year=2022;
	
	printf("title:%s\n",book.title);
	printf("author:%s\n",book.author);
	printf("price:%f\n",book.price);
	printf("ISBN:%\s\n",book.ISBN);
	printf("publication_year:%d\n",book.publication_year);
	
	return 0;
}
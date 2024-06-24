#include<stdio.h>
#include<stdlib.h>

typedef struct book
{
    int bookId;
	char bookname[20];
	char author[20];
	char publication[20];
	int pages;
	double price;
	char edition[20];
	int rating[20];
	char language[20];
	char category[20];	
}book;
void Store(book*,int);
void Display(book*,int);
void Search(book*,int);
void Update(book*,int);
void Delete(book*,int*);
void Top_3_Rating(book*,int);
void Insert(book*,int*);

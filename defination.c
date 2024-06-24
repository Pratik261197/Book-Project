#include"header.h"

void Store(book*b1,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n---The detail of book---");
		printf("\nEnter the book Id=");
		scanf("%d",&b1[i].bookId);
		printf("\n\tEnter the book name=");
		gets(b1[i].bookname);
		printf("\n\tEnter the book author");
		scanf("%s",&b1[i].author);
		printf("\n\tEnter the book publication");
		scanf("%s",&b1[i].publication);
		printf("\n\tEnter the book pages");
		scanf("%%d",&b1[i].pages);
		printf("\n\tEnter the book price");
		scanf("%lf",&b1[i].price);
		fflush(stdin);
		printf("\n\tEnter the book edition");
		scanf("%s",&b1[i].edition);
		printf("\n\tEnter the book rating");
		scanf("%d",&b1[i].rating);
		printf("\n\tEnter the book language");
		scanf("%s",&b1[i].language);
		printf("\n\tEnter the book category");
		scanf("%s",&b1[i].category);
	}
}
void Display(book*b1,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n---The detail of book---");
		
		printf("\n\tThe book Id is=%d",b1[i].bookId);
		printf("\n\tThe book name is=%s",b1[i].bookname);
		printf("\n\tThe book author is=%s",b1[i].author);
		printf("\n\tThe book publication is=%s",b1[i].publication);
		printf("\n\tThe book pages are=%d",b1[i].pages);
		printf("\n\tThe book price is=%lf",b1[i].price);
		printf("\n\tThe book edition is=%s",b1[i].edition);
		printf("\n\tThe book rating is=%d",b1[i].rating);
		printf("\n\tThe book language is=%s",b1[i].language);
		printf("\n\tThe book category is=%s",b1[i].category);
	}
}
void Search(book*b1,int n)
{
	int i,id,c=0;
	printf("\nEnter the book id to search:");
	scanf("%d",&id);
	for(i=0;i<n;i++)
	{
		if(b1[i].bookId=id)
		{
			c=1;
			
        printf("\n\tThe book Id is=%d",b1[i].bookId);
		printf("\n\tThe book name is=%s",b1[i].bookname);
		printf("\n\tThe book author is=%s",b1[i].author);
		printf("\n\tThe book publication is=%s",b1[i].publication);
		printf("\n\tThe book pages are=%d",b1[i].pages);
		printf("\n\tThe book price is=%lf",b1[i].price);
		printf("\n\tThe book edition is=%s",b1[i].edition);
		printf("\n\tThe book rating is=%d",b1[i].rating);
		printf("\n\tThe book language is=%s",b1[i].language);
		printf("\n\tThe book category is=%s",b1[i].category);
		
		}
	}
	if(c==0)
	    printf("you enter the invalid bookId");
}
void  Update(book*b1,int n)
{
	int i,id,c=0;
	int ch;
	printf("\nEnter the book id to Update:");
	scanf("%d",&id);
	for(i=0;i<n;i++)
	{
		c=1;
		if(b1[i].bookId==id)
		{
			printf("\n\t1)book name:");
			printf("\n\t1)book author:");
			printf("\n\t1)book publication:");
			printf("\n\t1)book pages:");
			printf("\n\t1)book price:");
			printf("\n\t1)book edition:");
			printf("\n\t1)book rating:");
			printf("\n\t1)book language:");
			printf("\n\t1)book category:");
			
			printf("\nEnter your choice to Update:");
	        scanf("%d",&ch);
			
			switch(ch)
			{
				case 1:
				    printf("\n\nEnter the book name=");
				    scanf("%s",&b1[i].bookname);
				    break;
				case 2:
				    printf("\n\nEnter the book author=");
				    scanf("%s",&b1[i].author);
				    break;
				case 3:
				    printf("\n\nEnter the book publication=");
				    scanf("%s",&b1[i].publication);
				    break;
				case 4:
				    printf("\n\nEnter the book pages=");
				    scanf("%d",&b1[i].pages);
				    break;
				case 5:
				    printf("\n\nEnter the book price=");
				    scanf("%lf",&b1[i].price);
				    break;
				case 6:
				    printf("\n\nEnter the book edition=");
				    scanf("%s",&b1[i].edition);
				    break;
				case 7:
				    printf("\n\nEnter the book rating=");
				    scanf("%s",&b1[i].rating);
				    break;
				case 8:
				    printf("\n\nEnter the book language=");
				    scanf("%s",&b1[i].language);
				    break;
				case 9:
				    printf("\n\nEnter the book category=");
				    scanf("%s",&b1[i].category);
				    break;						    
					    
				
				        
			}
		}
	}
	if(c==0)
	    printf("\n\tyou enter the invalid bookId");
	else
	{
        printf("\n\tUptade succesfully");
	}    
}
void Top_3_rating(book*b1,int n)
{
	int i,j;
	book temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b1[i].rating < b1[j].rating)
			{
				temp=b1[i];
				b1[i]=b1[j];
				b1[j]=temp;
			}
		}
		printf("\n\nTop three rating");
		
		for(i=0;i<3;i++)
		{
			
		printf("\n\ntThe details of book");
			
		printf("\n\tThe book Id is=%d",b1[i].bookId);
		printf("\n\tThe book name is=%s",b1[i].bookname);
		printf("\n\tThe book author is=%s",b1[i].author);
		printf("\n\tThe book publication is=%s",b1[i].publication);
		printf("\n\tThe book pages are=%d",b1[i].pages);
		printf("\n\tThe book price is=%lf",b1[i].price);
		printf("\n\tThe book edition is=%s",b1[i].edition);
		printf("\n\tThe book rating is=%d",b1[i].rating);
		printf("\n\tThe book language is=%s",b1[i].language);
		printf("\n\tThe book category is=%s",b1[i].category);
		}
	}
}
void Delete(book*b1,int *n)
{
	int i,j,id;
	printf("\nEnter the book id to delete:");
	scanf("%d",&id);
	int flag=0;
	for(i=0;i<*n;i++)
	{
		if(b1[i].bookId==id)
		{
			flag=1;
			for(j=i;j<*n;j++)
			{
				b1[j]=b1[j+1];
			}
		}
	}
	if(flag==0)
	{
		*n=*n-1;
		printf("Delete succesfully");
	}
	else
	{
		printf("invalid Id");
	}
}
void Insert(book*b1,int* n)
{
	int i=*n;
	
	
			
        printf("\n\t---The detail of book---");
		printf("\n\tEnter the book Id=");
		scanf("%d",&b1[i].bookId);
		printf("\n\tEnter the book name=");
		gets(b1[i].bookname);
		printf("\n\tEnter the book author");
		scanf("%s",&b1[i].author);
		printf("\n\tEnter the book publication");
		scanf("%s",&b1[i].publication);
		printf("\n\tEnter the book pages");
		scanf("%%d",&b1[i].pages);
		printf("\n\tEnter the book price");
		scanf("%lf",&b1[i].price);
		fflush(stdin);
		printf("\n\tEnter the book edition");
		scanf("%s",&b1[i].edition);
		printf("\n\tEnter the book rating");
		scanf("%d",&b1[i].rating);
		printf("\n\tEnter the book language");
		scanf("%s",&b1[i].language);
		printf("\n\tEnter the book category");
		scanf("%s",&b1[i].category);
		
		*n=*n+1;
}

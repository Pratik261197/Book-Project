#include"header.h"

void main()
{
	book*b1;
	int n,ch;
	printf("-------Book Ms-------");
	
	printf("\nEnter number of book :");
	scanf("%d",&n);
	
	b1=(book*)malloc(sizeof(book)*n);
	
	while(1)
	{
		printf("\n\n\t1)Store");
		printf("\n\t2)Display");
		printf("\n\t3)Search");
		printf("\n\t4)Update");
		printf("\n\t5)Delete");
		printf("\n\t6)Top_3_Rating");
		printf("\n\t7)Insert");
		printf("\n\t8)Exit");
		
		printf("\n\n\tEnter your choice:");
		scanf("%d",&ch);
		if(ch==8)
		    break;
		switch(ch)
		{
			case 1:
				Store(b1,n);
				break;
			case 2:
				Display(b1,n);
				break;
			case 3:
				Search(b1,n);
				break;
			case 4:
				Update(b1,n);
				break;
			case 5:
				Delete(b1,&n);
				break;
			case 6:
				Top_3_Rating(b1,n);
				break;
			case 7:
				Insret(b1,&n);
				break;
			case 8:
				printf("invalid choice");
				break;				
		}
		    
	}
}

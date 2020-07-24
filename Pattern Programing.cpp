
#SQUARE PATTERN#
#include<stdio.h>
int main()
{
	printf("Square Pattern\n\n");
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}



#TRIANGLE PATTERN#
#include<stdio.h>
int main()
{
	printf("Right angle triangle Pattern\n\n");
	for(int i=1;i<=7;i++)
	{
		for(int j=1;j<=7;j++)
		{
			if(j<=i)
			printf("* ");
			else
			printf(" ");
		}
		printf("\n");
	}
}


#PARALLELOGRAM PATTERN#
#include<stdio.h>
int main()
{
	printf("Parallelogram Pattern\n\n");
	for(int i=1;i<=6;i++)
	{
		for(int j=1;j<=11;j++)
		{
			if(j>=i&&j<=5+i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}


#PYRAMID PATTERN#
#include<stdio.h>
int main()
{
	printf("Pyramid Pattern\n\n");
	for(int i=1;i<=5;i++)
	{
	 for(int j=1;j<=9;j++)
	 {
	 	if(j>=6-i&&j<=4+i)
	 	printf("*");
	 	else
	 	printf(" ");
	 }
	printf("\n"); 	
	}
	
	
}



#PYRAMID NUMBER PATTERN#
#include<stdio.h>
int main()
{
	int k;
	printf("Pyramid Pattern with numbers\n\n");
	for(int i=1;i<=5;i++)
	{
		k=1;
		for(int j=1;j<=9;j++)
		{
			if(j>=6-i&&j<=4+i)
			{
				printf("%d",k);
				k++;
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}

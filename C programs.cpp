//Program to print "hello world" //
#include<iostream>
using namespace std;
int main()
{
	cout<<"hello world";
	return 0;
}
  
  
//Program to perform Arithmatic operation//  
#include<stdio.h>
int sum(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);

int main()
{
	int a=2,b=4,c=0;
	printf("*****ARITHMETIC OPERATION USING FUCTION*****\n");
	printf("The value of a is:%d\n",a);
	printf("The value of b is:%d\n",b);	
	c=sum(a,b);
	printf("The value of c in sum():%d\n",c);
	c=sub(a,b);
	printf("The value of c in sub():%d\n",c);
	c=mul(a,b);
	printf("The value of c in mul():%d\n",c);
	c=div(a,b);
	printf("The value of c in div():%d\n",c);
	printf("*****THANK YOU*****");
	return 0;
}
int sum(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}


//Program to Swap 2 numbers//
#include<stdio.h>
void swap(int*a,int*b) //swaping function//
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	int n1,n2;
	printf("Enter the value of n1:\n"); //Input the value of n1//
	scanf("%d",&n1);
	printf("Enter the value of n2:\n"); //Input  the value of n2//
	scanf("%d",&n2);
	printf("Value of n1 and n2 before swaping:%d %d\n",n1,n2); //print the numbers before swaping//
	swap(&n1,&n2); //swap the numbers//
	printf("Value of n1 and n2 after swaping:%d %d\n",n1,n2); //print the numbers after swaping//
	return 0;
}



// Program to print Array//
#include<stdio.h>
int main()
{
	int n[10];
	int i,j;
	for(i=0;i<10;i++)
	{
		n[i]=i+100;
	}
	for(j=0;j<10;j++)
	{
		printf("Element[%d]=%d\n",j,n[i]);
	}
	return 0;
}


//Program to print personal details//
#include<stdio.h>
int main()
{

char name,fathername,mothername,collegename,qualification,place,hobbies,date_of_birth,phone;
int age;
	printf("*****MY DETAILS*****\n");
	printf("Enter your Name:",name);
	scanf("%s",&name);
	printf("Enter your Fathername:",fathername);
	scanf("%s",&fathername);
	printf("Enter your Mothername:",mothername);
	scanf("%s",&mothername);
	printf("Enter your Collegename:",collegename);
	scanf("%s",&collegename);
	printf("Enter your Qualification:",qualification);
	scanf("%s",&qualification);
	printf("Enter your Hobbies:",hobbies);
	scanf("%s",&hobbies);
	printf("Enter your Date_of_birth:",date_of_birth);
	scanf("%s",&date_of_birth);
	printf("Enter your Age:",age);
	scanf("%d",&age);
	printf("Enter your Phone number:",phone);
	scanf("%s",&phone);
	return 0;	
}


//Program to print personal details using single printf()//
#include<stdio.h>
int main()
{
	char name,fathername,mothername,collegename,branch,date_of_birth,place,hobbies,phone;
	int age;
	printf("*****MY DETAILS*****\n");
	printf("Enter your name:\nEnter your Father name:\nEnter your Mother name\nEnter your College name:\nEnter your Branch:\nEnter your Date_of_birth:\nEnter your Age:\nEnter your Hobbies:\nEnter your Place:\nEnter your Phone number\n");
	scanf("%s %s %s %s %s %s %d %s %s %s",&name,&fathername,&mothername,&collegename,&branch,&date_of_birth,&age,&hobbies,&place,&phone);
	return 0;
}


//Program to print fibonacci series//
#include<stdio.h>
int main()
{
	int n,frst=0,sec=1,num,i;
	printf("Enter the number of terms:"); //input the number of terms//
	scanf("%d",&n);
	printf("Number of terms are:%d\n",n);
	printf("*****FIBONACCI SERIES FOR ENTERED NUMBER OF TERMS*****\n");
	for(i=0;i<n;i++)
	{
	if(i<=1)
	
		num=i;
		else
	{
	 num=frst+sec; //add frst and sec number//
	 frst=sec;     //assign sec value to frst//
	 sec=num;	   //assign num value to sec//
	}
	printf("%d\n",num);
	}
	return 0;
}


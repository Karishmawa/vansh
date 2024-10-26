#include<stdio.h>
#include<conio.h>
#include<string.h>
struct
{
	unsigned int age:3;
}Age;
void main()
{
	clrscr();
	Age.age=4;
	printf("Sizeof(Age):%d\n",sizeof(Age));
	printf("Age.age:%d\n",Age.age);
	Age.age=7;
	printf("Age.age:%d\n",Age.age);
	Age.age=6;
	printf("Age.age:%d\n",Age.age);
	getch();
}
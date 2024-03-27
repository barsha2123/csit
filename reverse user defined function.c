//program to reverse string using user defined functon//
#include<stdio.h>
#include<conio.h>
void stringReverse(char *);
void main()
{
	char str[80];
	printf("enter string to reverse: ");
	gets(str);
	stringReverse(str);
	printf("after reversing string is: %s",str);
	getch();
}
void stringReverse(char *s)
{
	int l,i;
	char c;
	l=0;
	while(*(s+l)!='\0')
	l++;
	for(i=0;i<l/2;i++)
	{
		c=*(s+i);
		*(s+i)=(s+l-1-i);
		*(s+l-1-i)=c;
	}
}
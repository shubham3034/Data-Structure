#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
	printf("Enter the element of array=");
	scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
	printf("%d",a[i]);
	}
	getch();
}

/*write a program to perform selection short on array of 10 numeric value*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int n[10],i,j,p,temp=0;
	clrscr();
	printf("enter 10 element-->");
	for(i=0;i<=9;i++)
		scanf("%d",&n[i]);
	clrscr();
	printf("your array is-->");
	for(i=0;i<=9;i++)
	{
		p=i;
		for(j=i+1;j<=9;j++)
		{
			if(n[p]>n[j])
			p=j;
		}
		if(p!=j)
		{
			temp=n[i];
			n[i]=n[p];
			n[p]=temp;
		}
	}
	printf("\n enter sorting array-->\n");
	for(i=0;i<=9;i++)
		printf("%d\t",n[i]);
	getch();
}

#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[20];
	int a[20][30][40];
	int prelength;
	for (i=0;i<prelength;i=i+1;)
	{
		a[i]=a[i]+i;
	}
	for (i+1; i<prelength; i++)
	{
		a[i][i][i]=i;
	}
	for (i=0;i<prelength;i++)
	{
		a[i][i][i]=a[i][i][i]*a[i][i][i];
	}
	
}


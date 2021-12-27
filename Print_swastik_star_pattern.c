
#include<stdio.h>

int main()
{
	int i,j,n,k;
	printf("Enter total number of lines");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{   if(i<(n+1)/2)
	   {
		for(j=1;j<=n-(n-1);j++)
		{printf("*");}
    	
		 for(k=1;k<=n-(n/2+2);k++)
    	{	printf(" ");}
    	if(i==1)
		{
		for(j=1;j<n-((n/2+1)-1);j++)
		{	printf("*");}
		}
	    for(j=1;j<=n/2-(n/2-1);j++)
		{	printf("*");}
		
		printf("\n");
	}

		if(i==n/2)
		{
			for(j=1;j<=n;j++)
			{printf("*");}
			printf("\n");
		}
		
		if(i>(n+1)/2)
	{
		if( i!=n)
		{
		for(k=1;k<=n/2;k++)
			{printf(" ");}
		}
		
		for(j=1;j<=n-(n-1);j++)
		{	printf("*");}
			
		if(i==n)
		{
			for(j=1;j<=n/2;j++)
			printf("*");
		}
		
	    for(k=1;k<=n-(n/2+2);k++)
		{	printf(" ");}
		
		for(j=1;j<=n-(n-1);j++)
		{	printf("*");}
		
		printf("\n");
	}
    }
	return 0;
}

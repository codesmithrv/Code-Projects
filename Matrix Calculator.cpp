#include<stdio.h>
int main()
{
	char ch;
	printf("Enter '+' for matrix addition.\n");
	printf("Enter '-' for matrix subtraction.\n");
	printf("Enter '*' for matrix multiplication.\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
		{
			int m, n, c, d, a[10][10], b[10][10], sum[10][10];
   			printf("Enter the number of rows and columns of matrix.\n");
   			scanf("%d%d", & m, & n);
   			printf("Enter the elements of first matrix.\n");
   			for (c = 0; c < m; c++)
        	for (d = 0; d < n; d++)
				scanf("%d", & a[c][d]);
    			printf("Enter the elements of second matrix.\n");
   			for (c = 0; c < m; c++)
       		for (d = 0; d < n; d++)
				scanf("%d", & b[c][d]);
    		printf("Sum of entered matrices:-\n");
    		for (c = 0; c < m; c++)
   			{
       			for (d = 0; d < n; d++)
        		{
            		sum[c][d] = a[c][d] + b[c][d];
           			printf("%d\t", sum[c][d]);
       			}
       			printf("\n");
   			}
			break;
    		return 0;
		}
		case '-':
		{
			int m, n, c, d, a[10][10], b[10][10], dif[10][10];
   			printf("Enter the number of rows and columns of matrix.\n");
   			scanf("%d%d", & m, & n);
   			printf("Enter the elements of first matrix.\n");
   			for (c = 0; c < m; c++)
        	for (d = 0; d < n; d++)
				scanf("%d", & a[c][d]);
    			printf("Enter the elements of second matrix.\n");
   			for (c = 0; c < m; c++)
       		for (d = 0; d < n; d++)
				scanf("%d", & b[c][d]);
    		printf("Difference of entered matrices:-\n");
    		for (c = 0; c < m; c++)  
   			{  
       			for (d = 0; d < n; d++)
        		{  
            		dif[c][d] = a[c][d] - b[c][d];
           			printf("%d\t", dif[c][d]);
       			}  
       			printf("\n");
   			}
			break;
    		return 0;
		}
		case '*':
		{
			int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
			printf("Enter the number of row= ");
			scanf("%d",&r);    
			printf("Enter the number of column= ");
			scanf("%d",&c);    
			printf("Enter the elements of the first matrix.\n");
				for(i=0;i<r;i++)
				{    
					for(j=0;j<c;j++)
					{
						scanf("%d",&a[i][j]);
					}	    
				}    
			printf("Enter the elements of the second matrix.\n");
			for(i=0;i<r;i++)
			{    
				for(j=0;j<c;j++)
				{    
					scanf("%d",&b[i][j]);
				}    
			}    
			printf("Product of the matrices:\n");
			for(i=0;i<r;i++)
			{    
				for(j=0;j<c;j++)
				{    
					mul[i][j]=0;
					for(k=0;k<c;k++)
					{    
						mul[i][j]+=a[i][k]*b[k][j];
					}    
				}    
			}    
			for(i=0;i<r;i++)
			{    
				for(j=0;j<c;j++)
				{    
					printf("%d\t",mul[i][j]);
				}    
			printf("\n");
			}
			break;
			return 0;
		}	
	}
}

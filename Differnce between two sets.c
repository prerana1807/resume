#include <stdio.h>
#include <stdlib.h>
#define max 20
int main() {
	
	int arr1[max],arr2[max],diff[max];
	int i,j,k,m,flag;
	int l1,l2;
	printf("\nHow many elements do you want in array 1");
	scanf("\n%d",&l1);
	for(i=0;i<l1;i++)
    {
    	scanf("%d",&arr1[i]);
	}
	printf("\nHow many elements do you want in array 2");
	scanf("\n%d",&l2);
	for(i=0;i<l2;i++)
    {
    	scanf("%d",&arr2[i]);
	}
	for(i=0;i<l1;i++)
	{
	    flag=0;
	    for(j=0;j<l2;j++)
		{
			if(arr2[j]=arr1[i])
			{
				flag=1;
				break;
			}
			if(flag==0)
			{
				diff[m]=arr1[i];
				m++;
			}
			
		}	
	}
	printf("\nDiffernce........");
	for(i=0;i<m;i++)
	{
		printf("\n5%d",diff[i]);
	}
	return 0;
}

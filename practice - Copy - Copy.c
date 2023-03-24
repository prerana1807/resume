#include <stdio.h>
#include <stdlib.h>
#define max 20
int main() {
	int arrset1[max],arrset2[max],arrdiff[max];
	int l1,l2;
	int i,j,m,flag;
	printf("\nHow many elements do you want in set1");
	scanf("%d",&l1);
	for(i=0;i<l1;i++)
	{
		scanf("%d",&arrset1[i]);
	}
	printf("\nHow many elements do you want in set2");
	scanf("%d",&l2);
	for(i=0;i<l2;i++)
	{
		scanf("%d",&arrset2[i]);
	}
    // logic for find A-B
    for(i=0;i<l1;i++)
    {
    	flag=0;
    	for(j=0;j<l2;j++)
    	{
    		if(arrset2[j]==arrset1[i]);
    		{
    			flag=1;
    	    	break;
			}
		}
		if(flag==0)
		{
     	arrdiff[m]=arrset1[i];
     	m++;
        }
	}
	printf("\nDiffernce------");
	for(i=0;i<m;i++)
	{
		printf("\n%5d",arrdiff[i]);
	}
	return 0;
}

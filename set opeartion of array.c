#include <stdio.h>
#include <stdlib.h>
#define max 20
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arrset1[max],arrset2[max],arrunion[max],arrinter[max],arrdiff[max];//circular
	int l1,l2;
	int i,j,k,m,d,flag,search;
	printf("\n How many elements do you want in set 1");// 10 20 30 40 50
	scanf("%d",&l1);
	for(i=0;i<l1;i++)
	{
		scanf("%d",&arrset1[i]);
	}
	printf("\n How many elements do you want in set 2");// 30 80 90 100 20
	scanf("%d",&l2);
	for(i=0;i<l2;i++)//3 4 5 6 7 
	{
		scanf("%d",&arrset2[i]);
	}
	//union...copy all elements from set 1
	for(i=0;i<l1;i++)
	{
		arrunion[k]=arrset1[i];
	
		k++;
	}
	for(j=0;j<l2;j++)//l2=3 4 5 6 7 
	{
		flag=0;
		for(i=0;i<l1;i++)//l1=1 2 3 4 5
		{
			if(arrset2[j]==arrset1[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			arrunion[k]=arrset2[j];
			k++;
		}
	}//j loop
	printf("\n Union-----");
	for(i=0;i<k;i++)
	{
		printf("\n%5d",arrunion[i]);
	}
	//arrintersection.....common elements
	for(j=0;j<l2;j++)//l2=3 4 5 6 7 
	{
		flag=0;
		for(i=0;i<l1;i++)//l1=1 2 3 4 5
		{
			if(arrset2[j]==arrset1[i])
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			arrinter[m]=arrset2[j];
			m++;
		}
}
	printf("\nIntersection.......");
	for(i=0;i<m;i++)
	{
		printf("\n%d",arrinter[i]);
	}
	//differnce....Let A = {1, 2, 3, 4 } , B = { 3, 4 , 5, 6} A – B = {1, 2} 
	for(j=0;j<l1;j++)
	{
		flag=1;
		for(i=0;i<l2;i++)
		{
			if(arrset2[j]==arrset1[i])
	    	{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			arrdiff[d]=arrset1[i];
			d++;
		}
	}
	printf("\nDiffernce.......");
	for(i=0;i<d;i++)
	{
		printf("\n%d",arrdiff[i]);
	}
	printf("\nDo you want to continue press 1");
	scanf("\n%d",&search);
	return 0;
}

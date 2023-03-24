#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arr[5];
	int i,j,temp;
	printf("\n Enter any five numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	//sorting...
	for(i=0;i<4;i++)
    {
    	for(j=i+1;j<5;j++)
    	{
    		if(arr[i]>arr[j])
    		{
			temp=arr[i];
    		arr[i]=arr[j];
    		arr[j]=temp;
    	    }
    }
	}
	printf("\n Sorting.........");
	for(i=4;i>=0;i--)
	{
		printf("%5d",arr[i]);
	}
	
	
	return 0;
}

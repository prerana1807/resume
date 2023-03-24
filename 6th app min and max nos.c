#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arr[10];
	int i,min,max;
	printf("\n Enter any ten numbers");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=1;i<10;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("\n Maximum number is : %d",max);
	printf("\n Minimum number is : %d",min);
	
	return 0;
}

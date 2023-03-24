#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,search,flag=0;
	int arr[10];
	printf("\n Enter any ten number");/// 1 2 3 4 5 6 7 
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter element to search in array");
	scanf("%d",&search);
	for(i=0;i<10;i++)
	{
		if(arr[i]==search)
		{
			flag=i+1;
			break;
		}
	}
	if (flag>0)
	{
		printf("\nElement found at %d location",search);
	}
	else
	{
		printf("\nElement not found");
	}
	return 0;
}

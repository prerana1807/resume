#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,sum,avg;
	int arr[10];
	sum=0;
	printf("\nEnter any ten numbers");
	for(i=0;i<10;i++)
	{
		scanf("\n%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		sum=sum+arr[i];
	}
	printf("\nsum of the numbers are : %d\n",sum);
	avg=sum/10;
	for(i=0;i<10;i++)
	{
		if(arr[i]>avg)
		{
			printf("%5d",arr[i]);
		}
	}
	return 0;
}

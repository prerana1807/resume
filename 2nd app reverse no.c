#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,sum=0;
	int arr[5];
	printf("\n Enter any five number");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		
		sum=sum+arr[i];
	}
	printf("\nElements in Array are\n");
	printf("\n--------------------------");
	for(i=0;i<5;i++)
	{
		printf("%5d",arr[i]);
	}
	printf("\nElements in reverse order are\n");
	for(i=4;i>=0;i--)
	{
		printf("%5d",arr[i]);
	}
	printf("\n sum of elemets is : %5d",sum);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,even=0,odd=0;
	int evensum=0,oddsum=0;
	int arr[10];
	printf("\n Enter any ten number");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			evensum=evensum+arr[i];
			even++;
		}
		else
		{
			oddsum=oddsum+arr[i];
			odd++;
		}
	}
	printf("\nTotal even nos are : %d and sum of even no is : %d",even,evensum);
	printf("\nTotal odd nos are : %d and sum of odd no is : %d",odd,oddsum);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j,k;
	int arr[10];
	int even[10],odd[10];
	int evensum=0,oddsum=0;
	printf("\nEnter any ten numbers");
	for(i=0;i<10;i++)
	{
		scanf("\n%d",&arr[i]);
	}
	
	for(i=0,j=0,k=0;i<10;i++)
	{
		if(arr[i]%2==0)
		{
			even[j]=arr[i];
			evensum=evensum+even[j];
			j++;
		}
		if(arr[i]%2!=0)
		{
			odd[k]=arr[i];
			oddsum=oddsum+odd[k];
			k++;
		}
	}
	printf("\nTotal even numbers : %d",j);
	for(i=0;i<j;i++)
	{
		printf("\n%d",even[i]);
	}
	printf("\nSum of even nos is : %d",evensum);
	printf("\nTotal odd numbers : %d",k);
	for(i=0;i<k;i++)
	{
		printf("\n%d",odd[i]);
	}
	printf("\nSum of odd nos is : %d",oddsum);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i;
	int arr[10];
	int c1=0,c2=0,c3=0,c4=0;
	
	printf("\n Enter any ten numbers");
	for(i=0;i<10;i++)
	{
		scanf("%5d",&arr[i]);
		if((arr[i]%3==0)&&(arr[i]%5==0))
		{
			c1++;
	    } 
		else if(arr[i]%3==0)
		{
			c2++;
	    } 
		else if(arr[i]%5==0) 
		{
			c3++;
		}
		else
		{
			c4++;
		}
	}

    printf("\n Total numbers divisible by 3 and 5: %d",c1);
    printf("\n Total numbers divisible by 3 : %d",c2);
    printf("\n Total numbers divisible by 5 : %d",c3);
    printf("\n Total numbers which are not divisible by 3 and 5 : %d",c4);
	return 0;
}

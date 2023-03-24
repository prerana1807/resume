#include <stdio.h>
#include <stdlib.h>
#define max 20

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,n,j,temp;
	int flag;
	int ch,search;
	int newval,loc;
	int arr[max];
	do
	{
		printf("\n1-Create Array\n2-Display Array\n3-Search\n4-Sort\n5-Insert New value\n6-Delete Value");
		printf("\n Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nHow many nos do you want");
				scanf("%d",&n);
				for(i=0;i<n;i++)
				{
					scanf("%d",&arr[i]);
				}
			break;
			case 2: 
			    printf("\n Elements in array are\n");
			    for(i=0;i<n;i++)
			    {
			    	printf("\n%5d",arr[i]);
				}
			break;
			case 3:
				flag=0;
				printf("\n Enter any element to search in array");
				scanf("%d",&search);
				for(i=0;i<n;i++)
				{
					if(arr[i]==search)
					{
						flag=i+1;
						break;
					}
				}
					if(flag>0)
					{
						printf("\n Element found");
					}
					else
					{
						printf("\n Element not found");
					}
				
		    break;
			case 4:
	            for(i=0;i<n;i++)
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
                for(i=0;i<5;i++)
            	{
         		printf("%5d",arr[i]);
            	}
            break;
            case 5:
            	printf("\n Enter new value and location for new value");//1 2 3 4 5 
            	scanf("%d%d",&newval,&loc);//6 3rd location
            	for(i=n;i>=loc-1;i--)//n=6
            	{
            		arr[i+1]=arr[i];
				}
				arr[i+1]=newval;
				n++;
				break;
			case 6:
				printf("\n Enter location to delete value");
				scanf("\n%d",&loc);
				temp=arr[loc-1];
				for(i=loc-1;i<n;i++)
				{
					arr[i]=arr[i+1];
				}
				n--;
				break;
   
		}
		printf("\n Do you want to continue press 1");
		scanf("\n%d",&ch);
	}while (ch==1);
	
	return 0;
}

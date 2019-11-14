 #include<stdio.h>
int main()
{
  /*  int i , j, k , n=9 , space=1;
    space = n-1;
    for(i=1;i<=n;i++)
    {
        printf("\t");
        for(j=1; j<=space; j++)
        {
            printf(" ");
        }
        space--;
        for(k=1; k<= 1*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }*/

    /* int no_of_row,row,i,j,space;
    printf("Enter no.  rows .....");
    scanf("%d",&no_of_row);
    space = no_of_row-1;
    for(row=1; row<=no_of_row; row++)
    {
        for(i=1; i<=space;i++)
        {
            printf(" ");
        }
        space--;
        for(j=1; j<=(row*2)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }


  return 0;
} */

// A Simple Merge based O(n) solution to find median of
// two sorted arrays

int n,i,element,temp;
	printf("Enter the no of test case:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    printf("Enter the of case %d",i);
	    printf("\nEnter the no of element: ");
	    scanf("%d",&element);
	    int arr[element];
	    for(int j=0;j<element;j++)
	    {
	        scanf("%d",&arr[j]);
	    }

	    for(int k=0;k<element;k++)
	    {
	        for(int l=0;l<element;l++)
	        {
	            if(arr[k] > arr[l])
	            {
	                temp = arr[k];
	                arr[k] = arr[l];
	                arr[l] = temp;
	            }
	            else
	            {
	                arr[k];
	            }
	        }
	    }
	    for(int n=element-1;n>=0;n--)
	    {
	        printf("%d   ",arr[n]);
	    }
	    printf("\n");

	}



    /*int no_of_row,row,i,j;
    printf("Enter no.  rows .....");
    scanf("%d",&no_of_row);
    for(row=1; row<=no_of_row; row++)
    {
        for(i=no_of_row-row; i>=1;i--)
        {
            printf(" ");
        }
        for(j=1; j<=(row*2)-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }*/
	return 0;
}

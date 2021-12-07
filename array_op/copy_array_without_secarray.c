#include <stdio.h>
#include <string.h>

int 
main ()
{
	//get the length of array
	//if its even , exchnage the middle ones
	//if its odd, leave out the middle as it is
	
	int arrsize = 0,temp = 0;

	printf("get the size of array\n");
	scanf("%d",&arrsize);

	int arr[arrsize];
	memset (arr,0,arrsize*sizeof(int));
	
	printf("Enter arr elements\n");
	for (int i = 0; i < arrsize; i++)
	{
		scanf("%d",&arr[i]);
	}

	for (int i = 0; i < (arrsize/2); i++)
	{
		temp = arr[i];
		arr[i] = arr[arrsize-i-1];
		arr[arrsize-i-1] = temp;
	}
	for (int i = 0; i < arrsize; i++)
        {       
                printf("%d",arr[i]);
        }  
	return 0;
}

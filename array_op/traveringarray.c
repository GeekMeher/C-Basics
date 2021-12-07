#include <stdio.h>
#include <string.h>

int 
main ()
{
	int sizeofarray = 5;
	int arr[sizeofarray] ;
	//A dynamic array cannot be initialized like a static one
	memset (arr, 0, sizeofarray*(sizeof(int)));
	printf("enter the elements\n");
	for (int i = 0; i < sizeofarray; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Displaying elements\n");
	for (int i = 0;i <sizeofarray; i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}

#include <stdio.h>
#include <string.h>
#include <errno.h>

int 
main ()
{
	FILE *fp = fopen ("samplefile.txt", "r");
	if (NULL == fp)
	{
		printf("%d\n",errno);
		perror("Ouput");
		printf("%s\n",strerror(errno));
	
	}
	return 0;
}

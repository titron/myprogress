#include "proc.h"
#include <string.h>
#include <unistd.h>

#define SIZE 102
#define STYLE '='
#define FLAG '>'

void process()
{
	const char* str="|/-\\";
	char bar[SIZE];

	memset(bar, '\0',sizeof(bar));

	int i = 0;

	while(i <= 100)
	{
		printf("[%-100s][%d%%][%c]\r", bar, i, str[i%4]);
		fflush(stdout);
		bar[i++]=STYLE;
		if(i != 100)
		{
			bar[i] = FLAG;
		}
		usleep(100000);
	}
	printf("\n");
}



#include<stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
    char text[500] = "";
	FILE *in=fopen("readme.txt","r");
	char c;
	while((c=fgetc(in))!= EOF)
        //putchar(c);
		strncat(text, &c, 1);
	fclose(in);

	char *pattern1 = "`";
	char *pattern2 = "`";
	char *target = NULL;
	char *start, *end;

	//wtf is this, research pointers?
	if (start = strstr(text, pattern1))
	{
		start += strlen( pattern1 );
		if (end = strstr(start, pattern2))
		{
			target = (char *)malloc(end - start + 1);
			memcpy(target, start, end - start);
			target[end - start] = '\0';

		}
	}
	if (target) printf("%s", target);
	free(target);
	
	

	

	

	return 0;
}
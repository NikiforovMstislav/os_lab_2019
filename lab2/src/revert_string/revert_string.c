#define _CRT_SECURE_NO_WATNINGS
#include "revert_string.h"
#include<string.h>

void RevertString(char *str)
{
	// your code here
    int i=0;
    int len = strlen(str);
    while(i<=strlen(str)/2-1)
    {
        char tmp = *(str+i);
        *(str+i)=*(str+len-i-1);
        *(str+len-i-1) = tmp;
        i++;
    }

}


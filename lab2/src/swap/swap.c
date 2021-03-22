#include "swap.h"

void Swap(char *left, char *right)
{
	// ваш код здесь
    char tmp;
    tmp=*left;
    *left=*right;
    *right=tmp;
}

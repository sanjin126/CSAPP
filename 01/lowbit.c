#include <stdio.h>

unsigned lowbit(unsigned a){
	return a & (~a + 1);
}

int main()
{
	unsigned x = 0xff8;
	printf("%d\n", lowbit(x));
	return 0;
}

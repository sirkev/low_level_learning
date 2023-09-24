#include <stdio.h>

int main(int argc, char **argv)
{
	int d =2;
	printf("this program has a bug!\n Give me something \n");
	//scanf should take in the pointer reference to the integer as it expects an integer ref, not an integer value
	scanf("%d", &d);
	printf("You gave me: %d \n",d );
return 0;
}

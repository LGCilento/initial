#include <stdio.h>

void main(int argc, char const *argv[])
{
	printf("oi\n", );
}

void print_(){
	printf("oi\n");
}
void count(int limit){
	for (int i = 0; i < limit; ++i)
	{
		printf("%d\n",i );
	}
}

int factorial(int number){
	if (number != 0)
	{
		return factorial(number-1);
	}
	else{
		return 1;
	}
}

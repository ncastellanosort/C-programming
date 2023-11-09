#include <stdio.h>


int fibonacci(int num);


int main()
{
	int n = 13;

	int fib = fibonacci(n);

	printf("Fibonacci(%d) = %d\n",n, fib);

	
	return 0;
}


int fibonacci(int num)
{
	if(num==0) return 0;
	else if(num==1) return 1;
	else return fibonacci(num-1) + fibonacci(num-2);

}

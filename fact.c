#include <stdio.h>

int fact(int n)
{
	if (n < 0) {
		return 0;
	} else if (n == 0 || n == 1) {
		return 1;
	} else {
		return n * fact(n - 1);
	}
}

int facttail(int n, int a)
{
	if (n < 0) {
		return 0;
	} else if (n == 0 || n == 1) {
		return a;
	} else {
		return facttail(n - 1, n * a);
	}
}

int main(int argc, char const *argv[])
{
	printf("result = %d\n", fact(5));
	return 0;
}
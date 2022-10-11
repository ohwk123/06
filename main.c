#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n){
	int i;
	int sum=1;
	for(i=1;i<=n;i++)
	
	 sum *= i; 
	 return(sum);
	 
}
int combination(a,b){
	int result;
	result = factorial(a)/(factorial(a-b)*factorial(b));
	return result;
}


int main(int argc, char *argv[])
{   int x,y,z;
	printf("put two numbers:");
	scanf("%i %i", &x, &y);
	z = combination(x,y);
	printf("C(%i,%i):%i", x, y, z);
}

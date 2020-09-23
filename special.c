#include <stdio.h>
#include <stdlib.h>

int fact(int n){
	if(n == 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	return (n*fact(n-1));
}

int sum_of_fact_digits(int n){
	int digit, sum = 0;
	while(n != 0){
		digit = n % 10;
		sum = sum + fact(digit);
		n = n / 10;
	}
	return sum;
}

int main(){
	int a;
	scanf("%d", &a);
	printf("Factorial of %d = %d", a, fact(a));
	if(sum_of_fact_digits(a) == a){
		printf("\nSpecial Number\n");
	} else{
		printf("\nNot Special Number\n");
	}
	return 0;
}
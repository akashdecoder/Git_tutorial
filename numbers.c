#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "palindrome.h"

int main(){
	int number;
	scanf("%d", &number);
	
	if(isPalindrome(number)){
		printf("YES\n");
	} else{
		printf("NO\n");
	}
	return 0;
}
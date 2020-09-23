#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int reverse(int n){
	int digit, rev = 0;
	while(n != 0){
		digit = n % 10;
		rev = rev * 10 + digit;
		n = n / 10;
	}
	return rev;
}

bool isPalindrome(int n){
	bool flag = false;
	if(n == reverse(n)){
		flag = true;
	}
	
	return flag;
}
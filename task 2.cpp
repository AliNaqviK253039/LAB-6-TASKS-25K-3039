#include <stdio.h>
int main(){
	int num, prod;
	printf("Enter a number you want table of:");
	scanf("%d", &num);
	for(int i=1; i<=10; i++){
	    prod= num*i;
		printf("\n%d x %d = %d", num, i, prod);
	}
	return 0;
}


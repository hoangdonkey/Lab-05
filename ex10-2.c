#include <stdio.h>
void main(){
	int num;
	num = 10;
	printf("\nCountdown");
	while(num >= 0){
		printf("\n%d", num);
		num--;
	}
}
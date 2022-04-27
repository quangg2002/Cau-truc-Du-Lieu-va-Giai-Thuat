#include <stdio.h>

int main() {
	float n;
	scanf("%f",&n);
	if(n >= 0 && n < 4) printf("F");
	if(n >= 4 && n < 5) printf("D");
	if(n >= 5 && n < 5.5) printf("D+");
	if(n >= 5.5 && n < 6.5) printf("C");
	if(n >= 6.5 && n < 7) printf("C+");
	if(n >= 7 && n < 8) printf("B");
	if(n >= 8 && n < 8.5) printf("B+");
	if(n >= 8.5 && n < 9.5) printf("A");
	if(n >= 9.5 && n <= 10) printf("A+");
	if(n < 0 || n > 10) printf("ERROR");
}


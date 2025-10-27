#include <stdio.h>

main() {
	int lowerl, upperl, i, j, primet;
	
	printf("Enter the lower limit: ");
	scanf("%d", &lowerl);
	printf("Enter the upper limit: ");
	scanf("%d", &upperl);
	printf("The prime numbers between %d-%d are: \n", lowerl, upperl);
	
	for(i=lowerl; i<=upperl; i++) {
		if(i<2)
			continue;
		primet = 1;
		for(j=2; j <= i/2; j++) {
			if(i%j == 0) {
				primet = 0;
				break;
			}
		}
		if(primet)
			printf("%d ", i);
	}
	
	printf("\n");
	return 0;
}

#include "calchead.h"

//int main(int argc, char *argv[]) {

int checkInputSize(int num) {
	if (num < 4) {
		printf("Usage: Input 3 arguments for operand 1, operator, and operand 2 respectively\n");
		exit(1);
	}
}	

int calculate(int op1, int opr, int op2) {

	int ans;
//	int op1 = atoi(argv[1]);
//    int op2 = atoi(argv[3]);
//	char opr = *(argv[2]);

	printf("Operand 1 = %d\n",op1);	
	printf("Operand 2 = %d\n",op2);	
	printf("opr = %c\n",opr);
	switch (opr) {
		case 43:
			ans = op1 + op2;
	        printf("Answer = %d\n",ans);
			return ans;
	
		case 45:
			ans = op1 - op2;
	        printf("Answer = %d\n",ans);
	        return ans;
	
		case 42:
			ans = op1 * op2;
	        printf("Answer = %d\n",ans);
			return ans;
	
		case 47:
			ans = op1 /(float)op2;
	        printf("Answer = %d\n",ans);
			return ans;
		case 37:
			ans = op1 % op2;
		    printf("Answer = %d\n",ans);
			return ans;
		default:
			printf("something went wrong so exiting...\n");
			return 0;
		}
	}


#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float x, y;
	char op;
	
	printf("Enter two numbers");
	scanf("%f %f", &x , &y);
	printf("Enter an operator");
	scanf(" %c",&op);
	
	switch ( op ){
		case '+':
			printf("The result is %.2f", x+y);
		    break;
		case '-':
			printf("The result is %.2f", x-y);
		    break;
		case '*':
		    printf("The result is %.2f", x*y);
			break;
		case '/':
			switch ( y==0 ){
				case 1:
				   printf("Second Number Cannot be 0!");
				   break;
				default:
			       printf("The result is %.2f", x/y);
			        break;
			}
			break;
			}
		    

	
	return 0;
}

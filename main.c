#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
   float x, y;
   char op;
   printf("Enter two numbers");
   scanf("%f %f",&x, &y);
   printf("Enter an operator");
   scanf(" %c", &op);
   
   if( op == '+' ){
   	printf("The result is %.2f", x + y);
   }
   else if( op == '-' ){
   	printf("The result is %.2f", x - y);
   }
    else if( op == '*' ){
   	printf("The result is %.2f", x * y);
   }
    else if( op == '/' ){
    	
    	if( y==0 ){
    		printf("Second number cannot be 0");
		} else{
			printf("The result is %.2f", x / y);
		}
		
    	
   	
   }
   

	
	return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2, result;

    while (1) { 
        printf("Simple Calculator\n");
        printf("Enter an operation (+, -, *, / , ~ , %) or 'q' to quit: ");
        scanf(" %c", &operator);

        if (operator == 'q' || operator == 'Q') {
            printf("Exiting the calculator.\n");
            break;  
        }

        
        printf("Enter the 1st number: ");
        scanf("%lf", &num1);
        printf("Enter the 2nd number: ");
        scanf("%lf", &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %.5lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.5lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.5lf\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.5lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
                case '~' :
                result = pow(num1 , num2) ;
                printf("Result : %.5lf" , result);
                break;
                case '%' :
                result = fmod(num1 , num2);
                printf("Result : %.5lf" , result);
                break ;
            default:
                printf("Invalid operator. Please try again.\n");
        }
    }

    return 0;
}

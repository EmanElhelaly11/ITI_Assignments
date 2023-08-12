#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}

int logicalAnd(int a, int b) {
    return a && b;
}

int logicalOr(int a, int b) {
    return a || b;
}

int logicalNot(int a) {
    return !a;
}

int logicalXor(int a, int b) {
    return (a && !b) || (!a && b);
}

int reminder(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a % b;
}

int increment(int a) {
    return a + 1;
}

int decrement(int a) {
    return a - 1;
}

int main() {
    int operation;
    float num1, num2;
    int intNum1, intNum2;

    printf("Enter operation ID: ");
    scanf("%d", &operation);

    switch (operation) {
        case 1:
            printf("Enter two operands: ");
            scanf("%f %f", &num1, &num2);
            printf("Addition Result: %.2f\n", add(num1, num2));
            break;
        case 2:
            printf("Enter two operands: ");
            scanf("%f %f", &num1, &num2);
            printf("Subtraction Result: %.2f\n", subtract(num1, num2));
            break;
        case 3:
            printf("Enter two operands: ");
            scanf("%f %f", &num1, &num2);
            printf("Multiplication Result: %.2f\n", multiply(num1, num2));
            break;
        case 4:
            printf("Enter two operands: ");
            scanf("%f %f", &num1, &num2);
            printf("Division Result: %.2f\n", divide(num1, num2));
            break;
        case 5:
            printf("Enter two operands: ");
            scanf("%d %d", &intNum1, &intNum2);
            printf("LogicalAnd Result: %d\n", logicalAnd(intNum1, intNum2));
            break;         
        case 6:
            printf("Enter two operands: ");
            scanf("%d %d", &intNum1, &intNum2);
            printf("LogicalOr Result: %d\n", logicalOr(intNum1, intNum2));
            break;  
        case 7:
            printf("Enter one operand: ");
            scanf("%d", &intNum1);
            printf("LogicalNot Result: %d\n", logicalNot(intNum1));
            break;  
        case 8:
            printf("Enter two operands: ");
            scanf("%d %d", &intNum1, &intNum2);
            printf("LogicalXor Result: %d\n", logicalXor(intNum1, intNum2));
            break;
        case 9:
            printf("Enter two operands: ");
            scanf("%d %d", &intNum1, &intNum2);
            printf("Reminder Result: %d\n", reminder(intNum1, intNum2));
            break;
         case 10:
            printf("Enter one operand: ");
            scanf("%d", &intNum1);
            printf("Increment Result: %d\n", increment(intNum1));
            break; 
         case 11:
            printf("Enter one operand: ");
            scanf("%d", &intNum1);
            printf("Decrement Result: %d\n", decrement(intNum1));
            break; 
         default:
            printf("Invalid operation ID\n");
            break;
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    if (argc < 4) {
        printf("Usage: %s <num1> <operation (+ or *)> <num2>\n", argv[0]);
        return EXIT_FAILURE;
    }

    int num1 = atoi(argv[1]);
    char op = argv[2][0];
    int num2 = atoi(argv[3]);
    int result = 0;

    if (op == '+') {
        result = num1 + num2;
        printf("Result: %d + %d = %d\n", num1, num2, result);
    } else if (op == '*') {
        result = num1 * num2;
        printf("Result: %d * %d = %d\n", num1, num2, result);
    } else {
        printf("Error: Operation '%c' not supported. Use + or *.\n", op);
    }

    return EXIT_SUCCESS;
}

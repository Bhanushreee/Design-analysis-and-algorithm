#include <stdio.h>
#include <stdlib.h>

int reverseNumber(int num) {
    int reversedNum = 0;

    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    return reversedNum;
}

int main() {
    char input[50];

    // Input the number as a string
    printf("Enter a number: ");
    scanf("%s", input);

    // Validate input as a number
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] < '0' || input[i] > '9') {
            printf("Invalid input. Please enter a valid integer.\n");
            return 1;
        }
    }

    // Convert the string to an integer
    int num = atoi(input);

    // Find and print the reverse of the number
    int reversedNum = reverseNumber(num);
    printf("Reverse of %d is: %d\n", num, reversedNum);

    return 0;
}




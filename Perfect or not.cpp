#include <stdio.h>
#include<stdlib.h>
int isPerfect(int num) {
    int sum = 1;  
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return (sum == num);
}
int main() {
    int n;
    printf("Enter an integer: ");
    if(scanf("%d", &n)!= 1) {
    printf("Invalid input. Please enter a valid integer.\n");
    exit(1);  
  }  

    if (isPerfect(n)) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}

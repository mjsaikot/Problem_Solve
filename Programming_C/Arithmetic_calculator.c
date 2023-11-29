#include <stdio.h>

int main() {
    // Write C code here
      int a, b;
      printf("Enter your first value: ");
      scanf("%d", &a);
      printf("Enter your second value: ");
      scanf("%d", &b);
      int sum = a + b;
      int sub = a - b;
      int mul = a * b;
      printf("Your sum is: %d\n", sum);
      printf("Your sub is: %d\n", sub);
      printf("Your multiple is: %d\n", mul);
      if(b == 0)
      {
        printf("Error: You can't divide by 0");
      }
      else
      {
        int divide = a / b;
        printf("Your divided is: %d\n", divide);
      }
    
    return 0;
}
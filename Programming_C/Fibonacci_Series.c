/*Make a program of fibonacci series*/
#include <stdio.h>

int main() {
    // Write C code here
    int n; //term numbers
    int t1 = 0, t2 = 1; //series initialize
    int nextTerm = t1 + t2; //third term initialize
    printf("Enter the number of term: ");
    scanf("%d", &n);
    printf("Your Fibonacci Series is: ");
    printf("%d %d ", t1, t2);
    for (int i = 3; i <= n; i++)
    {
        printf("%d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;   
    }
    return 0;
}
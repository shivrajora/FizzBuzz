#include <stdio.h>

void FizzBuzz(int n);

int main()
{
    printf("Hello, World!\n");
    FizzBuzz(10);
    return 0;
}

void FizzBuzz(int n) {
    int i, prev =0, moreprev =1, sum;
    for(i=0; i<n; i++) {
        printf("%d\n", sum);
        sum=prev+moreprev;
        moreprev = prev;
        prev = sum;
    }
}

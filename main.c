#include <stdio.h>
#include <stdlib.h>

void sum(int *first, int second){
    *first = *first + second;
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("\nA: %d, B: %d\n", a, b);
    sum(&a, b);
    printf("A: %d, B: %d\n", a, b);
    return 0;
}

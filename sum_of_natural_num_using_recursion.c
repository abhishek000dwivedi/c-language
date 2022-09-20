//sum of natural numbers using recursion
#include <stdio.h>
int sum(int n);
int main()

{
    int n;
    printf("display sum of natural number enter n :");
    scanf("%d", &n);
    // sum(n);
    printf("result = %d", sum(n));
    return 0;
}

int sum(int n)

{
    if (n == 1)
        return (1);
    else
        return (n + sum(n - 1));
}

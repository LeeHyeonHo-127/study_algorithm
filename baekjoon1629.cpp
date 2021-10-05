#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long int a, b, c;

long long int Rec(long long int x, long long int m) {

    if (m == 0)
        return 1;
    else if (m == 1)
        return x;
    if (m % 2 > 0)
        return Rec(x, m - 1) * x;
    long long int half = Rec(x, m / 2);
    half %= c;
    return (half * half) % c;
}

int main() {

    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld", Rec(a, b) % c);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num; 
    int den;
} Rational;

void compareRationals(Rational r1, Rational r2) {
    if ((r1.num * r2.den) > (r1.den * r2.num)) {
        printf("\nFirst rational number is greater\n");
    } else if ((r1.num * r2.den) < (r1.den * r2.num)) {
        printf("\nSecond rational number is greater\n");
    } else {
        printf("\nBoth rational numbers are equal\n");
    }
}

Rational multiplyRationals(Rational r1, Rational r2) {
    Rational result;
    result.num = r1.num * r2.num;
    result.den = r1.den * r2.den;
    return result;
}

Rational addRationals(Rational r1, Rational r2) {
    Rational result;
    if (r1.den != r2.den) {
        result.num = (r1.num * r2.den) + (r1.den * r2.num);
        result.den = r1.den * r2.den;
    } else {
        result.num = r1.num + r2.num;
        result.den = r1.den;
    }
    return result;
}

int main() {
    Rational first, second;

    printf("Enter numerator and denominator of the first fraction: ");
    scanf("%d %d", &first.num, &first.den);

    printf("Enter numerator and denominator of the second fraction: ");
    scanf("%d %d", &second.num, &second.den);

    Rational sum = addRationals(first, second);
    printf("Sum of the two fractions is %d/%d\n", sum.num, sum.den);

    printf("Comparison of Fractions:\n");
    compareRationals(first, second);

    printf("Multiplication of Fractions:\n");
    Rational product = multiplyRationals(first, second);
    printf("Product of the two fractions is %d/%d\n", product.num, product.den);

    return 0;
}




/*

 Author:abdulhameed mohammad awad
 student id number:1212478
 lap:7L
 lecture:4
*/

#include "stdio.h"
#include "math.h"

float calculate_m(int n);

int sumOfDigits(int n);

int reverse(int n);

int main() {

    FILE *fpt_in;
    int n, rev, sum;
    float m;


    fpt_in = fopen("num.txt", "r");
    fscanf(fpt_in, "%d", &n);

    rev = reverse(n);
    sum = sumOfDigits(n);
    m = calculate_m(n);

    printf("the answer is %.2f", m);
    fclose(fpt_in);
}

int reverse(n) {
    return (n % 10) * 1000 + ((n / 10) % 10) * 100 + ((n / 100) % 10) * 10 + n / 1000;
}

int sumOfDigits(int n) {
    return (n % 10) + ((n / 10) % 10) + ((n / 100) % 10) + n / 1000;
}

float calculate_m(n) {
    int revers, sum;
    revers = reverse(n);
    sum = sumOfDigits(n);
    return sqrt(revers + sum);
}

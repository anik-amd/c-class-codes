#include <stdio.h>

int main () {
    long long int mobile_num; // 01934013716
    int sum_odd = 0, sum_even = 0, last_digit;

    scanf("%lld", &mobile_num);

    last_digit = mobile_num % 10; // 6
    if (last_digit % 2 == 0) {
        sum_even = sum_even + last_digit; // 6
    } else {
        sum_odd = sum_odd + last_digit;
    }

    last_digit = (mobile_num / 10) % 10; // 1
    if (last_digit % 2 == 0) {
        sum_even = sum_even + last_digit; 
    } else {
        sum_odd = sum_odd + last_digit; // 1
    }

    last_digit = (mobile_num / 100) % 10; 
    if (last_digit % 2 == 0) {
        sum_even = sum_even + last_digit; 
    } else {
        sum_odd = sum_odd + last_digit;
    }

    last_digit = (mobile_num / 1000) % 10; 
    if (last_digit % 2 == 0) {
        sum_even = sum_even + last_digit; 
    } else {
        sum_odd = sum_odd + last_digit;
    }

    last_digit = (mobile_num / 10000) % 10; 
    if (last_digit % 2 == 0) {
        sum_even = sum_even + last_digit; 
    } else {
        sum_odd = sum_odd + last_digit;
    }

    last_digit = (mobile_num / 100000) % 10; 
    if (last_digit % 2 == 0) {
        sum_even = sum_even + last_digit; 
    } else {
        sum_odd = sum_odd + last_digit;
    }

    last_digit = (mobile_num / 1000000) % 10; 
    if (last_digit % 2 == 0) {
        sum_even = sum_even + last_digit; 
    } else {
        sum_odd = sum_odd + last_digit;
    }

    last_digit = (mobile_num / 10000000) % 10; 
    if (last_digit % 2 == 0) {
        sum_even = sum_even + last_digit; 
    } else {
        sum_odd = sum_odd + last_digit;
    }

    last_digit = (mobile_num / 100000000) % 10; 
    if (last_digit % 2 == 0) {
        sum_even = sum_even + last_digit; 
    } else {
        sum_odd = sum_odd + last_digit;
    }

    last_digit = (mobile_num / 1000000000) % 10; 
    if (last_digit % 2 == 0) {
        sum_even = sum_even + last_digit; 
    } else {
        sum_odd = sum_odd + last_digit;
    }

    last_digit = (mobile_num / 10000000000) % 10; 
    if (last_digit % 2 == 0) {
        sum_even = sum_even + last_digit; 
    } else {
        sum_odd = sum_odd + last_digit;
    }

    last_digit = (mobile_num / 100000000000) % 10; 
    if (last_digit % 2 == 0) {
        sum_even = sum_even + last_digit; 
    } else {
        sum_odd = sum_odd + last_digit;
    }

    printf("Sum of odd numbers: %d \n", sum_odd); // 25
    printf("Sum of even numbers: %d \n", sum_even); // 10

    return 0;
}
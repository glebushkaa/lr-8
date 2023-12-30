#include <stdio.h>
#include <stdlib.h>

int reverse_number(int num);
int is_palindrome(int num);
int gcd(int a, int b);
int string_length(const char *str);
int max(int a, int b);
int min(int a, int b);
int is_even(int num);

int main() {
    int number, number2;

    printf("Enter a number to check for palindrome: ");
    scanf("%d", &number);
    printf("Reversed number: %d\n", reverse_number(number));
    printf("Is %d a palindrome? %s\n", number,
           is_palindrome(number) ? "Yes" : "No");

    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &number, &number2);
    printf("GCD of %d and %d is %d\n", number, number2, gcd(number, number2));

    printf("Enter two numbers to find the maximum: ");
    scanf("%d %d", &number, &number2);
    printf("Maximum of %d and %d is %d\n", number, number2,
           max(number, number2));

    printf("Enter two numbers to find the minimum: ");
    scanf("%d %d", &number, &number2);
    printf("Minimum of %d and %d is %d\n", number, number2,
           min(number, number2));

    printf("Enter a number to check if it's even: ");
    scanf("%d", &number);
    printf("Is %d an even number? %s\n", number,
           is_even(number) ? "Yes" : "No");

           char *str = malloc(sizeof(char) * 100);

    printf("Enter a string to measure its length: ");
    scanf("%99s", str);
    printf("The length of '%s' is %d\n", str, string_length(str));
    free(str);

    return 0;
}

int reverse_number(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int is_palindrome(int num) { return num == reverse_number(num); }

int string_length(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int max(int a, int b) { return (a > b) ? a : b; }

int min(int a, int b) { return (a < b) ? a : b; }

int is_even(int num) { return (num % 2 == 0); }

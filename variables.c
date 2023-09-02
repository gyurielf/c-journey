#include <stdio.h>

int main() {
    int x;       // declaration
    x = 123;     // initializarion;
    int y = 123; // declaration & initializarion;

    int age = 21; //int
    float gpa = 3.05; // floating point number
    char grade = 'C'; // single character
    char name[] = "kecske"; //array of characters

    printf("Hello %s\n", name);
    printf("You are %d years old", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);


    return 0;
}

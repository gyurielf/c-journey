#include <stdio.h>

int main() {
    char a = 'C'; // single character %c
    char b[] = "Bro"; // array of characters %s

    float c = 3.141592; // 4 bytes (32  bits of precision) 6-7 digits %f
    // double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15-16 digits %lf
    // bool e = true; // 1 byte (true or false) %d;
    // char f = 100;
    // unsigned char g = 255;
    // short int  h = 32767;
    // unsigned short int i = 65535;
    // int j = 2147483647;
    // unsigned int k = 4294967295L;

    // long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9qt)



    printf("Hello %s\n", name);
    printf("You are %d years old", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);


    return 0;
}

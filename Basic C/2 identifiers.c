// Write a program using valid identifiers, and print values of declared variables.
// Declare and print values of different types of constants (int, float, char, string).

#include <stdio.h>
int main(){
    int age = 25;
    float gpa = 9.88;
    char grade = 'A';
    char collegeName[] = "Pimpri Chinchwad College of Engineering";

    printf("I am %d Years Old\n",age);
    printf("I Went to %s\n",collegeName);
    printf("I had a GPA of %f\n",gpa);
    printf("I got a Grade of %c\n",grade);
    return 0;
}
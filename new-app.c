#include <stdio.h>
#include <string.h>

int main() {
    //char sFirstName[20] = "David";
    //char sLastName[20] = "Wrobel";
    char sFirstName[20];
    char sLastName[20];
    printf("This is my first C9 app.\n");  
    printf("This is definitely a C/C++ environment.\n");
    printf("Let's try accepting interactive input...\n");
    printf("First name?: ");
    gets(sFirstName);
    printf("Last name?: ");
    gets(sLastName);
    printf("Hello %s %s", sFirstName, sLastName);
    return 0;
}
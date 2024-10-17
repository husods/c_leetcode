#include <stdio.h>
#include <string.h>

char* gcdOfStrings(char* str1, char* str2);

int main() {
    char str1[] = "AAAAAAAA";
    char str2[] = "AA";
    
    printf("%s", gcdOfStrings(str1, str2));
    return 0;
}

char* gcdOfStrings(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int a = len1;
    int b = len2;

    while (a != b) {
        if (a > b)
            a -= b;
        else
            b -= a;
    }

    a = 0;
    while (len1 >= (a+b)){
        if (strncmp(str1+a, str2, b) != 0){
            return "";
        }
        a = a + b;
    }

    a = b;
    b = 0;

    while (len2 >= (b+a)){
        if (strncmp(str1, str2+b, a) != 0){
            return "";
        }
        b = b + a;
    }

    str1[a] = '\0';
    return str1;
}

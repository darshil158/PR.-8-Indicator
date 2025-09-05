#include <stdio.h>

int lengthStr(char *str) {
    int l = 0;
    while (*str != '\0') {
        l++;
        str++;
    }
    return l;
}

int main() {
    int i,n=100;
    char str[n];
    printf("Enter Your String :- ");
    scanf("%[^\n]s", str);
    printf("String is :- %s\n",str);
    int len = lengthStr(str);
    printf("Length of the string: %d\n", len);
    
    return 0;
}




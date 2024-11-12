#include<stdio.h>
#include<string.h>

void string_copy(char *str2, const char *str1){
    while (*str1 != '\0') {
        *str2 = *str1;
        str2++;
        str1++;
    }
    *str2 = '\0';//End of a string
}

int main(){
    char str1[20] = "C programming";
	char str2[20];
    // strcpy(str2,str1);
    // puts(str2);
    string_copy(str2, str1);
    printf("%s",str2);
    return 0;
}
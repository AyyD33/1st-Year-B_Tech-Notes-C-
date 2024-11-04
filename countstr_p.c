#include <stdio.h>
#include <string.h>

int count(char *str1){
    int count = 0;
    while(*str1 != '\0'){
        count++;
        str1++;
    }

    return count;
}

int main(){
    char *str1 = "Lord";
    int cnt = count(str1);
    printf("Length of the string: %d\n", cnt);
    return 0;
}

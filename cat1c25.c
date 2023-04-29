#include <stdio.h>
#include <string.h>

int modifyString(char str[]) {
    int len = strlen(str);
    int i;

    
    for(i = 0; i < len; i++) {
        if(str[i] == ' ') {
            break;
        }
        if(i == 0) {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }

    
    for(i = i+1; i < len; i++) {
        str[i] = toupper(str[i]);
    }

    
    printf("%s\n", str);

    
    int length = strlen(str);
    printf("%d\n", length);

    
    if(length < 20) {
        return length;
    } else {
        return sizeof(str);
    }
}

int main() {
    char input[100];

   
    printf("Enter a sentence with two words: ");
    fgets(input, 100, stdin);

   
    int result = modifyString(input);

   
    printf("The returned value is %d\n", result);

    return 0;
}
#include <stdio.h>
#include <string.h>

int modifyString(char str[]) {
    int len = strlen(str);
    int i;

    for(i = 0; i < len; i++) {
        if(str[i] == ' ') {
            break;
        }
        if(i == 0) {
            str[i] = toupper(str[i]);
        } else {
            str[i] = tolower(str[i]);
        }
    }

   
    for(i = i+1; i < len; i++) {
        str[i] = toupper(str[i]);
    }

    
    printf("%s\n", str);

    int length = strlen(str);
    printf("%d\n", length);

    
    if(length < 20) {
        return length;
    } else {
        return sizeof(str);
    }
}

int main() {
    char input[100];

    
    printf("Enter a sentence with two words: ");
    fgets(input, 100, stdin);

    
    int result = modifyString(input);

    
    printf("The returned value is %d\n", result);

    return 0;
}

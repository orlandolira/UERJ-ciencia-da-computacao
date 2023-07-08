#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char reversedStr[100];
    
    printf("Digite uma palavra: ");
    fgets(str, sizeof(str), stdin);
    
    
    str[strcspn(str, "\n")] = '\0';
    
    int length = strlen(str);
    
    
    for (int i = 0; i < length; i++) {
        reversedStr[i] = str[length - 1 - i];
    }
    reversedStr[length] = '\0';
    
    
    if (strcmp(str, reversedStr) == 0) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
    
    return 0;
}

#include "string-encode.h"
#include "string.h"
#include "stdlib.h"
#include "assert.h"

char *str_encode(const char *str) {
    assert(str);
    int len = strlen(str);
    int multiple = 2;
    int max_occur = 9;
    char* string = malloc(sizeof(char) * (multiple * len + 1));
    char num[2] = {0};
    int occurence = 1;
    int index = 0; 
    for (int i = 0; i < len; i++) {
        if (occurence == max_occur || str[i] != str[i + 1]) {
            num[0] = occurence + '0'; 
            string[index++] = num[0];
            string[index++] = str[i];
            occurence = 1;
        } else {
            occurence += 1;
        }
    }
    string[index] = '\0';
    return string;
}
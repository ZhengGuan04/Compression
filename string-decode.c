#include "string-decode.h"
#include <stdlib.h>
#include "assert.h"

char *str_decode(const char *str) {
    assert(str);
    int len = 0;
    for (int i = 0; str[i]; i += 2) {
        len += str[i];
    }
    char* string = malloc(sizeof(char) * (len + 1));
    string[0] = '\0';
    int index = 0;
    for (int i = 0; str[i]; i += 2) {
        for (int j = 0; j < str[i] - '0'; j++) {
            string[index++] = str[i + 1];
        }
    }
    string[index] = 0;
    return string;
}
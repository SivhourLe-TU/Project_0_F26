#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* rand_string() is a character function that returns a string
of random characters (a word). The length of the word is a
parameter in your program */

char *rand_string(char *s, size_t size) {

    char *setchar = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    size_t setchar_size = strlen(setchar); 

    for (size_t i = 0; i < size; i++) {
        s[i] = setchar[rand() % setchar_size]; 

    }
    s[size] = '\0';  // Null-terminate the string

    return s;
}

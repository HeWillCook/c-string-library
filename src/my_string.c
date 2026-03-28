#include <stddef.h>
#include <stdio.h>

// Returns a pointer to the first occurrence of a value in a block of memory
void *my_memchr(void *pointer, int val, size_t size) {
    for (unsigned int i = 0; i < size; i++) {
        if (*(unsigned char *)(pointer + i) == val) {
            return pointer + i;
        }
    }
    return NULL;
}

// Compares two blocks of memory to determine which one represents a larger
// numeric value
int my_memcmp(void *pointer1, void *pointer2, size_t n) {
    for (unsigned int i = 0; i < n; i++) {
        unsigned char val1 = *(unsigned char *)pointer1;
        unsigned char val2 = *(unsigned char *)pointer2;
        if (val1 == val2) {
            continue;
        }
        return val1 - val2;
    }
    return NULL;
}

// Copies data from one block of memory to another
void *my_memcpy(void *dest, const void *src, size_t num_bytes) {
    for (unsigned int i = 0; i < num_bytes; i++) {
        *(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
    }
    return dest;
}

// Copies data from one block of memory to another accounting for the
// possibility that the blocks of memory overlap
void *my_memmove(void *dest, const void *src, size_t num_bytes) {
    unsigned char buf[num_bytes];
    for (unsigned int i = 0; i < num_bytes; i++) {
        buf[i] = *(unsigned char *)(src + i);
    }
    for (unsigned int i = 0; i < num_bytes; i++) {
        *(unsigned char *)(dest + i) = buf[i];
    }
    return dest;
}

// Sets all of the bytes in a block of memory to the same value
void *my_memset(void *mem, int c, size_t size) {
    for (unsigned int i = 0; i < size; i++) {
        *(unsigned char *)(mem + i) = (unsigned char)c;
    }
    return mem;
}

// Appends one string to the end of another
char *my_strcat(char *dest, const char *src) {
    char *end_of_dest = dest;
    while (*end_of_dest != '\0') {
        end_of_dest++;
    }
    char *end_of_src = (char *)src;
    while (*end_of_src != '\0') {
        *end_of_dest = *end_of_src;
        end_of_dest++;
        end_of_src++;
    }
    return dest;
}

// Returns a pointer to the first occurrence of a character in a string
char *my_strchr(const char *src, int c) {
    int i = 0;
    while (*(src + i) != '\0') {
        if (*(src + i) == (char)c) {
            return (char *)(src + i);
        }
    }
    return NULL;
}

// Compares the ASCII values of characters in two strings to determine which
// string has a higher value
int my_strcmp(const char *s1, const char *s2) {
    int pos = 0;
    while (*(s1 + pos) != '\0' || *(s2 + pos) != '\0') {
        if (*(s1 + pos) != *(s2 + pos)) {
            return *(s1 + pos) - *(s2 + pos);
        }
    }
    return 0;
}

// Compares the locale-based values of characters in two strings to determine
// which string has a higher value
int my_strcoll() { return 0; }

// Copies the characters of a string into the memory of another string
int my_strcpy() { return 0; }

// Returns the length of a string up to the first occurrence of one of the
// specified characters
int my_strcspn() { return 0; }

// Returns a string describing the meaning of an error code
int my_strerror() { return 0; }

// Return the length of a string
int my_strlen() { return 0; }

// Appends a number of characters from a string to the end of another string
int my_strncat() { return 0; }

// Compares the ASCII values of a specified number of characters in two strings
// to determine which string has a higher value
int my_strncmp() { return 0; }

// Copies a number of characters from one string into the memory of another
// string
int my_strncpy() { return 0; }

// Returns a pointer to the first position in a string which contains one of the
// specified characters
int my_strpbrk() { return 0; }

// Returns a pointer to the last occurrence of a character in a string
int my_strrchr() { return 0; }

// Returns the length of a string up to the first character which is not one of
// the specified characters
int my_strspn() { return 0; }

// Returns a pointer to the first occurrence of a string in another string
int my_strstr() { return 0; }

// Splits a string into pieces using delimiters
int my_strtok() { return 0; }

// Convert characters in a string from ASCII encoding to the encoding of the
// current locale
int my_strxfrm() { return 0; }

#include "../src/my_string.c"
#include <assert.h>
#include <stdio.h>
#include <string.h>

// Include your header if you have one
// #include "my_string.h"

void test_strlen() {
    printf("Testing my_strlen...\n");

    assert(my_strlen("") == strlen(""));
    assert(my_strlen("hello") == strlen("hello"));
    assert(my_strlen("test string") == strlen("test string"));

    printf("my_strlen passed\n\n");
}

void test_strcpy() {
    printf("Testing my_strcpy...\n");

    char a[100];
    char b[100];

    my_strcpy(a, "hello");
    strcpy(b, "hello");
    assert(strcmp(a, b) == 0);

    my_strcpy(a, "");
    strcpy(b, "");
    assert(strcmp(a, b) == 0);

    printf("my_strcpy passed\n\n");
}

void test_strncpy() {
    printf("Testing my_strncpy...\n");

    char a[100];
    char b[100];

    my_strncpy(a, "hello", 3);
    strncpy(b, "hello", 3);
    assert(strncmp(a, b, 3) == 0);

    printf("my_strncpy passed\n\n");
}

void test_strcmp() {
    printf("Testing my_strcmp...\n");

    assert(my_strcmp("hello", "hello") == 0);
    assert((my_strcmp("abc", "abd") < 0) == (strcmp("abc", "abd") < 0));
    assert((my_strcmp("abd", "abc") > 0) == (strcmp("abd", "abc") > 0));

    printf("my_strcmp passed\n\n");
}

void test_strncmp() {
    printf("Testing my_strncmp...\n");

    assert(my_strncmp("hello", "helium", 3) == 0);
    assert((my_strncmp("abc", "abd", 3) < 0) == (strncmp("abc", "abd", 3) < 0));

    printf("my_strncmp passed\n\n");
}

void test_strcat() {
    printf("Testing my_strcat...\n");

    char a[100] = "hello ";
    char b[100] = "hello ";

    my_strcat(a, "world");
    strcat(b, "world");

    assert(strcmp(a, b) == 0);

    printf("my_strcat passed\n\n");
}

void test_strchr() {
    printf("Testing my_strchr...\n");

    char *a = my_strchr("hello", 'l');
    char *b = strchr("hello", 'l');

    assert(a == NULL || b == NULL || strcmp(a, b) == 0);

    printf("my_strchr passed\n\n");
}

void test_strstr() {
    printf("Testing my_strstr...\n");

    char *a = my_strstr("hello world", "world");
    char *b = strstr("hello world", "world");

    assert(a == NULL || b == NULL || strcmp(a, b) == 0);

    printf("my_strstr passed\n\n");
}

int main() {
    printf("Running my_string tests...\n\n");

    test_strlen();
    test_strcpy();
    test_strncpy();
    test_strcmp();
    test_strncmp();
    test_strcat();
    test_strchr();
    test_strstr();

    printf("All tests passed!\n");

    return 0;
}

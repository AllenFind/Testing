#include <stdio.h>

#define UNCHANGEABLE_VALUE 5
#define CHANGEABLE_VALUE foo

int foo = 5;

int main() {
    printf("%d %d\n", UNCHANGEABLE_VALUE, CHANGEABLE_VALUE);
    CHANGEABLE_VALUE = 10;
    printf("%d %d\n", UNCHANGEABLE_VALUE, CHANGEABLE_VALUE);
    printf("%d\n",foo);
}

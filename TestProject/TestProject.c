#include <stdio.h>

int main(void)
{
    const char *n[] = {"hi","how","are","you?"};

    int count = sizeof(n) / sizeof(n[0]);

    for (int i = 0; i < count; i++) {
        printf("%s\n", n[i]);
    }

    return 0;
}

#by rafaelcaruana

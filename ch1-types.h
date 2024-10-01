#include <stdio.h>

#define PRINT_U(expr) \
    do { \
        printf(#expr " : %u\n", (expr)); \
    } while(0);

#define PRINT_S(expr) \
    do { \
        printf(#expr " : %i\n", (expr)); \
    } while(0);


#define PRINT_B(expr) \
    do { \
        printf(#expr " : %s\n", (expr)? "true" : "false"); \
    } while (0)


#define SEP(length) \
    do { \
        for (int i = 0; i < (length); i++) { \
            putchar('*');  \
        } \
        putchar('\n'); \
    } while (0);

 

#include "ch1-types.h"
#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"

#define L 30

int main()
{

    PRINT_U(sizeof(char));
    PRINT_U(sizeof(int));

    SEP(L);

    int tabInt[3] = {
        78, 129,
        0b00000000000000000000000100000000
        /*
        .........................1......... (position 9)
        =2⁸
        */
    };

    PRINT_U(tabInt);
    PRINT_U(tabInt + 1);
    PRINT_U(tabInt[0]);
    PRINT_U(*(tabInt + 1));
    PRINT_U(tabInt[2]);

    SEP(L);

    char *charP = tabInt;
    PRINT_U(charP);
    PRINT_U(charP + 1);
    PRINT_U(charP[2 * 4 + 1]);

    SEP(L);
    PRINT_U(sizeof(double));
    PRINT_U(sizeof(float));

    PRINT_B(0.1 + 0.2 == 0.3);    /*double*/
    PRINT_B(0.1f + 0.2f == 0.3f); /*float*/
    float float_limite = 300000000000000000000000000000000000000.0f;
    PRINT_B((1.0f / float_limite) * float_limite == 1.0f); /*overflow => perte de précision*/

    SEP(L);
    PRINT_S(5 % 4);
    PRINT_S(5 % -4);
    PRINT_S(-5 % 4);
    PRINT_S(-5 % -4);

    return 0;
}

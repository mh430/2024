#include <stdio.h>

struct Vect2 {
    int x;
    int y;
};

void printV2(struct Vect2 p) {
    printf("Vect2(%d, %d)\n", p.x, p.y);
}

int main() {
    struct Vect2 p1;    
    p1.x = 10;
    p1.y = 20;

    struct Vect2 p2 = {50, 20};
    
    struct Vect2 p3 = {.y = 10};

    struct Vect2 p4 = {p2.x+p3.x,p2.y+p3.y};

    printV2(p4);
    return 0;
}

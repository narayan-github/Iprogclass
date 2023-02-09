#include <stdio.h>
struct complex{
    int rl;
    int im;
};
typedef struct complex CN;

void printcn(CN c){
    printf("(%d) + i(%d)",c.rl,c.im);
}
void addcn(CN a1,CN a2){
    printf("(%d) + i(%d)",a1.rl + a2.rl,a1.im + a2.im);
}
void divcn(CN a3,CN a4){
    float r = ((a3.rl * a4.rl) + (a3.im *a4.im))/(a4.im * a4.im + a4.rl * a4.rl);
    float i = ((a3.im * a4.rl) - (a3.rl * a4.im))/(a4.im * a4.im + a4.rl * a4.rl);
    printf("(%f) + i(%f)",r,i);
}

int main(){
    CN a = {38,12};
    CN b = {43,23};
    divcn(a,b);
    return 0;
}
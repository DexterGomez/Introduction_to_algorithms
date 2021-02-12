/*
Sort two integers from less to higher
*/

#include <stdio.h>

int get_an_int(void);
int higher(int x, int y);
int smaller(int x, int y);

int main(void){
    int a;
    int b;

    printf("Introduce a value for a: ");
    a = get_an_int();

    printf("Introduce a value for b: ");
    b = get_an_int();

    if(a != b){
        printf("The higher number is %i and the smaller is %i\n", higher(a,b), smaller(a,b));
    }
    else{
        printf("Bother are the same\n");
    }

}

int get_an_int(void){
    int k;
    scanf("%i",&k);
    return k;
}

int higher(int x, int y){
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}

int smaller(int x, int y){
    if(x > y){
        return y;
    }
    else{
        return x;
    }
}
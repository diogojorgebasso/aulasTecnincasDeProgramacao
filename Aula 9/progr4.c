#include <stdio.h>
int main(int argc, char *argv[]){
    printf("%-10.2f %-10.2f %-10.2f \n", 834.0, 1500.15, 480.21);
    printf("%-10.2f %-10.2f %-10.2f \n", 23., 4500.64, 480.2109843759804375);
    putchar('a');
    for (int i =0; i<3; i++) {
        printf("\n");
    };
    return 0;
};

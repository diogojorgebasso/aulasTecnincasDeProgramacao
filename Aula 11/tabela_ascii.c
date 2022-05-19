int main(int argc, char *argv[]){
    int i,j;
    for(i=0; i<16; i++){
        for(j=1; j<16;j++){
            printf("[%d] = %c \t", i+j*16, i+j*16);
        }
        printf("\n");
    }
    return 0;
}

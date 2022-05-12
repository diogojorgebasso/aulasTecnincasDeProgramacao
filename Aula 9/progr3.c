#include <stdio.h>
int main(int argc, char * argv[]){
	float n = 3456.78;
	printf("%4.2f \n", n);
	printf("%3.1f \n", n);
	printf("%10.3f \n", n);
	//alinhamento com casas decimais
	printf("%10.2f %10.2f %10.2f\n", 23.0, n, 480.12);
	return 0;
}

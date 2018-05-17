#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int IPhone,Sum;
int main(int argc, char *argv[]) {
	for(IPhone=0;IPhone<20;IPhone++){
		Sum=Sum+IPhone;
	}
	printf("Sum=%d",Sum);
		return 0;
}

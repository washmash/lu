#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int IPhone,Sum;/*變數宣告*/ 
int main(int argc, char *argv[]) {
	for(IPhone=0;IPhone<20;IPhone++)/*從1加到20*/
	{
		Sum=Sum+IPhone;/*和*/ 
	}
	printf("Sum=%d",Sum);/*印出和*/ 
		return 0;
}

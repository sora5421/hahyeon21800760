#include <stdio.h>

void f1();
void f2();
void f3();
void f4();

int main(){
	f1();
	f2();
	f3();
	f4();
	
	return 0;
}

void f4(){
    int a = 2;
    int b = 4;
    int c;

    c = b/a;
    printf("Divide number = %d\n",c);
}


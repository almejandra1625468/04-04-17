-fibo.h

int fibonacci(int);


--fibo.c

int fibonacci(int n){
        if(n==1) return 1;
        if(n==2) return 1;
        else
        return fibonacci(n-1)+fibonacci(n-2);
}

--makefile

clean:
	rm -rf a.out fibo.o libfibo.a main
obj:
	gcc -c fibo.c -o fibo.o
lib:
	ar rcs libfibo.a fibo.o
bin obj lib
	gcc -static main.c -L. -I. -lfibo -o main
  
--main
  
#include "finonacci.h"

int main(int argc, char** argv){

	printf("%i\ ",fibonacci(10));

return 0;

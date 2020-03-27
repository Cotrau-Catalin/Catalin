//6. Sa se realizeze un program care realizeaza suma a doua
//  numerelor intr-o metoda separate de metoda main, iar aceea
//  metoda returneaza un pointer.
#include <stdio.h>
#include <stdlib.h>

int *sum(int a, int b)
{
	int *suma;
	suma = (int*)malloc(sizeof(int));
	*suma = a + b;
	return suma;
}

int main()

{
	int a, b, *suma;
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	suma = sum(a, b);
	printf("Valoarea sumei este:%d\n", *suma);
	system("pause");
	return 0;

}

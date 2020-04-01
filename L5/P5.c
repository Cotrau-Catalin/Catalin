//Sa se introduca într-o stiva toate numerele naturale pâna la
//50. Din prima stiva se vor elimina numerele prime si se vor
//adauga într-o a doua stiva sub forma binara.
#include <stdio.h>
#include <stdlib.h>
#define M 50
int stac1[M], stac2[M], t1 = -1, t2 = -1;
void po1()
{
	if (t1 == -1)
	{
		printf("\nStiva este goala\n");
		return;
	}
	t1--;
}
void po2()
{
	if (t2 == -1)
	{
		printf("\nStiva este goala\n");
		return;
	}
	t2--;
}
void pus1(int nr)
{
	if (t1 == M - 1)
	{
		printf("\nStiva este plina\n ");
		return;
	}
	stac1[++t1] = nr;
}
void pus2(int nr)
{
	if (t2 == M - 1)
	{
		printf("\nStiva este plina\n ");
		return;
	}
	stac2[++t2] = nr;
}
int prim(int nr)
{
	int i;
	if (nr == 1)
		return 0;
	for (i = 2; i <= nr / 2; i++)
		if (nr % i == 0)
			return 0;
	return 1;
}

int binar(int nr)
{
	int i, p = 0, baze2 = 0, binar[6];
	while (nr > 0)
	{
		binar[p] = nr % 2;
		nr = nr / 2;
		p++;
	}
	for (i = p - 1; i >= 0; i--)
		baze2 = baze2 * 10 + binar[i];
	return baze2;
}

int main()
{
	int i, aux[M], k = 0;
	for (i = 1; i <= M; i++)
		pus1(i);
	while (t1 != -1)
	{
		if (prim(stac1[t1]) == 1)
			pus2(binar(stac1[t1]));
		else
			aux[k++] = stac1[t1];
		po1();
	}
	for (i = k - 1; i >= 0; i--)
		pus1(aux[i]);
	for (i = 0; i <= t1; i++)
		printf("%d ", stac1[i]);
	printf("\n");
	for (i = 0; i <= t2; i++)
		printf("%d ", stac2[i]);
	printf("\n");
	system("pause");
	return 0;
}

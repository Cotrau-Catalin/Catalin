//6.  Se citeste de la tastatura un numar zecimal pana in 255. 
//  Sa se afiseze forma binara a numarului iar apoi din sirul binar sa se genereze valoarea maxima: 
//  27 -> 0001 1011 (val binara)
//  1111 0000 – Valoarea maxima
//  5 -> 0000 0101 (val binara)
//  1100 0000 – Valoarea maxima

#include <stdio.h>
#include <stdlib.h>
void schimbarea(int nr)
{
	int b[8] = { 0 }, k = 0, i;
	while (nr > 0)
	{
		b[k] = nr % 2;
		nr = nr / 2;
		k++;
	}
	for (i = 7; i >= 0; i--)
		printf("%d", b[i]);
	printf("\n");
}
int main()
{
	int nr, Valmax = 0, i, k = 7;
	printf("Scrieti un numar cuprins intre 0 si 255: ");
	scanf("%d", &nr);
	printf("\nValoarea binara a lui %d este: ", nr);
	schimbarea(nr);
	for (i = 7; i >= 0; i--)
		if (((nr >> i) & 1) == 1)
		{
			Valmax = Valmax | (1 << k);
			k--;
		}
	printf("\nValoarea binara maxima este: ");
	schimbarea(Valmax);
	system("pause");
	return 0;
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int	main(void)
{
	int	num;
	int	d;
	int	f;
	int	randomnumber;

	d = 1;
	f = 10;
	srand(time(NULL));
	randomnumber = rand() % 100;
	printf("\nHello and welcome to : PLUS OU MOINS!!!\n");
	printf("Je pense actuellement à un nombre.\n");
	printf("Sauras-tu le deviner en moins de 10 tentatives?\n");
	printf("Tu peux commencer à chercher ;)\n\n");
	while (d <= 10)
	{
		scanf("%d", &num);
		d++;
		f--;
		if (randomnumber == num)
		{
			printf("\nThat's it! *Rascism*\n");
			f = -1;
			d = 11;
		}
		else
		{
			if (num < 0)
				printf("\nOut of bounds\n");
			else
				if (num > 100)
					printf("\nOut of bounds\n");
			else
				if (randomnumber - 20 <= num && num < randomnumber)
					printf("\nMore\n");
			else
				if (0 <= num && num < randomnumber - 20)
					printf("\nMuch more\n");
			else
				if (randomnumber + 20 >= num && num > randomnumber)
					printf("\nLess\n");
			else
				if (100 >= num && num > randomnumber + 20)
					printf("\nMuch Less\n");
			else
				printf("dafuk");
		}
		if (f > 0)
			printf("Il te reste %d tentatives\n\n", f);
		else
			if (f == 0)
				printf("\nGame Over\n");
		else
			printf("Merci d'avoir joué");
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc == 1)
	{
		printf("\nAceasta comanda este de forma:");
		printf(" ./copyfile fisier1 fisier2\n");
		printf("Aceasta comanda copie continutul din fisier1 in fisier2\n");
		printf("Fisier2 poate sa nu exista, se creeaza automat\n");
		printf("!! Fisier1 trebuie sa existe !!\n\n");
		exit(EXIT_SUCCESS);
	}	
	if(argc != 1 && argc != 3)
	{
		fprintf(stderr, "\nComanda invalida!\n");
		fprintf(stderr, "Structura este de forma: ./copyfile fisier1 fisier2\n");
		fprintf(stderr, "Pentru mai multe detalii scrie ./copyfile\n\n");
		exit(EXIT_FAILURE);
	}
	FILE *in=0, *out=0;
	in = fopen(argv[1], "r");
	if(0==in)
	{
		fprintf(stderr, "\nComanda nu s-a putut realiza cu succes!\n");
		printf("Nu exista fisier cu numele: ");
		fputs(argv[1], stdout);
		printf("\n\n");
		exit(EXIT_FAILURE);
	}
	out = fopen(argv[2], "w");
	int c;
	c = fgetc(in);
	while(c!=EOF)
	{
		fputc(c, out);
		c = fgetc(in);
	}

	printf("\nComanza s-a realizat cu succes!\n");
	printf("S-a copiat continutul din ");
	fputs(argv[1], stdout);
	printf(" in ");
	fputs(argv[2], stdout);
	printf("\n\n");

	fclose(in);
	in = 0;
	fclose(out);
	out = 0;
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char recenica[81], znak1, znak2, rec1[81], rec2[81];
	puts("Unesi jedan red teksta:");
	gets_s(recenica); // cita string sa tastature do Enter
	//gets_s(recenica,sizeof(recenica)); // cita string sa tastature do Enter
	puts("Uneli ste tekst:");
	puts(recenica);
	puts("Unesi znak koji trazis:");
	scanf("%c", &znak1);
	char* pok1;
	int ind1, poz1;
	//adresa prve pojave znaka, NULL - nije pronadjen
	pok1 = strchr(recenica, znak1);
	printf("%d\n", pok1);
	if (pok1)
	{
		ind1 = pok1 - recenica; // indeks
		poz1 = pok1 - recenica + 1; // pozicija
		puts("Unesi znak kojim ga menjas:");
		//scanf(" %c", &znak2);
		getchar();//Hvatamo Enter
		//scanf("%c");//Hvatamo Enter
		znak2 = getchar();
		puts("Uneli ste znak:");
		putchar(znak2);
		// zamena
		*pok1 = znak2; // na adresu 102 se upise znak
		puts("String nakon zamene:");
		puts(recenica);
		// druga pojava znaka
		pok1 = strchr(pok1+1, znak1);
	}
	puts("Unesi rec koju trazis:");
	gets_s(rec1);
	puts("Unesi rec kojom je menja:");
	gets_s(rec2);
	strstr(rec1);

}

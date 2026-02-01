#pragma once

#define MAT_DAT ".\\DATA\\maticna.dat"
#define PROMET_DAT ".\\DATA\\promet.dat"

typedef struct proizvod {
	unsigned Id;
	char Naziv[15];
	unsigned Kolicina;
} PROIZVOD;

typedef enum promena {
	IZLAZ = -1,
	ULAZ = 1
} PROMENA;

typedef struct transakcija {
	unsigned Id;
	PROMENA Promena;
	unsigned Kolicina;
} TRANSAKCIJA;

typedef struct {
	unsigned int Id;
	int Kolicina;   // + ulaz, - izlaz
} PROMET;

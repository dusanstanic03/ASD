#ifndef DEFS_H
#define DEFS_H
#define _CRT_SECURE_NO_WARNINGS



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


#endif

#define MAT_DAT ".\\ASD\\DATA\\maticna.dat"
#define PROMET_DAT ".\\ASD\\DATA\\promet.dat"

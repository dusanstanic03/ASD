#include "adts.h"
#include <stdio.h>
#include <string.h>


#define MAT_TMP ".\\ASD\\DATA\\maticna.tmp"

void create_maticna(void) {
    FILE* f = fopen(MAT_DAT, "wb");
    if (!f) {
        printf("ERROR: Maticna datoteka ne moze da se kreira.\n");
        return;
    }

    printf("INFO: Maticna datoteka je kreirana.\n");
    fclose(f);
}

void select_all_maticna(void) {
    FILE* f = fopen(MAT_DAT, "rb");
    if (!f) {
        printf("ERROR: Maticna datoteka ne postoji.\n");
        return;
    }

    PROIZVOD p;

    printf("\nID   NAZIV        KOLICINA\n");
    printf("--------------------------\n");

    while (fread(&p, sizeof(PROIZVOD), 1, f) == 1) {
        printf("%-4u %-12s %u\n", p.Id, p.Naziv, p.Kolicina);
    }

    fclose(f);
}

void insert_maticna(void) {
    FILE* fin, * fout;
    PROIZVOD p, novi;
    int inserted = 0;

    printf("Unesite ID proizvoda: ");
    scanf("%u", &novi.Id);

    printf("Unesite naziv proizvoda: ");
    scanf("%14s", novi.Naziv);

    printf("Unesite kolicinu: ");
    scanf("%u", &novi.Kolicina);

    fin = fopen(MAT_DAT, "rb");
    fout = fopen(MAT_TMP, "wb");

    if (!fout) {
        printf("ERROR: Privremena datoteka se ne moze otvoriti.\n");
        return;
    }

    if (fin) {
        while (fread(&p, sizeof(PROIZVOD), 1, fin) == 1) {

            if (!inserted && novi.Id < p.Id) {
                fwrite(&novi, sizeof(PROIZVOD), 1, fout);
                inserted = 1;
            }

            if (novi.Id == p.Id) {
                printf("ERROR: Proizvod sa tim ID vec postoji.\n");
                fclose(fin);
                fclose(fout);
                remove(MAT_TMP);
                return;
            }

            fwrite(&p, sizeof(PROIZVOD), 1, fout);
        }
        fclose(fin);
    }

    if (!inserted) {
        fwrite(&novi, sizeof(PROIZVOD), 1, fout);
    }

    fclose(fout);

    remove(MAT_DAT);
    rename(MAT_TMP, MAT_DAT);

    printf("INFO: Proizvod je uspesno dodat.\n");
}

void delete_maticna(void) {
    FILE* fin, * fout;
    PROIZVOD p;
    unsigned int id;
    int found = 0;

    printf("Unesite ID proizvoda za brisanje: ");
    scanf("%u", &id);

    fin = fopen(MAT_DAT, "rb");
    if (!fin) {
        printf("ERROR: Maticna datoteka ne postoji.\n");
        return;
    }

    fout = fopen(MAT_TMP, "wb");
    if (!fout) {
        printf("ERROR: Privremena datoteka se ne moze otvoriti.\n");
        fclose(fin);
        return;
    }

    while (fread(&p, sizeof(PROIZVOD), 1, fin) == 1) {
        if (p.Id == id) {
            found = 1;
            continue; 
        }
        fwrite(&p, sizeof(PROIZVOD), 1, fout);
    }

    fclose(fin);
    fclose(fout);

    if (!found) {
        printf("INFO: Proizvod sa ID=%u ne postoji.\n", id);
        remove(MAT_TMP);
        return;
    }

    remove(MAT_DAT);
    rename(MAT_TMP, MAT_DAT);

    printf("INFO: Proizvod je obrisan.\n");
}




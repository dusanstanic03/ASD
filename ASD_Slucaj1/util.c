#include "util.h"
#include <direct.h>   // _mkdir
#include <stdio.h>

static void make_dir(const char* path) {
    if (_mkdir(path) == 0) {
        printf("Kreiran folder: %s\n", path);
    }
    else {
        // Ako vec postoji – nije greska
        // printf("Folder vec postoji: %s\n", path);
    }
}

void init_asd_folders(void) {
    make_dir(".\\ASD");
    make_dir(".\\ASD\\DATA");
    make_dir(".\\ASD\\DATA\\OLD");
    make_dir(".\\ASD\\RPT");
    make_dir(".\\ASD\\ERR");
    make_dir(".\\ASD\\DEMO");

    make_dir(".\\ASD\\DEMO\\SLUC_1");
    make_dir(".\\ASD\\DEMO\\SLUC_2");
    make_dir(".\\ASD\\DEMO\\SLUC_3");
    make_dir(".\\ASD\\DEMO\\SLUC_4");
    make_dir(".\\ASD\\DEMO\\SLUC_5");
}

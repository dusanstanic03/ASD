#include <stdio.h>
#include "defs.h"
#include "util.h"
#include "adts.h"

int main(void) {
    init_asd_folders();

    create_maticna();

    insert_maticna();
    /*insert_maticna();
    insert_maticna();*/
    delete_maticna();

    select_all_maticna();

    return 0;
}

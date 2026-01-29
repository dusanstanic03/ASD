#include <stdio.h>
#include "defs.h"
#include "util.h"
#include "adts.h"

int main(void) {
    init_asd_folders();

    create_maticna();

    insert_maticna();
    insert_maticna();
    //insert_maticna();
    //delete_maticna();
    //update_maticna();
    //select_all_maticna();
    //select_maticna_by_id();

    create_promet();
    insert_promet();
    insert_promet();

    select_all_promet();
    return 0;
}

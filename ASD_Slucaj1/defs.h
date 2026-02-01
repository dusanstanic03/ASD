#pragma once

// Meniji

#define MENI_TEKST_GLAVNI \
"********************************************************************************\n" \
"* Aplikacija: ASD\n" \
"* Opis : Azuriranje serijske(sortirane redne) datoteke\n" \
"* Verzija : 1.0\n" \
"* Upotreba : asd.exe[-d[1 | 2 | 3 | 4 | 5]]\n" \
"* 1 - demo za prvi slucaj azuriranja,\n" \
"* 2 - demo za drugi slucaj azuriranja, ...\n" \
"* Datum : dd.mm.2022.\n" \
"* Autori : Dusan  Stanic, ds20220215@student.fon.bg.ac.rs\n" \
"*          Vuk   Perovic, vp20220023@student.fon.bg.ac.rs\n" \
"* Mentor : Sasa D.Lazarevic, slazar@fon.rs\n" \
"********************************************************************************\n" \
"==================================\n" \
"GLAVNI MENI\n" \
"==================================\n" \
"0. Kraj rada\n" \
"1. Rad sa transakcionom datotekom\n" \
"2. Rad sa maticnom datotekom\n" \
"3. Pomoc\n" \
"\n"

#define MENI_TEKST_TR_DAT \
"====================================================================\n" \
"MENI Transakciona datoteka\n" \
"====================================================================\n" \
"0. Povratak\n" \
"\n" \
"1. Create ::= Kreiranje nove transakcione datoteke\n" \
"2. Drop ::= Unistavanje postojece transakcione datoteke\n" \
"3. Insert ::= Dodavanje nove transakcije\n" \
"4. Select All ::= Prikazivanje svih transakcija\n" \
"5. Select Id ::= Prikazivanje svih transakcija jednog proizvoda\n" \
"\n"

#define MENI_TEKST_MAT_DAT \
"================================================================================\n" \
"MENI Maticna datoteka\n" \
"================================================================================\n" \
"0. Povratak\n" \
"\n" \
"1. Create ::= Kreiranje nove maticne datoteke\n" \
"2. Drop ::= Unistavanje postojece maticne datoteke\n" \
"3. Insert ::= Dodavanje novog proizvoda\n" \
"4. Delete ::= Brisanje postojeceg proizvoda\n" \
"5. Update All ::= Azuriranje maticne datoteke upotrebom transakcione datoteke\n" \
"6. Update Id ::= Azuriranje jednog proizvoda\n" \
"7. Select All ::= Prikazivanje svih proizvoda\n" \
"8. Select Id ::= Prikazivanje jednog proizvoda\n" \
"\n"

#define MENI_TEKST_POMOC \
"==================================\n" \
"MENI Pomoc\n" \
"==================================\n" \
"0. Povratak\n" \
"\n" \
"1. O azuriranju serijske datoteke\n" \
"2. Demo\n" \
"3. O nama\n" \
"\n"

#define MENI_TEKST_DEMO \
"=========================\n" \
"MENI Demo\n" \
"=========================\n" \
"0. Povratak\n" \
"\n" \
"1. Osnovni slucaj\n" \
"2. Nepostojeca kolicina\n" \
"3. Nov proizvod\n" \
"4. Nepostojeci proizvod\n" \
"5. Sveobuhvatni slucaj\n" \
"\n"

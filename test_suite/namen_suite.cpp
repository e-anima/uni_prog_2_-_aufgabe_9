/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/namen_suite.h"

void name_test()
{
  cout << endl << endl << "-------------------- Name Test Start ----------------" << endl << endl;

  name_grundfunktionen();
  name_vergleiche();

  cout << endl << endl << "-------------------- Name Test Ende ----------------" << endl << endl;
}

void name_grundfunktionen()
{
  cout << endl << "------- Datums Grundfunktionen -------" << endl;


  Name name1 = Name();
  cout << endl << name1.liefere_anzahl_vornamen()
       << endl << name1.liefere_anzahl_nachnamen()
       << endl << name1.liefere_vornamen()
       << endl << name1.liefere_nachnamen()
       << endl << name1.liefere_namen()
       << endl << endl;

  Name name2 = Name("Markus", "Paeschke");
  cout << endl << name2 << endl;
  string namen_array[] = {"Daniel", "Johann"};
  Name name3 = Name(namen_array, 2, "Ghioreanu");
  cout << endl << name3 << endl;
  string nachnamen_array[] = {"Stoll", "Middendorff"};
  Name name4 = Name("Thomas", nachnamen_array, 2);
  cout << endl << name4 << endl;
  Name name5 = Name(namen_array, 2, nachnamen_array, 2);
  cout << endl << name5.liefere_anzahl_vornamen()
       << endl << name5.liefere_anzahl_nachnamen()
       << endl << name5.liefere_vornamen()
       << endl << name5.liefere_nachnamen()
       << endl << name5.liefere_namen()
       << endl << name5
       << endl << endl;

  Name name_kopie = name5;
  cout << endl << name_kopie << endl;
  name5 = Name("Vodoo", "Klosch");
  cout << endl << name_kopie << endl;
  cout << endl << name5 << endl;

  Name name_copy_constructor = Name(name4);
  cout << endl << "name_copy_constructor: " << name_copy_constructor << endl;

  name_copy_constructor.ersetze_vornamen("Nori");
  cout << endl << "name_copy_constructor: " << name_copy_constructor << endl;
  name_copy_constructor.ersetze_nachnamen("Mudrack");
  cout << endl << "name_copy_constructor: " << name_copy_constructor << endl;

  string vornamen_one_piece[]  = {"Ruffy", "Lorenad", "Chopper", "Nami"};
  string nachnamen_one_piece[] = {"Monkey", "Zorro", "Elch", "Smile"};
  name_copy_constructor.ersetze_vornamen("Bartholomeus");
  cout << endl << name_copy_constructor << endl;
  name_copy_constructor.ersetze_vornamen(vornamen_one_piece, 4);
  cout << endl << name_copy_constructor << endl;
  name_copy_constructor.ersetze_nachnamen("Baer");
  cout << endl << name_copy_constructor << endl;
  name_copy_constructor.ersetze_nachnamen(nachnamen_one_piece, 4);
  cout << endl << name_copy_constructor << endl;
}

void name_vergleiche()
{
  cout << endl << "------- Namensvergleiche -------" << endl;

  Name erster_name = Name("Markus", "Paeschke");
  Name zweiter_name = Name("Daniel", "Ghioreanu");

  cout << "Vergleich " << erster_name   << " < "  << zweiter_name << " = " << (erster_name  < zweiter_name)  << endl
       << "Vergleich " << zweiter_name  << " < "  << erster_name  << " = " << (zweiter_name < erster_name)   << endl
       << "Vergleich " << zweiter_name  << " < "  << zweiter_name << " = " << (zweiter_name < zweiter_name)  << endl   << endl

       << "Vergleich " << erster_name   << " > "  << zweiter_name << " = " << (erster_name  > zweiter_name)  << endl
       << "Vergleich " << zweiter_name  << " > "  << erster_name  << " = " << (zweiter_name > erster_name)   << endl
       << "Vergleich " << zweiter_name  << " > "  << zweiter_name << " = " << (zweiter_name > zweiter_name)  << endl << endl

       << "Vergleich " << zweiter_name  << " == " << erster_name  << " = " << (zweiter_name == erster_name)  << endl
       << "Vergleich " << zweiter_name  << " == " << zweiter_name << " = " << (zweiter_name == zweiter_name) << endl << endl

       << "Vergleich " << zweiter_name  << " != " << erster_name  << " = " << (zweiter_name != erster_name)  << endl
       << "Vergleich " << zweiter_name  << " != " << zweiter_name << " = " << (zweiter_name != zweiter_name) << endl << endl

       << "Vergleich " << erster_name   << " <= " << zweiter_name << " = " << (erster_name  <= zweiter_name) << endl
       << "Vergleich " << zweiter_name  << " <= " << erster_name  << " = " << (zweiter_name <= erster_name)  << endl
       << "Vergleich " << zweiter_name  << " <= " << zweiter_name << " = " << (zweiter_name <= erster_name)  << endl << endl

       << "Vergleich " << erster_name   << " >= " << zweiter_name << " = " << (erster_name  >= zweiter_name) << endl
       << "Vergleich " << erster_name   << " >= " << erster_name  << " = " << (erster_name  >= erster_name)  << endl
       << "Vergleich " << zweiter_name  << " >= " << erster_name  << " = " << (zweiter_name >= erster_name)  << endl;
}

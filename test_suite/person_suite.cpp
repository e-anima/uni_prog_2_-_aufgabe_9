/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/person_suite.h"

void person_test()
{
  cout << endl << endl << "-------------------- Person Test Start ----------------" << endl << endl;

  Mensch mann = Mensch();
  cout << mann.liefere_geschlecht() << endl;
  Mensch frau = Mensch('w');
  cout << frau.liefere_geschlecht() << endl;
  Mensch fehler_mensch = Mensch('x');
  cout << fehler_mensch.liefere_geschlecht() << endl;

  Mensch noch_ein_mensch = fehler_mensch;
  cout << noch_ein_mensch.liefere_geschlecht() << endl;

  cout << endl << endl << "-------------------- Person Test Ende ----------------" << endl << endl;
}

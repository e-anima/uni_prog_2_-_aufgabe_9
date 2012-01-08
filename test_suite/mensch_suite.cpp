/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/mensch_suite.h"

void mensch_test()
{
  cout << endl << endl << "-------------------- Mensch Test Start ----------------" << endl << endl;

  Mensch mann = Mensch();
  cout << mann << endl;
  Mensch frau = Mensch('w');
  cout << frau.liefere_geschlecht() << endl;
  Mensch fehler_mensch = Mensch('x');
  cout << fehler_mensch.liefere_geschlecht_ausgeschrieben() << endl;

  Mensch noch_ein_mensch = fehler_mensch;
  cout << noch_ein_mensch << endl;

  Mensch eingabe_mensch;
  cin >> eingabe_mensch;
  cout << "eingabe Mensch: " << eingabe_mensch << endl << endl;

  cout << endl << endl << "-------------------- Mensch Test Ende ----------------" << endl << endl;
}

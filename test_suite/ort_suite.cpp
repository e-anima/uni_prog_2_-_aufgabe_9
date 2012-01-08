/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/ort_suite.h"

void ort_test()
{
  cout << endl << endl << "-------------------- Ort Test Start ----------------" << endl << endl;

  ort_grundfunktionen();
  ort_vergleiche();

  cout << endl << endl << "-------------------- Ort Test Ende ----------------" << endl << endl;
}

void ort_grundfunktionen()
{
  Ort berlin = Ort();
  cout << "Berlin: " << berlin << endl;
  Ort bremen = Ort("Bremen", "Deutschland", "Bremen");
  cout << "Bremen: " << bremen << endl;
  Ort hamburg = Ort("Hamburg", "Deutschland");
  cout << "Hamburg: " << hamburg << endl;
  Ort koeln = Ort("Koeln");
  cout << "Koeln: " << koeln << endl;

  Ort kopiertes_berlin = berlin;
  cout << "kopiertes Berlin: " << kopiertes_berlin << endl;

  Ort ort_aus_eingabe = Ort();
  cin >> ort_aus_eingabe;
  cout << "Ort aus Eingabe: " << ort_aus_eingabe << endl << endl;

  ort_aus_eingabe.setze_land("England");
  cout << "Veraendertes Land: " << ort_aus_eingabe << endl << endl;
  ort_aus_eingabe.setze_landesteil("Birmingham");
  cout << "Veraendertes Landesteil: " << ort_aus_eingabe << endl << endl;
  ort_aus_eingabe.setze_name("London");
  cout << "Veraenderter Name: " << ort_aus_eingabe << endl << endl;

  cout << "Liefere Land: " << kopiertes_berlin.liefere_land() << endl
       << "Liefere Landesteil: " << kopiertes_berlin.liefere_landesteil() << endl
       << "Liefere Name: " << kopiertes_berlin.liefere_ortsname() << endl
       << "Liefere Beschreibung: " << kopiertes_berlin.liefere_ortsbeschreibung() << endl << endl;
}

void ort_vergleiche()
{

}

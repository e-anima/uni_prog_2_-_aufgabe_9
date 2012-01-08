/**
 *
 *  @author Markus Paeschke (s0531524)
 */

/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/adresse_suite.h"

void adresse_test()
{
  cout << endl << endl << "-------------------- Adresse Test Start ----------------" << endl << endl;

  adresse_grundfunktionen();
  adresse_vergleiche();

  cout << endl << endl << "-------------------- Adresse Test Ende ----------------" << endl << endl;
}

void adresse_grundfunktionen()
{
  Adresse berlin     = Adresse();
  Adresse la         = Adresse(Ort("Los Angeles", "LA", "tralla"), 23235, "Kaesekuchen", 16);
  Adresse london     = Adresse(Ort("London", "England", "Birmingham"), 18156, "Neokloschstreet");
  Adresse sydney     = Adresse(Ort("Sydney", "Australien", "Australien"), 66699);
  Adresse ny         = Adresse(Ort("New York", "Big Apple", "USA"));
  Adresse konstanz   = Adresse("Konstanz", "Deutschland", "Hamburg", 99874, "Hamburgstrasse", 235);
  Adresse bremen     = Adresse("Bremen", "Deutschland", "Bremen", 33698, "Kirchbluetenstrasse");
  Adresse koeln      = Adresse("Koeln", "Deutschland", "Koeln", 23558);
  Adresse muenchen   = Adresse("Muenchen", "Deutschland", "Bayern");
  Adresse nuernberg  = Adresse("Nuernberg", "Deutschland");
  Adresse wuerzberg  = Adresse("Wuerzburg");

  cout << "Berlin: "        << berlin        << endl
       << "LA: "            << la            << endl
       << "London: "        << london        << endl
       << "Sydney: "        << sydney        << endl
       << "New York: "      << ny            << endl
       << "Konstanz: "      << konstanz      << endl
       << "Bremen: "        << bremen        << endl
       << "Koeln: "         << koeln         << endl
       << "Muenchen: "      << muenchen      << endl
       << "Nuernberg: "     << nuernberg     << endl
       << "Wuerzburg: "     << wuerzberg     << endl << endl;


  Adresse kopiertes_berlin = berlin;
  cout << "kopiertes Berlin: " << kopiertes_berlin << endl;

  Ort ort_zum_kopieren = Ort("Markus", "Paeschke", "Neoklosch");
  Adresse kopierter_markus = ort_zum_kopieren;
  cout << "adresse -> ort: " << kopierter_markus << endl;

  Adresse adresse_aus_eingabe = Adresse();
  cin >> adresse_aus_eingabe;
  cout << "Adresse aus Eingabe: " << adresse_aus_eingabe << endl << endl;

  adresse_aus_eingabe.setze_land("England");
  cout << "Veraendertes Land: " << adresse_aus_eingabe << endl << endl;
  adresse_aus_eingabe.setze_landesteil("Birmingham");
  cout << "Veraendertes Landesteil: " << adresse_aus_eingabe << endl << endl;
  adresse_aus_eingabe.setze_name("London");
  cout << "Veraenderter Name: " << adresse_aus_eingabe << endl << endl;
  adresse_aus_eingabe.setze_strasse("Blubstrasse");
  cout << "Veraenderter Strasse: " << adresse_aus_eingabe << endl << endl;
  adresse_aus_eingabe.setze_hausnummer(23235);
  cout << "Veraenderter Hausnummer: " << adresse_aus_eingabe << endl << endl;
  adresse_aus_eingabe.setze_postleitzahl(18888);
  cout << "Veraendertere Plz: " << adresse_aus_eingabe << endl << endl;

  cout << "Liefere Land: "         << la.liefere_land()             << endl
       << "Liefere Landesteil: "   << la.liefere_landesteil()       << endl
       << "Liefere Name: "         << la.liefere_ortsname()         << endl
       << "Liefere Strasse: "      << la.liefere_strasse()          << endl
       << "Liefere Hausnummer: "   << la.liefere_hausnummer()       << endl
       << "Liefere PLZ: "          << la.liefere_postleitzahl()     << endl
       << "Liefere Beschreibung: " << la.liefere_ortsbeschreibung() << endl << endl;
}

void adresse_vergleiche()
{

}

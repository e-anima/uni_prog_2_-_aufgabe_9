#include "header/datums_suite.h"

void datums_test()
{
  cout << endl << endl << "-------------------- Datums Test Start ----------------" << endl << endl;

  datums_grundfunktionen();
  datums_berechnungen();
  datums_vergleiche();
  falsche_daten();

  cout << endl << endl << "-------------------- Datums Test Ende ----------------" << endl << endl;
}

void datums_grundfunktionen()
{
  cout << endl << "------- Datums Grundfunktionen -------" << endl;

  Datum erstes_datum = Datum();
  cout << erstes_datum.liefere_din_datum()      << endl;
  cout << erstes_datum.liefere_jahr()           << endl;
  cout << erstes_datum.liefere_monat()          << endl;
  cout << erstes_datum.liefere_tag()            << endl;
  cout << erstes_datum.liefere_standarddatum()  << endl;
  cout << erstes_datum.liefere_textdatum()      << endl;
  cout << erstes_datum.liefere_wochentag()      << endl;
  cout << erstes_datum.liefere_wochentagdatum() << endl;

  Datum zweites_datum = Datum(16, 6, 1986);
  cout << "zweites Datum: " << zweites_datum.liefere_standarddatum() << endl;
  Datum drittes_datum = Datum(16, 06, 1986);
  cout << "drittes Datum: " << drittes_datum.liefere_standarddatum() << endl;
  Datum viertes_datum = Datum(16, 0, 1986);
  cout << "viertes Datum: " << viertes_datum.liefere_standarddatum() << endl;
  Datum fuenftes_datum = Datum(30, 2, 2012);
  cout << "fuenftes Datum: " << fuenftes_datum.liefere_standarddatum() << endl;
  Datum sechstes_datum = Datum(erstes_datum);
  cout << "sechstes Datum: " << sechstes_datum.liefere_standarddatum() << endl;
  Datum siebstes_datum = zweites_datum;
  cout << "siebtes Datum: " << siebstes_datum.liefere_standarddatum() << endl;

  Datum datum_aus_eingabe;
  cin >> datum_aus_eingabe;
  cout << "Datum aus Eingabe: " << datum_aus_eingabe << endl << endl;
}

void datums_berechnungen()
{
  cout << endl << "------- Datumsberechnungen -------" << endl;
  Datum erstes_datum  = Datum();
  Datum zweites_datum = Datum(6, 1, 2012);

  cout << "Berechnung " << erstes_datum << " + 2: " << (erstes_datum + 2) << endl
       << "Berechnung " << erstes_datum << " - 5: " << (erstes_datum - 5) << endl
       << "Berechnung " << erstes_datum << " + 44: " << (erstes_datum + 44) << endl
       << "Berechnung " << erstes_datum << " - 65: " << (erstes_datum - 65) << endl;

  cout << endl;
  cout << "Berechnung " << erstes_datum << " - " << zweites_datum << ": " << (erstes_datum - zweites_datum) << endl;
  cout << endl;

  zweites_datum++;
  cout << "zweites Datum ++: " << zweites_datum.liefere_standarddatum() << endl;
  cout << "zweites Datum ++: " << zweites_datum++ << endl;
  ++zweites_datum;
  cout << "++ zweites Datum: " << zweites_datum.liefere_standarddatum() << endl;
  cout << "++ zweites Datum: " << ++zweites_datum << endl;
  cout << endl;
}

void datums_vergleiche()
{
  cout << endl << "------- Datumsvergleiche -------" << endl;
  Datum erstes_datum = Datum();
  Datum zweites_datum = Datum(16, 6, 1986);

  cout << "Vergleich " << erstes_datum.liefere_standarddatum()  << " < "  << zweites_datum.liefere_standarddatum() << " = " << (erstes_datum  < zweites_datum)  << endl
       << "Vergleich " << zweites_datum.liefere_standarddatum() << " < "  << erstes_datum.liefere_standarddatum()  << " = " << (zweites_datum < erstes_datum)   << endl
       << "Vergleich " << zweites_datum.liefere_standarddatum() << " < "  << zweites_datum.liefere_standarddatum() << " = " << (zweites_datum < zweites_datum)  << endl << endl

       << "Vergleich " << erstes_datum.liefere_standarddatum()  << " > "  << zweites_datum.liefere_standarddatum() << " = " << (erstes_datum  > zweites_datum)  << endl
       << "Vergleich " << zweites_datum.liefere_standarddatum()  << " > "  << erstes_datum.liefere_standarddatum() << " = " << (zweites_datum > erstes_datum)   << endl
       << "Vergleich " << zweites_datum.liefere_standarddatum()  << " > "  << zweites_datum.liefere_standarddatum() << " = " << (zweites_datum > zweites_datum)   << endl << endl

       << "Vergleich " << zweites_datum.liefere_standarddatum() << " == " << erstes_datum.liefere_standarddatum()  << " = " << (zweites_datum == erstes_datum)  << endl
       << "Vergleich " << zweites_datum.liefere_standarddatum() << " == " << zweites_datum.liefere_standarddatum() << " = " << (zweites_datum == zweites_datum) << endl << endl

       << "Vergleich " << zweites_datum.liefere_standarddatum() << " != " << erstes_datum.liefere_standarddatum()  << " = " << (zweites_datum != erstes_datum)  << endl
       << "Vergleich " << zweites_datum.liefere_standarddatum() << " != " << zweites_datum.liefere_standarddatum() << " = " << (zweites_datum != zweites_datum) << endl << endl

       << "Vergleich " << erstes_datum.liefere_standarddatum()  << " <= " << zweites_datum.liefere_standarddatum() << " = " << (erstes_datum  <= zweites_datum) << endl
       << "Vergleich " << zweites_datum.liefere_standarddatum() << " <= " << erstes_datum.liefere_standarddatum()  << " = " << (zweites_datum <= erstes_datum)  << endl
       << "Vergleich " << zweites_datum.liefere_standarddatum() << " <= " << zweites_datum.liefere_standarddatum() << " = " << (zweites_datum <= erstes_datum)  << endl << endl

       << "Vergleich " << erstes_datum.liefere_standarddatum()  << " >= " << zweites_datum.liefere_standarddatum() << " = " << (erstes_datum  >= zweites_datum) << endl
       << "Vergleich " << erstes_datum.liefere_standarddatum()  << " >= " << erstes_datum.liefere_standarddatum()  << " = " << (erstes_datum  >= erstes_datum)  << endl
       << "Vergleich " << zweites_datum.liefere_standarddatum() << " >= " << erstes_datum.liefere_standarddatum()  << " = " << (zweites_datum >= erstes_datum)  << endl;
}

void falsche_daten()
{
  cout << endl << "------- Falsche Daten -------" << endl;
  Datum erstes_datum = Datum(32, 6, 1986);
  cout << "erstes Datum: " << erstes_datum.liefere_standarddatum() << endl;
  erstes_datum = Datum(20, 13, 1986);
  cout << "erstes Datum: " << erstes_datum.liefere_standarddatum() << endl;
  erstes_datum = Datum(2, 3, 1000);
  cout << "erstes Datum: " << erstes_datum.liefere_standarddatum() << endl;
  erstes_datum = Datum(2, 3, 1000000);
  cout << "erstes Datum: " << erstes_datum.liefere_standarddatum() << endl;
}

/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/zeit_suite.h"

void zeit_test()
{
  cout << endl << endl << "-------------------- Zeit Test Start ----------------" << endl << endl;

  zeit_grundfunktionen();
  zeit_berechnungen();
  zeit_vergleiche();
  zeit_falsche_daten();

  cout << endl << endl << "-------------------- Zeit Test Ende ----------------" << endl << endl;
}

void zeit_grundfunktionen()
{
  cout << endl << "------- Zeit Grundfunktionen -------" << endl;

  Zeit erste_zeit = Zeit(23, 20, 50);
  cout << erste_zeit.liefere_stunden()                      << endl;
  cout << erste_zeit.liefere_minuten()                      << endl;
  cout << erste_zeit.liefere_sekunden()                     << endl;
  cout << erste_zeit.liefere_stunden_und_minuten()          << endl;
  cout << erste_zeit.liefere_stunden_minuten_und_sekunden() << endl;
  cout << erste_zeit.liefere_zeit_in_sekunden()             << endl;

  Zeit zweite_zeit = Zeit(12, 0, 18);
  cout << "zweites Zeit: " << zweite_zeit << endl;
  Zeit dritte_zeit = Zeit(16, 06, 1986);
  cout << "dritte Zeit: " << dritte_zeit << endl;
  Zeit vierte_zeit = Zeit(16, 0, 1986);
  cout << "vierte Zeit: " << vierte_zeit << endl;
  Zeit fuenfte_zeit = Zeit(30, 2, 2012);
  cout << "fuenftes Zeit: " << fuenfte_zeit << endl;
  Zeit sechste_zeit = Zeit(erste_zeit);
  cout << "sechstes Zeit: " << sechste_zeit << endl;

  Zeit zeit_aus_eingabe;
  cin >> zeit_aus_eingabe;
  cout << "Zeit aus Eingabe: " << zeit_aus_eingabe << endl << endl;

  Zeit zeit_kopie = fuenfte_zeit;
  cout << "Zeit Kopie: " << zeit_kopie << endl << endl;
}

void zeit_berechnungen()
{
  cout << endl << "------- Zeitberechnungen -------" << endl;
  Zeit erste_zeit  = Zeit(23, 59, 23);
  Zeit zweite_zeit = Zeit(6, 1, 40);

  cout << "Berechnung " << erste_zeit << " + 2: " << (erste_zeit + 2) << endl
       << "Berechnung " << erste_zeit << " - 5: " << (erste_zeit - 5) << endl
       << "Berechnung " << erste_zeit << " + 44: " << (erste_zeit + 44) << endl
       << "Berechnung " << erste_zeit << " - 65: " << (erste_zeit - 65) << endl;

  cout << endl;
  cout << "Berechnung " << erste_zeit << " - " << zweite_zeit << ": " << (erste_zeit - zweite_zeit) << endl;
  cout << endl;

  cout << "zweites Zeit ++: " << zweite_zeit << endl;
  zweite_zeit++;
  cout << "zweites Zeit ++: " << zweite_zeit << endl;
  ++zweite_zeit;
  cout << "++ zweites Zeit: " << zweite_zeit << endl;
  cout << "++ zweites Zeit: " << ++zweite_zeit << endl;
  cout << endl;
}

void zeit_vergleiche()
{
  cout << endl << "------- Zeitvergleiche -------" << endl;
  Zeit erste_zeit  = Zeit(12);
  Zeit zweite_zeit = Zeit(18);

  cout << "Vergleich " << erste_zeit  << " < "  << zweite_zeit << " = " << (erste_zeit  < zweite_zeit)  << endl
       << "Vergleich " << zweite_zeit << " < "  << erste_zeit  << " = " << (zweite_zeit < erste_zeit)   << endl
       << "Vergleich " << zweite_zeit << " < "  << zweite_zeit << " = " << (zweite_zeit < zweite_zeit)  << endl << endl

       << "Vergleich " << erste_zeit  << " > "  << zweite_zeit << " = " << (erste_zeit  > zweite_zeit)  << endl
       << "Vergleich " << zweite_zeit << " > "  << erste_zeit  << " = " << (zweite_zeit > erste_zeit)   << endl
       << "Vergleich " << zweite_zeit << " > "  << zweite_zeit << " = " << (zweite_zeit > zweite_zeit)  << endl << endl

       << "Vergleich " << zweite_zeit << " == " << erste_zeit  << " = " << (zweite_zeit == erste_zeit)  << endl
       << "Vergleich " << zweite_zeit << " == " << zweite_zeit << " = " << (zweite_zeit == zweite_zeit) << endl << endl

       << "Vergleich " << zweite_zeit << " != " << erste_zeit  << " = " << (zweite_zeit != erste_zeit)  << endl
       << "Vergleich " << zweite_zeit << " != " << zweite_zeit << " = " << (zweite_zeit != zweite_zeit) << endl << endl

       << "Vergleich " << erste_zeit  << " <= " << zweite_zeit << " = " << (erste_zeit  <= zweite_zeit) << endl
       << "Vergleich " << zweite_zeit << " <= " << erste_zeit  << " = " << (zweite_zeit <= erste_zeit)  << endl
       << "Vergleich " << zweite_zeit << " <= " << zweite_zeit << " = " << (zweite_zeit <= zweite_zeit) << endl << endl

       << "Vergleich " << erste_zeit  << " >= " << zweite_zeit << " = " << (erste_zeit  >= zweite_zeit) << endl
       << "Vergleich " << erste_zeit  << " >= " << erste_zeit  << " = " << (erste_zeit  >= erste_zeit)  << endl
       << "Vergleich " << zweite_zeit << " >= " << erste_zeit  << " = " << (zweite_zeit >= erste_zeit)  << endl;
}

void zeit_falsche_daten()
{
  cout << endl << "------- Zeit Falsche Daten -------" << endl;
  Zeit erste_zeit = Zeit(28, 80, 90);
  cout << "erste Zeit: " << erste_zeit << endl;
  erste_zeit = Zeit(28, 10000, 20);
  cout << "erste Zeit: " << erste_zeit << endl;
  erste_zeit = Zeit(100000, 3, 1000);
  cout << "erste Zeit: " << erste_zeit << endl;
  erste_zeit = Zeit(2, 3, 1000000);
  cout << "erste Zeit: " << erste_zeit << endl;
  erste_zeit.setze_stunden(8487623);
  cout << "erste Zeit: " << erste_zeit << endl;
  erste_zeit.setze_minuten(33234);
  cout << "erste Zeit: " << erste_zeit << endl;
  erste_zeit.setze_sekunden(232355);
  cout << "erste Zeit: " << erste_zeit << endl;
}


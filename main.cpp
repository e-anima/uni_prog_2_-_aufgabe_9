#include "header/main.h"

/**
  *  - Uni Verwaltung -
  *
  *  @author Markus Paeschke (531524)
  *  @version 1.0
  */
int main()
{
  programmstart();
  cout << endl;
  int menue_wahl;
  Uni_Verwaltung liste = Uni_Verwaltung();
  Datei_Handler datei = Datei_Handler("files/namen.txt");
  do
  {
    schreibe_n_mal('-', 80);
    menue_wahl = erzeuge_menue();
    switch (menue_wahl)
    {
      case 1:
        liste = Uni_Verwaltung(erfasse_zahl<int>("Wieviele Personen sollen generiert werden?", 1, 1000));
        break;
      case 2:
        cout << endl << liste << endl;
        break;
      case 3:
        cout << endl << datei.liefere_anzahl_zeilen() << endl;
        cout << endl << datei.liefere_zeile(23) << endl;
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
        break;
      case 8:
        break;
      case 9:
        break;
      case 10:
        break;
    }
  } while (menue_wahl != 11);
    programmende();
  return 0;
}

int erzeuge_menue()
{
  vector<string> menue;
  menue.push_back("erzeuge n zufaellige Personen");
  menue.push_back("Personen unsortiert ausgeben");
  menue.push_back("Personen sortiert nach Nachname -> Vorname -> Geburtsdatum");
  menue.push_back("Personen sortiert nach Geburtsdatum -> Nachname -> Vorname");
  menue.push_back("Personen sortiert nach Jahrgang -> Nachname -> Vorname");
  menue.push_back("erzeuge n zufaellige Studenten");
  menue.push_back("Studenten unsortiert ausgeben");
  menue.push_back("Studenten sortiert nach Matrikelnummer");
  menue.push_back("Studenten sortiert nach Fachbereich -> Matrikelnummer");
  menue.push_back("Studenten sortiert nach Fachbereich -> Nachname -> Vorname");
  menue.push_back("Beenden");
  return schreibe_menue<string>(menue);
}

/** Gibt den Begruessungstext, beim Starten des Programms, auf dem Bildschirm aus. */
void programmstart()
{
  cout << endl << endl << "- Uni Verwaltung -" << endl << endl;
}

/** Gibt den Text, beim Beenden des Programms, auf dem Bildschirm aus. */
void programmende()
{
  cout << endl << "Das Programm wird beendet." << endl << endl;
}

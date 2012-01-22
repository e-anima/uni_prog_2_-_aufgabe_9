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
        liste.schreibe_personen_unsortiert();
        break;
      case 3:
        liste.schreibe_personen_unsortiert();
        break;
      case 4:
        liste.schreibe_personen_unsortiert();
        break;
      case 5:
        break;
      case 6:
        liste = Uni_Verwaltung(erfasse_zahl<int>("Wieviele Studenten sollen generiert werden?", 1, 1000));
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
  } while (menue_wahl != 10);
    programmende();
  return 0;
}

int erzeuge_menue()
{
  vector<string> menue;
  menue.push_back("erzeuge n zufaellige Personen");
  menue.push_back("erzeuge n zufaellige Studenten");
  menue.push_back("Personen unsortiert ausgeben");
  menue.push_back("Personen sortiert nach Nachname -> Vorname -> Geburtsdatum");
  menue.push_back("Personen sortiert nach Geburtsdatum -> Nachname -> Vorname");
  menue.push_back("Personen sortiert nach Jahrgang -> Nachname -> Vorname");
  menue.push_back("Studenten sortiert nach Matrikelnummer");
  menue.push_back("Studenten sortiert nach Fachbereich -> Matrikelnummer");
  menue.push_back("Studenten sortiert nach Fachbereich -> Nachname -> Vorname");
  menue.push_back("Beenden");
  return schreibe_menue<string>(menue);
}

void erzeuge_zufaellige_personen(int anzahl_personen)
{
  Datei_Handler emails        = Datei_Handler(DATEIORDNER + DATEI_EMAILS);
  Datei_Handler fachbereiche  = Datei_Handler(DATEIORDNER + DATEI_FACHBREICH);
  Datei_Handler land          = Datei_Handler(DATEIORDNER + DATEI_LAND);
  Datei_Handler nachnamen     = Datei_Handler(DATEIORDNER + DATEI_NACHNAMEN);
  Datei_Handler nationalitaet = Datei_Handler(DATEIORDNER + DATEI_NATIONALITAET);
  Datei_Handler ort           = Datei_Handler(DATEIORDNER + DATEI_ORT);
  Datei_Handler strassen      = Datei_Handler(DATEIORDNER + DATEI_STRASSE);
  Datei_Handler studiengang   = Datei_Handler(DATEIORDNER + DATEI_STUDIENGANG);
  Datei_Handler vornamen      = Datei_Handler(DATEIORDNER + DATEI_VORNAMEN);
  Zufallsgenerierung zufall   = Zufallsgenerierung();
  for (int personen_zaehler = 0; personen_zaehler < anzahl_personen; ++personen_zaehler)
  {
    Person zufaellige_person  = Person();
    int modulo_wert = personen_zaehler % 3;
    if (modulo_wert == 0)
    {
      liste[personen_zaehler] = new Student();
    }
    else if (modulo_wert == 1)
    {
      liste[personen_zaehler] = new Angestellter();
    }
    else
    {
      liste[personen_zaehler] = new Professor();
    }
  }
}

void erzeuge_zufaellige_studenten(int anzahl_studenten)
{
  cout << endl << anzahl_studenten << endl;
  /*liste = new Student*[anzahl_studenten];
  for (int personen_zaehler = 0; personen_zaehler < anzahl_studenten; ++personen_zaehler)
  {
    liste[personen_zaehler] = new Student();
  }*/
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

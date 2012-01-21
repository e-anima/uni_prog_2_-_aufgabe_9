#include "header/eingabe.h"

/**
 * Erfaesst einen boolschen Wert, der vom Benutzer eingegeben werden muss.
 * 
 * @return Den Wert, true oder false, der vom Benutzer eingegeben wurde.
 */
bool erfasse_bool()
{
  bool eingabe = 0;
  bool eingabe_ok = false;
  cin.clear();
  cin.unsetf(cin.skipws);
  cin.setf(cin.boolalpha);
  do
  {
    cin >> eingabe;
    eingabe_ok = cin.good();
    cin.clear();
    cin.ignore(static_cast<streamsize>(LONG_MAX), '\n');
    if (!eingabe_ok)
    {
      cout << "Bitte true oder false eingeben:\t";
    }
  } while (!eingabe_ok);
  cin.setf(cin.skipws);
  cin.unsetf(cin.boolalpha);
  return eingabe;
}

/**
 * Erfaesst ein Zeichen, welches vom Benutzer eingegeben werden muss.
 *
 * @param  eingabeaufforderung  Der Text, welcher vor der Erfassung des Zeichens, auf dem Bildschirm ausgegeben werden soll.
 *
 * @return Das vom Benutzer eingegebene Zeichen.
 */
char erfasse_zeichen(string eingabeaufforderung)
{
  if (eingabeaufforderung != "")
  {
    cout << eingabeaufforderung << ":\t";
  }
  streamsize alter_wert = cin.width();
  cin.width(1);
  char das_zeichen;
  cin >> das_zeichen;
  cin.ignore(static_cast<streamsize>(LONG_MAX), '\n');
  cin.width(alter_wert);
  return das_zeichen;
}

/**
 * Erfaesst ein Zeichen, welches vom Benutzer eingegeben werden muss.
 *
 * @param  eingabeaufforderung     Der Text, welcher vor der Erfassung des Zeichens, auf dem Bildschirm ausgegeben werden soll.
 * @param  zu_erfassendes_zeichen  Das Zeichen, welches der Benutzer eingeben muss. Bei Fehleingabe wird ein Hinweistext ausgegeben.
 *
 * @return Das vom Benutzer eingegebene Zeichen.
 */
char erfasse_zeichen(string eingabeaufforderung, char zu_erfassendes_zeichen)
{
  bool ist_gueltig = false;
  char das_zeichen;
  do
  {
    das_zeichen = erfasse_zeichen(eingabeaufforderung);
    if (das_zeichen == zu_erfassendes_zeichen)
    {
      ist_gueltig = true;
    }
    else
    {
      cout << "Bitte geben Sie das Zeichen " << zu_erfassendes_zeichen << " ein." << endl;
    }
  } while (!ist_gueltig);
  return das_zeichen;
}

/**
 * Erfaesst ein Zeichen, welches vom Benutzer eingegeben werden muss.
 *
 * @param  eingabeaufforderung     Der Text, welcher vor der Erfassung des Zeichens, auf dem Bildschirm ausgegeben werden soll.
 * @param  zu_erfassendes_zeichen  Ein Array aus Zeichen, von denen der Benutzer eins eingeben muss. Bei Fehleingabe wird ein Hinweistext ausgegeben.
 * @param  anzahl                  Die Anzahl der Zeichen welche der Benutzer eingeben muss.
 *
 * @return Das vom Benutzer eingegebene Zeichen.
 */
char erfasse_zeichen(string eingabeaufforderung, char zu_erfassendes_zeichen[], streamsize anzahl)
{
  bool ist_gueltig = false;
  char das_zeichen;
  do
  {
    das_zeichen = erfasse_zeichen(eingabeaufforderung);
    for (int zeichen_zaehler = 0; zeichen_zaehler < anzahl; ++zeichen_zaehler)
    {
      if (das_zeichen == zu_erfassendes_zeichen[zeichen_zaehler])
      {
        ist_gueltig = true;
      }
    }
    if (!ist_gueltig)
    {
      cout << "Bitte geben Sie eins der folgenden Zeichen ein: ";
      for (int zaehler = 0; zaehler < anzahl; ++zaehler)
      {
        cout << zu_erfassendes_zeichen[zaehler];
        if ((zaehler + 1) == anzahl)
        {
          cout << endl;
        }
        else
        {
          cout << ", ";
        }
      }
    }
  } while (!ist_gueltig);
  return das_zeichen;
}

/**
 * Erfaesst ein Zeichen, welches vom Benutzer eingegeben werden muss.
 *
 * @return Das vom Benutzer eingegebene Zeichen.
 */
char erfasse_zeichen()
{
  return erfasse_zeichen("");
}

/**
 * Erfasst eine Zeichenkette, welche der Benutzer eingeben muss.
 *
 * @param eingabe  Ein Array, welches die Zeichenkette aufnimmt.
 * @param anzahl   Die Anzahl der Zeichen, die gelesen werden sollen.
 */
void erfasse_zeichenkette(char eingabe[], streamsize anzahl)
{
  streamsize alter_wert = cin.width();
  cin.width(anzahl);
  cin >> eingabe;
  cin.ignore(static_cast<streamsize>(LONG_MAX), '\n');
  cin.width(alter_wert);
}

/**
 * Erfasst eine Zeichenkette, welche der Benutzer eingeben muss.
 * Liest auch Leerzeichen mit ein.
 *
 * @param eingabe  Ein Array, welches die Zeichenkette aufnimmt.
 * @param anzahl   Die Anzahl der Zeichen, die gelesen werden sollen.
 */
void erfasse_zeichenkette_mit_leerzeichen(char eingabe[], streamsize anzahl)
{
  streamsize alter_wert = cin.width();
  cin.width(anzahl);
  cin.get(eingabe, anzahl);
  cin.ignore(static_cast<streamsize>(LONG_MAX), '\n');
  cin.width(alter_wert);
}

/**
 * Erfasste eine Zeichenkette, welche der Benutzer eingeben muss.
 * Gibt einen Text zur Eingabeaufforderung aus.
 * 
 * @param eingabeaufforderung  Der Text, welcher als Eingabeaufforderung ausgegeben wird.
 * @param anzahl_zeichen       Die maximale Anzahl an Zeichen, welche die Eingabe haben darf.
 * 
 * @return                     Die eingegebene Zeichenkette.
 */
string erfasse_string(string eingabeaufforderung, int anzahl_zeichen)
{
  cout << eingabeaufforderung << ":\t";
  char eingabe[256];
  cin.getline(eingabe, anzahl_zeichen);
  cin.clear();
  return eingabe;
}

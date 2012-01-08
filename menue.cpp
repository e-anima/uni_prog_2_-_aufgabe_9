#include "header/menue.h"

/** Schreibt ein Menue auf den Bildschirm, welches eine nummerische Auswahl und einen Text enthaelt.
*
*   @param menue         Ein string Array, welches die einzelen Texte fuer das Menue beinhaltet.
*   @param menue_laenge  Die Anzahl der Menueeintraege.
**/
int schreibe_menue(string menue[], int menue_laenge)
{
  cout << endl << endl << "Bitte waehlen:" << endl;
  for (int i = 0; i < menue_laenge; i++)
  {
    cout << endl << "(" << (i + 1) << ")\t" << menue[i];
  }
  cout << endl << endl;
  return erfasse_int("Ihre Wahl:\t", 1, menue_laenge);
}

/** Schreibt ein Menue auf den Bildschirm, welches eine nummerische Auswahl und einen Text enthaelt.
*
*   @param menue         Ein string Array, welches die einzelen Texte fuer das Menue beinhaltet.
**/
int schreibe_menue(vector<string> menue)
{
  cout << endl << endl << "Bitte waehlen:" << endl;
  for (unsigned int i = 0; i < menue.size(); i++)
  {
    cout << endl << "(" << (i + 1) << ")\t" << menue.at(i);
  }
  cout << endl << endl;
  return erfasse_int("Ihre Wahl:\t", 1, menue.size());
}

/** Schreibt ein Menue auf den Bildschirm, welches eine nummerische Auswahl und einen Text enthaelt.
*
*   @param menue                Ein string Array, welches die einzelen Texte fuer das Menue beinhaltet.
*   @param eingabeaufforderung  Der Text, welcher vor der Auswahl ausgegeben werden soll.
**/
int schreibe_menue(vector<string> menue, string eingabeaufforderung)
{
  cout << endl << endl << eingabeaufforderung << ":" << endl;
  for (unsigned int i = 0; i < menue.size(); i++)
  {
    cout << endl << "(" << (i + 1) << ")\t" << menue.at(i);
  }
  cout << endl << endl;
  return erfasse_int("Ihre Wahl:\t", 1, menue.size());
}

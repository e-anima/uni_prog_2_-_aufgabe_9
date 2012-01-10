/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/Wochentag.h"

Wochentag::Wochentag()
{
  wochentag = "Montag";
}

Wochentag::Wochentag(string der_wochentag)
{
  setze_wochentag(der_wochentag);
}

Wochentag::~Wochentag()
{

}

void Wochentag::setze_wochentag(string der_wochentag)
{
  wochentag = (liefere_index_vom_wochentag(der_wochentag) > -1) ? der_wochentag : "Montag";
}

string Wochentag::liefere_wochentag()
{
  return wochentag;
}

string Wochentag::liefere_wochentag_kuerzel()
{
  string kuerzel[] = {"Sa", "So", "Mo", "Di", "Mi", "Do", "Fr"};
  return kuerzel[liefere_index_vom_wochentag(wochentag)];
}

string Wochentag::liefere_wochentag_mit_index(int der_index)
{

}

int Wochentag::liefere_index_vom_wochentag(string der_wochentag)
{
  bool ausgabe_index = -1;
  string name[] = {"Samstag",
                   "Sonntag",
                   "Monatg",
                   "Dienstag",
                   "Mittwoch",
                   "Donnerstag",
                   "Freitag"};
  for (int index = 0; index < 7; ++index)
  {
    if (der_wochentag == name[index])
    {
      ausgabe_index = index;
    }
  }
  return ausgabe_index;
}

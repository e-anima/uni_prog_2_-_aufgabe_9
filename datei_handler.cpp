/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/datei_handler.h"

Datei_Handler::Datei_Handler()
{
  dateiname = "beispiel.txt";
  datei_einlesen();
}

Datei_Handler::Datei_Handler(const string& der_dateiname)
              :dateiname(der_dateiname)
{
  datei_einlesen();
}

Datei_Handler::~Datei_Handler()
{

}

void Datei_Handler::setze_dateiname(const string& der_dateiname)
{
  dateiname = der_dateiname;
}

string Datei_Handler::liefere_dateinamen() const
{
  return dateiname;
}

string Datei_Handler::liefere_zeile(unsigned int der_index) const
{
  string die_zeile = "";
  if (!zeilen.empty())
  {
    if (der_index > zeilen.size())
    {
      der_index = zeilen.size() - 1;
    }
    die_zeile = zeilen.at(der_index);
  }
  return die_zeile;
}

unsigned int Datei_Handler::liefere_anzahl_zeilen() const
{
  return zeilen.size();
}

void Datei_Handler::datei_einlesen()
{
  ifstream input(dateiname.c_str());
  string zeile_ablage;
  if (input.good())
  {
    zeilen.clear();
    while (getline(input, zeile_ablage))
    {
      zeilen.push_back(zeile_ablage);
    }
  }
  input.close();
}

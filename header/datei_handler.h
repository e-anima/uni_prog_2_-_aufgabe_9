/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef DATEI_HANDLER_H
#define DATEI_HANDLER_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Datei_Handler
{
  private:
    string dateiname;
    vector<string> zeilen;

  public:
    Datei_Handler();
    Datei_Handler(const string& der_dateiname);

    virtual ~Datei_Handler();

    void setze_dateiname(const string& der_dateiname);

    string liefere_dateinamen() const;
    string liefere_zeile(unsigned int der_index) const;
    unsigned int liefere_anzahl_zeilen() const;

  private:
    void datei_einlesen();
};

#endif

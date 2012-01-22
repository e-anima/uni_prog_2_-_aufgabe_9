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
#include "zufallsgenerierung.h"

#define DATEI_BUNDESLAND "files/bundesland.txt"
#define DATEI_EMAILS "files/emails.txt"
#define DATEI_FACHBREICH "files/fachbereiche.txt"
#define DATEI_LAND "files/land.txt"
#define DATEI_NACHNAMEN "files/nachnamen.txt"
#define DATEI_NATIONALITAET "files/nationalitaet.txt"
#define DATEI_ORT "files/ort.txt"
#define DATEI_STUDIENGANG "files/studiengang.txt"
#define DATEI_VORNAMEN "files/vornamen.txt"

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
    string liefere_zufaellige_zeile() const;
    unsigned int liefere_anzahl_zeilen() const;

  private:
    void datei_einlesen();
};

#endif

#ifndef DATUM_H
#define DATUM_H

#include <climits>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include "eingabe.h"
#include "zufallsgenerierung.h"

using std::string;

class Datum
{
  private:
    /** Der Tag des Datums. **/
    int tag;
    /** Der Monat des Datums. **/
    int monat;
    /** Das Jahr des Monats. **/
    int jahr;

  public:
    Datum();
    Datum(int der_tag, int der_monat, int das_jahr);

    int liefere_tag() const;
    int liefere_monat() const;
    int liefere_jahr() const;
    string liefere_din_datum() const;
    string liefere_standarddatum() const;
    string liefere_textdatum() const;
    string liefere_wochentag() const;
    string liefere_wochentagdatum() const;
    
    bool operator<(const Datum& rechts);
    bool operator>(const Datum& rechts);
    bool operator==(const Datum& rechts);
    bool operator!=(const Datum& rechts);
    bool operator<=(const Datum& rechts);
    bool operator>=(const Datum& rechts);
    Datum operator+(int tage) const;
    Datum operator-(int tage) const;
    Datum operator++(int);
    Datum& operator++();
    int operator-(const Datum& ein_datum) const;
    
  private:
    bool datum_ok(int der_tag, int der_monat, int das_jahr);
    bool ist_schaltjahr(int das_jahr) const;
    Datum liefere_datum(long tage) const;
    int liefere_tage_im_jahr(int jahr) const;
    int liefere_tage_im_monat(int der_monat, int das_jahr) const;
    long liefere_tage() const;
    void initialisiere_datum(int der_tag = 1, int der_monat = 1, int das_jahr = 1583);
};

std::ostream& operator<<(std::ostream& ausgabe, const Datum& datum);
std::istream& operator>>(std::istream& eingabe, Datum& datum);

Datum erzeuge_zufaelliges_datum(int jahr_min = 1583, int jahr_max = 2011);

#endif

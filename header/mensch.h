/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef MENSCH_H
#define MENSCH_H

#include <iomanip>
#include <iostream>
#include <string>
#include "beschreibbar.h"
#include "eingabe.h"
#include "zufallsgenerierung.h"

using std::string;

class Mensch : public Beschreibbar
{
  private:
    /** Das Geschlecht des Menschen. m fuer maennliche oder w fuer weiblich. **/
    char geschlecht;

  public:
    Mensch();
    Mensch(char das_geschlecht);

    virtual ~Mensch();

    char liefere_geschlecht() const;
    string liefere_geschlecht_ausgeschrieben() const;
    virtual string liefere_beschreibung() const;
};

std::ostream& operator<<(std::ostream& ausgabe, const Mensch& mensch);
std::istream& operator>>(std::istream& eingabe, Mensch& mensch);

Mensch erzeuge_zufaelligen_mensch();

#endif

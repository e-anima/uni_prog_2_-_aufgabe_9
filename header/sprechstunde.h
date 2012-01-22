/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef SPRECHSTUNDE_H
#define SPRECHSTUNDE_H

#include <string>
#include "beschreibbar.h"
#include "zeit.h"

using namespace std;

class Sprechstunde : public Beschreibbar
{
  private:
    /** Der Wochentag der Sprechstunde. **/
    string wochentag;
    /** Die Uhrzeit, ab wann die Sprechstunde beginnt. **/
    Zeit uhrzeit_von;
    /** Die Uhrzeit, bis wann die Sprechstunde geht. **/
    Zeit uhrzeit_bis;

  public:
    Sprechstunde();
    Sprechstunde(string der_wochentag, Zeit die_uhrzeit_von, Zeit die_uhrzeit_bis);
    Sprechstunde(string der_wochentag, Zeit die_uhrzeit_von);
    Sprechstunde(string der_wochentag);

    virtual ~Sprechstunde();

    void setze_wochentag(string der_wochentag);
    void setze_uhrzeit_von(Zeit die_uhrzeit_von);
    void setze_uhrzeit_bis(Zeit die_uhrzeit_bis);

    string liefere_wochentag() const;
    Zeit liefere_uhrzeit_von() const;
    Zeit liefere_uhrzeit_bis() const;

    virtual string liefere_beschreibung() const;
};

std::ostream& operator<<(std::ostream& ausgabe, const Sprechstunde& sprechstunde);
std::istream& operator>>(std::istream& eingabe, Sprechstunde& sprechstunde);

#endif

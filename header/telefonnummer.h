/**
 *  @author Markus Paeschke (s0531524)
 */

#ifndef TELEFONNUMMER_H
#define TELEFONNUMMER_H

#include <iomanip>
#include <iostream>
#include <string>
#include "eingabe.h"

using std::string;

class Telefonnummer
{
  private:
    /** Die Landesvorwahl der Telefonnummer. **/
    string landesvorwahl;
    /** Die Ortsvorwahl der Telefonnummer. **/
    string ortsvorwahl;
    /** Die Teilnehmerkennung der Telefonnummer. **/
    string teilnehmerkennung;

  public:
    Telefonnummer();
    Telefonnummer(string die_teilnehmerkennung, string die_ortsvorwahl, string die_landesvorwahl);
    Telefonnummer(string die_teilnehmerkennung, string die_ortsvorwahl);
    Telefonnummer(string die_teilnehmerkennung);

    void setze_teilnehmerkennung(string die_teilnehmerkennung);
    void setze_ortsvorwahl(string die_ortsvowahl);
    void setze_landesvorwahl(string die_landesvorwahl);

    string liefere_teilnehmerkennung() const;
    string liefere_ortsvorwahl() const;
    string liefere_landesvorwahl() const;

    virtual string liefere_gesamte_nummer() const;

  private:
    void initialisiere_telefonnummer(string die_teilnehmerkennung = "123456", string die_ortsvorwahl = "30", string die_landesvorwahl = "+49");
};

std::ostream& operator<<(std::ostream& ausgabe, const Telefonnummer& telefonnummer);
std::istream& operator>>(std::istream& eingabe, Telefonnummer& telefonnummer);

#endif

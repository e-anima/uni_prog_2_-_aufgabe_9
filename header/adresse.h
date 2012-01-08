/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef ADRESSE_H
#define ADRESSE_H

#include <iostream>
#include "helfer.h"
#include "ort.h"

class Adresse : public Ort
{
  private:
    /** Die Postleitzahl der Adresse. */
    int postleitzahl;
    /** Die Strasse der Adresse. */
    string strasse;
    /** Die Hausnummer der Adresse. */
    int hausnummer;

  public:
    Adresse();
    Adresse(const Ort& der_ort, const int& die_postleitzahl, const string& die_strasse, const int& die_hausnummer);
    Adresse(const Ort& der_ort, const int& die_postleitzahl, const string& die_strasse);
    Adresse(const Ort& der_ort, const int& die_postleitzahl);
    Adresse(const Ort& der_ort);
    Adresse(const string& der_name, const string& das_land, const string& das_landesteil, const int& die_postleitzahl, const string& die_strasse, const int& die_hausnummer);
    Adresse(const string& der_name, const string& das_land, const string& das_landesteil, const int& die_postleitzahl, const string& die_strasse);
    Adresse(const string& der_name, const string& das_land, const string& das_landesteil, const int& die_postleitzahl);
    Adresse(const string& der_name, const string& das_land, const string& das_landesteil);
    Adresse(const string& der_name, const string& das_land);
    Adresse(const string& der_name);

    void setze_hausnummer(const int& die_hausnummer);
    void setze_postleitzahl(const int& die_postleitzahl);
    void setze_strasse(const string& die_strasse);

    int liefere_hausnummer() const;
    int liefere_postleitzahl() const;
    string liefere_strasse() const;

    virtual string liefere_ortsbeschreibung() const;

  private:
    void initialisiere_adresse(int die_postleitzahl = 12345, string die_strasse = "Musterstrasse", int die_hausnummer = 0);
};

std::ostream& operator<<(std::ostream& ausgabe, const Adresse& adresse);
std::istream& operator>>(std::istream& eingabe, Adresse& adresse);

#endif

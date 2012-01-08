/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "adresse.h"
#include "datum.h"
#include "eingabe.h"
#include "mensch.h"
#include "name.h"
#include "ort.h"

class Person : public Mensch
{
  private:
    /** Die Wohnanschrift der Person. **/
    Adresse wohnanschrift;
    /** Das Geburtsdatum der Person. **/
    Datum geburtsdatum;
    /** Der Name der Person. **/
    Name name;
    /** Der Geburtsort der Person. **/
    Ort geburtsort;
    /** Die Nationalitaet der Person. **/
    string nationalitaet;
    /** Die Telefonnummer der Person. **/
    Telefonnummer telefonnummer;

  public:
    Person();
    Person(char geschlecht, Name der_name, Datum das_geburtsdatum, Ort der_geburtsort, Adresse die_wohnanschrift, string die_nationalitaet, Telefonnummer die_telefonnummer);
    Person(char geschlecht, Name der_name, Datum das_geburtsdatum, Ort der_geburtsort, Adresse die_wohnanschrift, string die_nationalitaet);
    Person(char geschlecht, Name der_name, Datum das_geburtsdatum, Ort der_geburtsort, Adresse die_wohnanschrift);
    Person(char geschlecht, Name der_name, Datum das_geburtsdatum, Ort der_geburtsort);
    Person(char geschlecht, Name der_name, Datum das_geburtsdatum);
    Person(char geschlecht, Name der_name);

    void setze_wohnanschrift(const Adresse die_wohnanschrift);
    void setze_name(const Name der_name);
    void setze_nationalitaet(const string die_nationalitaet);
    void setze_telefonnummer(const Telefonnummer die_telefonnummer);

    virtual Adresse liefere_wohnanschrift() const;
    virtual char liefere_geschlecht() const;
    virtual Datum liefere_geburtsdatum() const;
    virtual Name liefere_name() const;
    virtual Ort liefere_geburtsort() const;
    virtual string liefere_geschlecht_ausgeschrieben() const;
    virtual string liefere_nationalitaet() const;
    virtual Telefonnummer liefere_telefonnummer() const;

    virtual string liefere_beschreibung() const;
};

std::ostream& operator<<(std::ostream& ausgabe, const Person& person);
//std::istream& operator>>(std::istream& eingabe, Person& person);

#endif

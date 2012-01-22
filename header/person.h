/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "adresse.h"
#include "beschreibbar.h"
#include "datum.h"
#include "eingabe.h"
#include "mensch.h"
#include "name.h"
#include "ort.h"
#include "telefonnummer.h"
#include "zufallsgenerierung.h"

class Person : public Mensch
{
  private:
    /** Der Name der Person. **/
    Name name;
    /** Das Geburtsdatum der Person. **/
    Datum geburtsdatum;
    /** Der Geburtsort der Person. **/
    Ort geburtsort;
    /** Die Wohnanschrift der Person. **/
    Adresse wohnanschrift;
    /** Die Telefonnummer der Person. **/
    Telefonnummer telefonnummer;
    /** Die Nationalitaet der Person. **/
    string nationalitaet;


  public:
    Person();
    Person(Mensch der_mensch, Name der_name, Datum das_geburtsdatum, Ort der_geburtsort, Adresse die_wohnanschrift, string die_nationalitaet, Telefonnummer die_telefonnummer);
    Person(char das_geschlecht, Name der_name, Datum das_geburtsdatum, Ort der_geburtsort, Adresse die_wohnanschrift, string die_nationalitaet, Telefonnummer die_telefonnummer);
    Person(char das_geschlecht, Name der_name, Datum das_geburtsdatum, Ort der_geburtsort, Adresse die_wohnanschrift, string die_nationalitaet);
    Person(char das_geschlecht, Name der_name, Datum das_geburtsdatum, Ort der_geburtsort, Adresse die_wohnanschrift);
    Person(char das_geschlecht, Name der_name, Datum das_geburtsdatum, Ort der_geburtsort);
    Person(char das_geschlecht, Name der_name, Datum das_geburtsdatum);
    Person(char das_geschlecht, Name der_name);

    virtual ~Person();

    void setze_wohnanschrift(const Adresse die_wohnanschrift);
    void setze_name(const Name der_name);
    void setze_nationalitaet(const string die_nationalitaet);
    void setze_telefonnummer(const Telefonnummer die_telefonnummer);

    Adresse liefere_wohnanschrift() const;
    char liefere_geschlecht() const;
    Datum liefere_geburtsdatum() const;
    Name liefere_name() const;
    Ort liefere_geburtsort() const;
    string liefere_geschlecht_ausgeschrieben() const;
    string liefere_nationalitaet() const;
    Telefonnummer liefere_telefonnummer() const;

    virtual string liefere_beschreibung() const;
};

std::ostream& operator<<(std::ostream& ausgabe, const Person& person);
std::istream& operator>>(std::istream& eingabe, Person& person);

Person erzeuge_zufaellige_person();

#endif

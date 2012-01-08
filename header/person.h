/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "adresse.h"
#include "datum.h"
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
    Person(Name der_name, Datum das_geburtsdatum, Ort der_geburtsort, Adresse die_wohnanschrift, string die_nationalitaet, Telefonnummer die_telefonnummer);
    Person(Name der_name, Datum das_geburtsdatum, Ort der_geburtsort, Adresse die_wohnanschrift, string die_nationalitaet);
    Person(Name der_name, Datum das_geburtsdatum, Ort der_geburtsort, Adresse die_wohnanschrift);
    Person(Name der_name, Datum das_geburtsdatum, Ort der_geburtsort);
    Person(Name der_name, Datum das_geburtsdatum);
    Person(Name der_name);

    Adresse liefere_wohnanschrift() const;
    Datum liefere_geburtsdatum() const;
    Ort liefere_geburtsort() const;
};

#endif

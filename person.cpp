/**
 *  Repraesentiert eine Person.
 *  Eine Person hat mehr Eigenschaften als ein Mensch.
 *  Beispielsweise einen Namen, eine Anschrift oder auch eine Telefonnummer.
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/person.h"

/**
 * Der Default Constructor der Klasse.
 *
 */
Person::Person()
       :Name()
{

}

Person::Person(Name der_name, Datum das_geburtsdatum, Ort der_geburtsort, Adresse die_wohnanschrift, string die_nationalitaet)
       :name(der_name), geburtsdatum(das_geburtsdatum), geburtsort(der_geburtsort), wohnanschrift(die_wohnanschrift), nationalitaet(die_nationalitaet)
{

}

Person::Person(Name der_name, Datum das_geburtsdatum, Ort der_geburtsort, Adresse die_wohnanschrift)
       :name(der_name), geburtsdatum(das_geburtsdatum), geburtsort(der_geburtsort), wohnanschrift(die_wohnanschrift)
{

}

Person::Person(Name der_name, Datum das_geburtsdatum, Ort der_geburtsort)
       :name(der_name), geburtsdatum(das_geburtsdatum), geburtsort(der_geburtsort)
{

}

Person::Person(Name der_name, Datum das_geburtsdatum)
       :name(der_name), geburtsdatum(das_geburtsdatum)
{

}

Person::Person(Name der_name)
       :name(der_name)
{

}

Person::~Person()
{
  // TODO Auto-generated destructor stub
}


Datum Person::liefere_geburtsdatum() const
{
  return geburtsdatum;
}

Ort Person::liefere_geburtsort() const
{
  return geburtsort;
}

string Person::liefere_nachname() const
{
  return name.liefere_nachnamen();
}

string Person::liefere_vorname() const
{
  return name.liefere_vornamen();
}

string Person::liefere_vollstaendigen_namen() const
{
  return name.liefere_namen();
}

void Person::ersetze_nachnamen(string der_nachname)
{
  name.ersetze_nachnamen(der_nachname);
}

void Person::ersetze_nachnamen(const string *die_nachnamen, int die_anzahl_nachnamen)
{
  name.ersetze_nachnamen(die_nachnamen, die_anzahl_nachnamen);
}

void Person::ersetze_vornamen(string der_vorname)
{
  name.ersetze_vornamen(der_vorname);
}

void Person::ersetze_vornamen(const string *die_vornamen, int die_anzahl_vornamen)
{
  name.ersetze_vornamen(die_vornamen, die_anzahl_vornamen);
}

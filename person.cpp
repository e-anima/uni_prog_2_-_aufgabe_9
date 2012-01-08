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
 * Erzeugt eine maennliche Person mit den Namen Max Mustermann,
 * dem Geburtdatum von Heute,
 * dem Geburtsort Berlin in Deutschland,
 * der Wohnanschrift Berlin in Deutschland
 * und der nationalitaet deutsch.
 */
Person::Person()
{
  geschlecht    = 'm';
  nationalitaet = "deutsch";
}

/**
 * Initialisiert eine Person.
 * Alle Angaben ueber die Person muessen gesetzt werden.
 *
 * @param  das_geschlecht     Das Geschlecht der Person.
 * @param  der_name           Der Name der Person.
 * @param  das_geburtsdatum   Das Geburtsdatum der Person.
 * @param  der_geburtsort     Der Geburtsort der Person.
 * @param  die_wohnanschrift  Die Wohnanschrift der Person.
 * @param  die_nationalitaet  Die Nationalitaet der Person.
 */
Person::Person(char das_geschlecht, Name der_name, Datum das_geburtsdatum, Ort der_geburtsort, Adresse die_wohnanschrift, string die_nationalitaet)
       :name(der_name), geburtsdatum(das_geburtsdatum), geburtsort(der_geburtsort), wohnanschrift(die_wohnanschrift)
{
  geschlecht    = das_geschlecht;
  nationalitaet = die_nationalitaet;
}

/**
 * Initialisiert eine Person.
 * Alle Angaben ueber die Person muessen gesetzt werden,
 * bis auf die Nationalitaet.
 * Diese wird auf deutsch gesetzt.
 *
 * @param  das_geschlecht     Das Geschlecht der Person.
 * @param  der_name           Der Name der Person.
 * @param  das_geburtsdatum   Das Geburtsdatum der Person.
 * @param  der_geburtsort     Der Geburtsort der Person.
 * @param  die_wohnanschrift  Die Wohnanschrift der Person.
 */
Person::Person(char das_geschlecht, Name der_name, Datum das_geburtsdatum, Ort der_geburtsort, Adresse die_wohnanschrift)
       :name(der_name), geburtsdatum(das_geburtsdatum), geburtsort(der_geburtsort), wohnanschrift(die_wohnanschrift)
{
  geschlecht    = das_geschlecht;
  nationalitaet = "deutsch";
}

/**
 * Initialisiert eine Person.
 * Alle Angaben ueber die Person muessen gesetzt werden,
 * bis auf die Nationalitaet und der Wohnanschrift.
 * Erstere wird auf deutsch gesetzt, zweitere auf Berlin in Deutschland.
 *
 * @param  das_geschlecht     Das Geschlecht der Person.
 * @param  der_name           Der Name der Person.
 * @param  das_geburtsdatum   Das Geburtsdatum der Person.
 * @param  der_geburtsort     Der Geburtsort der Person.
 */
Person::Person(char das_geschlecht, Name der_name, Datum das_geburtsdatum, Ort der_geburtsort)
       :name(der_name), geburtsdatum(das_geburtsdatum), geburtsort(der_geburtsort)
{
  geschlecht    = das_geschlecht;
  nationalitaet = "deutsch";
}

/**
 * Initialisiert eine Person.
 * Alle Angaben ueber die Person muessen gesetzt werden,
 * bis auf die Nationalitaet, der Wohnanschrift und dem Geburtsort.
 * Erstere wird auf deutsch gesetzt, zweitere auf Berlin in Deutschland und dritterer ebenfalls auf Berlin in Deutschland.
 *
 * @param  das_geschlecht     Das Geschlecht der Person.
 * @param  der_name           Der Name der Person.
 * @param  das_geburtsdatum   Das Geburtsdatum der Person.
 */
Person::Person(char das_geschlecht, Name der_name, Datum das_geburtsdatum)
       :name(der_name), geburtsdatum(das_geburtsdatum)
{
  geschlecht    = das_geschlecht;
  nationalitaet = "deutsch";
}

/**
 * Initialisiert eine Person.
 * Das Geschlecht und der Name der Person muss gesetzt werden.
 * Alle anderen Angaben ueber die Person werden automatisch gesetzt.
 *
 * @param  das_geschlecht  Das Geschlecht der Person.
 * @param  der_name        Der Name der Person.
 */
Person::Person(char das_geschlecht, Name der_name)
       :name(der_name)
{
  geschlecht    = das_geschlecht;
  nationalitaet = "deutsch";
}

/**
 * Setzt eine neue Wohnanschrift fuer die Person.
 *
 * @param  die_wohnanschrift  Die neue Wohnanschrift fuer die Person.
 */
void Person::setze_wohnanschrift(const Adresse die_wohnanschrift)
{
  wohnanschrift = die_wohnanschrift;
}

/**
 * Setzt einen neuen Namen fuer die Person.
 *
 * @param  der_name  Der neue Name fuer die Person.
 */
void Person::setze_name(const Name der_name)
{
  name = der_name;
}

/**
 * Setzt eine neue Nationalitaet fuer die Person.
 *
 * @param  die_nationalitaet  Die neue Nationalitaet fuer die Person.
 */
void Person::setze_nationalitaet(const string die_nationalitaet)
{
  nationalitaet = die_nationalitaet;
}

/**
 * Setzt eine neue Telefonnummer fuer die Person.
 *
 * @param  die_telefonnummer  Die neue Telefonnummer fuer die Person.
 */
void Person::setze_telefonnummer(const Telefonnummer die_telefonnummer)
{
  telefonnummer = die_telefonnummer;
}

/**
 * Gibt die Wohnanschrift der Person zurueck.
 *
 * @return  Die Wohnanschrift der Person.
 */
Adresse Person::liefere_wohnanschrift() const
{
  return wohnanschrift;
}

/**
 * Gibt das Geschlecht der Person zurueck.
 *
 * @return  Das Geschlecht der Person.
 */
char Person::liefere_geschlecht() const
{
  return Mensch::liefere_geschlecht();
}

/**
 * Gibt das Geburtsdatum der Person zurueck.
 *
 * @return  Das Geburtsdatum der Person.
 */
Datum Person::liefere_geburtsdatum() const
{
  return geburtsdatum;
}

/**
 * Gibt der Name der Person zurueck.
 *
 * @return  Der Name der Person.
 */
Name Person::liefere_name() const
{
  return name;
}

/**
 * Gibt den Geburtsort der Person zurueck.
 *
 * @return  Der Geburtsort der Person.
 */
Ort Person::liefere_geburtsort() const
{
  return geburtsort;
}

/**
 * Gibt das Geschlecht der Person in ausgeschriebener Form zurueck.
 *
 * @return  Das Geschlecht der Person in ausgeschriebener Form.
 */
string Person::liefere_geschlecht_ausgeschrieben() const
{
  return Mensch::liefere_geschlecht_ausgeschrieben();
}

/**
 * Gibt die Nationalitaet der Person zurueck.
 *
 * @return  Die Nationalitaet der Person.
 */
string Person::liefere_nationalitaet() const
{
  return nationalitaet;
}

/**
 * Gibt die Telefonnummer der Person zurueck.
 *
 * @return  Die Telefonnummer der Person.
 */
Telefonnummer Person::liefere_telefonnummer() const
{
  return telefonnummer;
}

/**
 * Gibt alle Daten der Person als String zurueck.
 *
 * @return  Alle Daten der Person als String.
 */
string Person::liefere_beschreibung() const
{
  string die_beschreibung = name.liefere_namen();
  die_beschreibung       += "(" + liefere_geschlecht_ausgeschrieben() + ", " + nationalitaet + ")\n";
  die_beschreibung       += "geboren am " + geburtsdatum.liefere_standarddatum() + "\n";
  die_beschreibung       += "in " + geburtsort.liefere_ortsbeschreibung() + "\n";
  die_beschreibung       += "ansaessig in " + wohnanschrift.liefere_ortsbeschreibung() + "\n";
  die_beschreibung       += "aktuelle Telefonnummer: " + telefonnummer.liefere_gesamte_nummer();
  return die_beschreibung;
}

/**
 * Ueberlaedt den << Operator.
 * Gibt eine Person, mit allen Daten, in den Outputstream.
 *
 * @param  ausgabe  Der Outputstream.
 * @param  name     Die Person, welcher in den Outputstream gegeben werden soll.
 *
 * @return          Der Outputstream.
 */
std::ostream& operator<<(std::ostream& ausgabe, const Person& person)
{
  ausgabe << person.liefere_beschreibung();
  return ausgabe;
}

/**
 * Ueberlaedt den >> Operator.
 * Somit koennen Personendaten aus dem Inputstream geholt und eingegeben werden.
 *
 * @param  ausgabe  Der Inputstream.
 * @param  name     Die Person, welcher eingegeben werden soll.
 *
 * @return          Der Inputstream.
 */
/*std::istream& operator>>(std::istream& eingabe, Person& person)
{
  string vorname  = erfasse_string("Bitte den Vornamen eingeben", 100);
  string nachname = erfasse_string("Bitte den Nachnamen eingeben", 100);
  name            = Name(vorname, nachname);
  return eingabe;
}*/

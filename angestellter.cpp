/**
 *  Repraesentiert einen Angestellten an einer Uni.
 *  Dieser kann verschiedene Informationen wie Email Adressen, Fax und Telefonnumer oder auch Informationen ueber das Dienstzimmer enthalten.
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/angestellter.h"

/**
 * Der Default Konstruktor.
 * Setzt die Funktion des Angestellten auf Schreibkraft.
 */
Angestellter::Angestellter()
{
  funktion = "Schreibkraft";
}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 *
 * @param  die_person                        Die Personendaten, welche gesetzt werden sollen.
 * @param  die_funktion                      Die Funktion des Angestellten, welche gesetzt werden sollen.
 * @param  die_email_adressen                Die Email Adressen des Angestellten.
 * @param  die_dienstliche_telefonnummer     Die Telefonnummer des Angestellten.
 * @param  die_dienstliche_faxnummer         Die Faxnummer des Angestellten.
 * @param  das_gebaeude_des_dienstzimmers    Das Gebaeude des Dienstzimmers.
 * @param  die_raumnummer_des_dienstzimmers  Die Raumnummer des Dienstzimmers.
 */
Angestellter::Angestellter(Person die_person, string die_funktion, Email_Adresse die_email_adressen, Telefonnummer die_dienstliche_telefonnummer, Telefonnummer die_dienstliche_faxnummer, string das_gebaeude_des_dienstzimmers, int die_raumnummer_des_dienstzimmers)
             :Person(die_person), funktion(die_funktion), email_adressen(die_email_adressen), dienstliche_telefonnummer(die_dienstliche_telefonnummer), dienstliche_faxnummer(die_dienstliche_faxnummer), gebaeude_dienstzimmer(das_gebaeude_des_dienstzimmers), raumnummer_dienstzimmer(die_raumnummer_des_dienstzimmers)
{

}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 *
 * @param  die_person                     Die Personendaten, welche gesetzt werden sollen.
 * @param  die_funktion                   Die Funktion des Angestellten, welche gesetzt werden sollen.
 * @param  die_email_adressen             Die Email Adressen des Angestellten.
 * @param  die_dienstliche_telefonnummer  Die Telefonnummer des Angestellten.
 * @param  die_dienstliche_faxnummer      Die Faxnummer des Angestellten.
 */
Angestellter::Angestellter(Person die_person, string die_funktion, Email_Adresse die_email_adressen, Telefonnummer die_dienstliche_telefonnummer, Telefonnummer die_dienstliche_faxnummer)
             :Person(die_person), funktion(die_funktion), email_adressen(die_email_adressen), dienstliche_telefonnummer(die_dienstliche_telefonnummer), dienstliche_faxnummer(die_dienstliche_faxnummer)
{

}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 *
 * @param  die_person                     Die Personendaten, welche gesetzt werden sollen.
 * @param  die_funktion                   Die Funktion des Angestellten, welche gesetzt werden sollen.
 * @param  die_email_adressen             Die Email Adressen des Angestellten.
 * @param  die_dienstliche_telefonnummer  Die Telefonnummer des Angestellten.
 */
Angestellter::Angestellter(Person die_person, string die_funktion, Email_Adresse die_email_adressen, Telefonnummer die_dienstliche_telefonnummer)
             :Person(die_person), funktion(die_funktion), email_adressen(die_email_adressen), dienstliche_telefonnummer(die_dienstliche_telefonnummer)
{

}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 *
 * @param  die_person          Die Personendaten, welche gesetzt werden sollen.
 * @param  die_funktion        Die Funktion des Angestellten, welche gesetzt werden sollen.
 * @param  die_email_adressen  Die Email Adressen des Angestellten.
 */
Angestellter::Angestellter(Person die_person, string die_funktion, Email_Adresse die_email_adressen)
             :Person(die_person), funktion(die_funktion), email_adressen(die_email_adressen)
{

}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 *
 * @param  die_person    Die Personendaten, welche gesetzt werden sollen.
 * @param  die_funktion  Die Funktion des Angestellten, welche gesetzt werden sollen.
 */
Angestellter::Angestellter(Person die_person, string die_funktion)
             :Person(die_person), funktion(die_funktion)
{

}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 *
 * @param  die_person  Die Personendaten, welche gesetzt werden sollen.
  */
Angestellter::Angestellter(Person die_person)
             :Person(die_person)
{
  funktion = "Schreibkraft";
}

/**
 * Der Destruktor der Klasse.
 * Zerstoert das Objekt.
 */
Angestellter::~Angestellter()
{

}

/**
 * Setzt das Gebaeude des Dienstzimmers des Angestellten.
 *
 * @param  das_gebaeude_des_dienstzimmers  Die Gebaeude des Dienstzimmers des Angestellten.
 */
void Angestellter::setze_gebaeude_dienstzimmer(string das_gebaeude_des_dienstzimmers)
{
  gebaeude_dienstzimmer = das_gebaeude_des_dienstzimmers;
}

/**
 * Setzt die Raumnummer des Dienstzimmers des Angestellten.
 *
 * @param  die_raumnummer_des_dienstzimmers  Die Raumnummer des Dienstzimmers des Angestellten.
 */
void Angestellter::setze_raumnummer_dienstzimmer(int die_raumnummer_des_dienstzimmers)
{
  raumnummer_dienstzimmer = die_raumnummer_des_dienstzimmers;
}

/**
 * Setzt die Telefonnummer des Angestellten.
 *
 * @param  die_dienstliche_telefonnummer  Die Telefonnummer des Angestellten.
 */
void Angestellter::setze_dienstliche_telefonnummer(Telefonnummer die_dienstliche_telefonnummer)
{
  dienstliche_telefonnummer = die_dienstliche_telefonnummer;
}

/**
 * Setzt die Faxnummer des Angestellten.
 *
 * @param  die_dienstliche_faxnummer  Die Faxnummer des Angestellten.
 */
void Angestellter::setze_dienstliche_faxnummer(Telefonnummer die_dienstliche_faxnummer)
{
  dienstliche_faxnummer = die_dienstliche_faxnummer;
}

/**
 * Fuegt eine Email Adresse zur Liste hinzu.
 *
 * @param  die_neue_email_adresse  Die Email Adresse, welche zur Liste hinzugefuegt werden soll.
 */
void Angestellter::fuege_email_adresse_hinzu(string die_neue_email_adresse)
{
  email_adressen.fuege_email_adresse_hinzu(die_neue_email_adresse);
}

/**
 * Fuegt mehrere Email Adresse zur Liste hinzu.
 *
 * @param  die_neuen_email_adressen     Die Email Adressen, welche zur Liste hinzugefuegt werden sollen.
 * @param  anzahl_neuer_email_adressen  Die Anzahl der Email Adressen, welche hinzugefuegt werden sollen.
 */
void Angestellter::fuege_email_adresse_hinzu(string* die_neuen_email_adressen, int anzahl_neuer_email_adressen)
{
  email_adressen.fuege_email_adresse_hinzu(die_neuen_email_adressen, anzahl_neuer_email_adressen);
}

/**
 * Entfernt eine Email Adresse aus der Liste anhand dem Index aus der Liste.
 *
 * @param  der_index  Der Index der Email Adresse in der Liste, welche entfernt werden soll.
 *
 * @return            Ein true, wenn die Adresse erfolgreich entfernt wurde, bzw. ein false, wenn sie nicht entfernt werden konnte.
 */
bool Angestellter::entferne_email_adresse(int der_index)
{
  return email_adressen.entferne_email_adresse(der_index);
}

/**
 * Entfernt eine Email Adresse aus der Liste.
 *
 * @param  die_email_adresse  Die Email Adresse, welche aus der Liste entfernt werden soll.
 *
 * @return                    Ein true, wenn die Adresse erfolgreich entfernt wurde, bzw. ein false, wenn sie nicht entfernt werden konnte.
 */
bool Angestellter::entferne_email_adresse(string die_email_adresse)
{
  return email_adressen.entferne_email_adresse(die_email_adresse);
}

/**
 * Gibt die Email Adressen zurueck.
 *
 * @return  Die Email Adresse des Angestellten.
 */
Email_Adresse Angestellter::liefere_email_adressen() const
{
  return email_adressen;
}

/**
 * Gibt eine Email Adresse, anhand des Index in der Liste, aus
 *
 * @param  der_index  Der Index der Email Adresse aus der Liste.
 *
 * @return            Die Email Adresse aus der Liste.
 */
string Angestellter::liefere_email_adresse_ueber_index(int index) const
{
  return email_adressen.liefere_email_adresse_ueber_index(index);
}

/**
 * Gibt die Telefonnummer zurueck.
 *
 * @return  Die Telefonnummer des Angestellten.
 */
Telefonnummer Angestellter::liefere_dienstliche_telefonnummer() const
{
  return dienstliche_telefonnummer;
}

/**
 * Gibt die Faxnummer zurueck.
 *
 * @return  Die Faxnummer des Angestellten.
 */
Telefonnummer Angestellter::liefere_dienstliche_faxnummer() const
{
  return dienstliche_faxnummer;
}

/**
 * Gibt das Gebaeude das Dienstzimmers zurueck.
 *
 * @return  Das Gebaeude des Dienstzimmers.
 */
string Angestellter::liefere_gebaeude_dienstzimmer() const
{
  return gebaeude_dienstzimmer;
}

/**
 * Gibt die Raumnummer des Dienstzimmers zurueck.
 *
 * @return  Die Raumnummer des Dienstzimmers.
 */
int Angestellter::liefere_raumnummer_dienstzimmer() const
{
  return raumnummer_dienstzimmer;
}

/**
 * Gibt die Beschreibung des Angestellten zurueck.
 *
 * @return  Die Beschreibung des Angestellten.
 */
string Angestellter::liefere_beschreibung() const
{
  string die_beschreibung = Person::liefere_beschreibung();
  return die_beschreibung;
}

/**
 * Ueberlaedt den << Operator.
 * Gibt einen Angestellten, mit allen Daten, in den Outputstream.
 *
 * @param  ausgabe       Der Outputstream.
 * @param  angestellter  Der Angestellt, welcher in den Outputstream gegeben werden soll.
 *
 * @return          Der Outputstream.
 */
std::ostream& operator<<(std::ostream& ausgabe, const Angestellter& angestellter)
{
  ausgabe << angestellter.liefere_beschreibung();
  return ausgabe;
}

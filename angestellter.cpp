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
             :Person()
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
  die_beschreibung       += "Die Funktion: " + funktion + "\n";
  die_beschreibung       += "Email: " + email_adressen.liefere_email_adressen() + "\n";
  die_beschreibung       += "Tele: " + dienstliche_telefonnummer.liefere_gesamte_nummer() + "\n";
  die_beschreibung       += "Fax: " + dienstliche_faxnummer.liefere_gesamte_nummer() + "\n";
  die_beschreibung       += "Das Dienstzimmer befindet sich im Gebauede " + gebaeude_dienstzimmer + " ";
  die_beschreibung       += " Zimmer " + zahl_zu_string(raumnummer_dienstzimmer) + "\n";
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

/**
 * Ueberlaedt den >> Operator.
 * Somit koennen Personendaten aus dem Inputstream geholt und eingegeben werden.
 *
 * @param  ausgabe       Der Inputstream.
 * @param  angestellter  Der Angestellte, welcher eingegeben werden soll.
 *
 * @return               Der Inputstream.
 */
std::istream& operator>>(std::istream& eingabe, Angestellter& angestellter)
{
  Person die_person;
  Email_Adresse die_email_adressen;
  Telefonnummer die_dienstliche_telefonnummer;
  Telefonnummer die_dienstliche_faxnummer;
  eingabe >> die_person;
  string die_funktion              = erfasse_string("Welche Funktion hat der Angestellte", 50);
  eingabe >> die_email_adressen >> die_dienstliche_faxnummer >> die_dienstliche_telefonnummer;
  string das_gebaeude_dienstzimmer = erfasse_string("In welchem Gebaeude hat der Angestellte sein Dienstzimmer", 10);
  int die_raumnummer_dienstzimmer  = erfasse_zahl<int>("Welche Raumnummer hat sein Dienstzimmer");
  angestellter = Angestellter(die_person, die_funktion, die_email_adressen, die_dienstliche_telefonnummer, die_dienstliche_faxnummer, das_gebaeude_dienstzimmer, die_raumnummer_dienstzimmer);
  return eingabe;
}

/**
 * Erzeugt einen zufaelligen Angestellten mit einer bestimmten Funktion und gibt diesen zurueck.
 *
 * @return  Der zufaellig erzeugte Angestellte.
 */
Angestellter erzeuge_zufaelligen_angestellten(string die_funktion)
{
  Zufallsgenerierung zufall = Zufallsgenerierung();
  string das_gebaeude[]     = {"A", "B", "C", "D"};
  int zufaellige_raumnummer = zufall.erzeuge_zufaelligen_int(1, 230);
  Angestellter der_zufaellige_angestellte = Angestellter(erzeuge_zufaellige_person(),
                                                         die_funktion,
                                                         erzeuge_zufaellige_email_adresse(),
                                                         erzeuge_zufaellige_telefonnummer(),
                                                         erzeuge_zufaellige_telefonnummer(),
                                                         das_gebaeude[zufall.erzeuge_zufaelligen_int(0, 3)],
                                                         zufaellige_raumnummer);
  return der_zufaellige_angestellte;
}

/**
 * Erzeugt einen zufaelligen Angestellten und gibt diesen zurueck.
 *
 * @return  Der zufaellig erzeugte Angestellte.
 */
Angestellter erzeuge_zufaelligen_angestellten()
{
  Zufallsgenerierung zufall = Zufallsgenerierung();
  string die_funktion[]     = {"Schreibkraft", "Verwaltungsangestellter", "Laboringenieur"};
  return erzeuge_zufaelligen_angestellten(die_funktion[zufall.erzeuge_zufaelligen_int(0, 2)]);
}

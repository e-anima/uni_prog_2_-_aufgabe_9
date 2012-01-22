/**
 *  Repraesentiert einen Studenten an einer Uni.
 *  Dieser kann verschiedene Informationen wie Email Adressen, Fachbereich und Matrikelnummer enthalten.
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/student.h"

/**
 * Der Default Konstruktor.
 * Fuehrt die Default Konstuktoren der geerbten Klassen aus.
 */
Student::Student()
{

}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 *
 * @param  die_person                     Die Personendaten, welche gesetzt werden sollen.
 * @param  die_heimatanschrift            Die Heimatanschrift des Studenten.
 * @param  das_datum_der_immatrikulation  Das Datum der Immatrikulation.
 * @param  die_matrikelnummer             Die Matrikelnummer des Studenten.
 * @param  der_fachbereich                Der Fachbereich des Studenten.
 * @param  der_studiengang                Der Studiengang  des Studenten.
 * @param  die_email_adressen             Die Email Adressen des Studenten.
  */
Student::Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation, int die_matrikelnummer, string der_fachbereich, string der_studiengang, Email_Adresse die_email_adressen)
        :Person(die_person), heimatanschrift(die_heimatanschrift), datum_der_immatrikulation(das_datum_der_immatrikulation), matrikelnummer(die_matrikelnummer), fachbereich(der_fachbereich), studiengang(der_studiengang), email_adressen(die_email_adressen)
{

}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 *
 * @param  die_person                     Die Personendaten, welche gesetzt werden sollen.
 * @param  die_heimatanschrift            Die Heimatanschrift des Studenten.
 * @param  das_datum_der_immatrikulation  Das Datum der Immatrikulation.
 * @param  die_matrikelnummer             Die Matrikelnummer des Studenten.
 * @param  der_fachbereich                Der Fachbereich des Studenten.
 * @param  der_studiengang                Der Studiengang  des Studenten.
  */
Student::Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation, int die_matrikelnummer, string der_fachbereich, string der_studiengang)
        :Person(die_person), heimatanschrift(die_heimatanschrift), datum_der_immatrikulation(das_datum_der_immatrikulation), matrikelnummer(die_matrikelnummer), fachbereich(der_fachbereich), studiengang(der_studiengang)
{

}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 *
 * @param  die_person                     Die Personendaten, welche gesetzt werden sollen.
 * @param  die_heimatanschrift            Die Heimatanschrift des Studenten.
 * @param  das_datum_der_immatrikulation  Das Datum der Immatrikulation.
 * @param  die_matrikelnummer             Die Matrikelnummer des Studenten.
 * @param  der_fachbereich                Der Fachbereich des Studenten.
  */
Student::Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation, int die_matrikelnummer, string der_fachbereich)
        :Person(die_person), heimatanschrift(die_heimatanschrift), datum_der_immatrikulation(das_datum_der_immatrikulation), matrikelnummer(die_matrikelnummer), fachbereich(der_fachbereich)
{

}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 *
 * @param  die_person                     Die Personendaten, welche gesetzt werden sollen.
 * @param  die_heimatanschrift            Die Heimatanschrift des Studenten.
 * @param  das_datum_der_immatrikulation  Das Datum der Immatrikulation.
 * @param  die_matrikelnummer             Die Matrikelnummer des Studenten.
  */
Student::Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation, int die_matrikelnummer)
        :Person(die_person), heimatanschrift(die_heimatanschrift), datum_der_immatrikulation(das_datum_der_immatrikulation), matrikelnummer(die_matrikelnummer)
{

}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 *
 * @param  die_person                     Die Personendaten, welche gesetzt werden sollen.
 * @param  die_heimatanschrift            Die Heimatanschrift des Studenten.
 * @param  das_datum_der_immatrikulation  Das Datum der Immatrikulation.
  */
Student::Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation)
        :Person(die_person), heimatanschrift(die_heimatanschrift), datum_der_immatrikulation(das_datum_der_immatrikulation)
{

}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 *
 * @param  die_person                     Die Personendaten, welche gesetzt werden sollen.
 * @param  die_heimatanschrift            Die Heimatanschrift des Studenten.
  */
Student::Student(Person die_person, Adresse die_heimatanschrift)
        :Person(die_person), heimatanschrift(die_heimatanschrift)
{

}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 *
 * @param  die_person  Die Personendaten, welche gesetzt werden sollen.
  */
Student::Student(Person die_person)
        :Person(die_person)
{

}

/**
 * Der Destruktor der Klasse.
 * Zerstoert das Objekt.
 */
Student::~Student()
{

}

/**
 * Setzt die Heimatanschrift des Studenten.
 *
 * @param  die_heimatanschrift  Die Heimatanschrift des Studenten.
 */
void Student::setze_heimatanschrift(Adresse die_heimatanschrift)
{
  heimatanschrift = die_heimatanschrift;
}

/**
 * Setzt das Datum der Immatrikulation des Studenten.
 *
 * @param  das_datum_der_immatrikulation  Das Datum der Immatrikulation des Studenten.
 */
void Student::setze_datum_der_immatrikulation(Datum das_datum_der_immatrikulation)
{
  datum_der_immatrikulation = das_datum_der_immatrikulation;
}

/**
 * Setzt die Matrikelnummer des Studenten.
 *
 * @param  Die Matrikelnummer des Studenten.
 */
void Student::setze_matrikelnummer(int die_matrikelnummer)
{
  matrikelnummer = die_matrikelnummer;
}

/**
 * Setzt den Fachbereich des Studenten.
 *
 * @param  der_fachbereich  Der Fachbereich des Studenten.
 */
void Student::setze_fachbereich(string der_fachbereich)
{
  fachbereich = der_fachbereich;
}

/**
 * Setzt den Studiengang des Studenten.
 *
 * @param  der_studiengang  Der Studiengang des Studenten.
 */
void Student::setze_studiengang(string der_studiengang)
{
  studiengang = der_studiengang;
}

/**
 * Fuegt eine Email Adresse zur Liste hinzu.
 *
 * @param  die_neue_email_adresse  Die Email Adresse, welche zur Liste hinzugefuegt werden soll.
 */
void Student::fuege_email_adresse_hinzu(string die_neue_email_adresse)
{
  email_adressen.fuege_email_adresse_hinzu(die_neue_email_adresse);
}

/**
 * Fuegt mehrere Email Adresse zur Liste hinzu.
 *
 * @param  die_neuen_email_adressen     Die Email Adressen, welche zur Liste hinzugefuegt werden sollen.
 * @param  anzahl_neuer_email_adressen  Die Anzahl der Email Adressen, welche hinzugefuegt werden sollen.
 */
void Student::fuege_email_adresse_hinzu(string* die_neuen_email_adressen, int anzahl_neuer_email_adressen)
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
bool Student::entferne_email_adresse(int der_index)
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
bool Student::entferne_email_adresse(string die_email_adresse)
{
  return email_adressen.entferne_email_adresse(die_email_adresse);
}

/**
 * Gibt die Heimatanschrift des Studenten zurueck.
 *
 * @param  Die Heimatanschrift des Studenten.
 */
Adresse Student::liefere_heimatanschrift() const
{
  return heimatanschrift;
}

/**
 * Gibt das Datum der Immatrikulation zurueck.
 *
 * @param  Das Datum der Immatrikulation.
 */
Datum Student::liefere_datum_der_immatrikulation() const
{
  return datum_der_immatrikulation;
}

/**
 * Gibt die Matrikelnummer des Studenten zurueck.
 *
 * @return  Die Matrikelnummer des Studenten.
 */
int Student::liefere_matrikelnummer() const
{
  return matrikelnummer;
}

/**
 * Gibt den Fachbereich des Studenten zurueck.
 *
 * @return  Der Fachbereich des Studenten.
 */
string Student::liefere_fachbereich() const
{
  return fachbereich;
}

/**
 * Gibt den Studiengang des Studenten zurueck.
 *
 * @return  Der Studiengang des Studenten.
 */
string Student::liefere_studiengang() const
{
  return studiengang;
}

/**
 * Gibt die Email Adressen zurueck.
 *
 * @return  Die Email Adresse des Angestellten.
 */
Email_Adresse Student::liefere_email_adressen() const
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
string Student::liefere_email_adresse_ueber_index(int index) const
{
  return email_adressen.liefere_email_adresse_ueber_index(index);
}

/**
 * Gibt die Beschreibung des Studenten zurueck.
 *
 * @return  Die Beschreibung des Studenten.
 */
string Student::liefere_beschreibung() const
{
  string die_beschreibung = Person::liefere_beschreibung();
  die_beschreibung       += "\n";
  die_beschreibung       += "Heimatanschrift: " + heimatanschrift.liefere_beschreibung() + "\n";
  die_beschreibung       += "Datum der Immatrikulation: " + datum_der_immatrikulation.liefere_standarddatum() + "\n";
  die_beschreibung       += "Matrikelnummer: " + zahl_zu_string(matrikelnummer) + "\n";
  die_beschreibung       += "Fachbereich: " + fachbereich + "\n";
  die_beschreibung       += "Studiengang: " + studiengang + "\n";
  die_beschreibung       += "Email: " + email_adressen.liefere_email_adressen() + "\n";
  return die_beschreibung;
}

/**
 * Ueberlaedt den << Operator.
 * Gibt eine Student, mit allen Daten, in den Outputstream.
 *
 * @param  ausgabe  Der Outputstream.
 * @param  student  Der Student, welcher in den Outputstream gegeben werden soll.
 *
 * @return          Der Outputstream.
 */
std::ostream& operator<<(std::ostream& ausgabe, const Student& student)
{
  ausgabe << student.liefere_beschreibung();
  return ausgabe;
}

/**
 * Ueberlaedt den >> Operator.
 * Somit koennen Personendaten aus dem Inputstream geholt und eingegeben werden.
 *
 * @param  ausgabe  Der Inputstream.
 * @param  student  Die Student, welcher eingegeben werden soll.
 *
 * @return          Der Inputstream.
 */
std::istream& operator>>(std::istream& eingabe, Student& student)
{
  Person die_person;
  Adresse die_heimatanschrift;
  Datum das_datum_der_immatrikulation;
  Email_Adresse die_email_adresse;
  eingabe >> die_person >> die_heimatanschrift >> das_datum_der_immatrikulation;
  int die_matrikelnummer = erfasse_zahl<int>("Bitte geben Sie die Matrikelnummer des Studenten ein");
  string der_fachbereich = erfasse_string("Bitte geben Sie den Fachbereich des Studenten ein", 255);
  string der_studiengang = erfasse_string("Bitte geben Sie den Studiengang des Studenten ein", 255);
  eingabe >> die_email_adresse;
  student = Student(die_person, die_heimatanschrift, das_datum_der_immatrikulation, die_matrikelnummer, der_fachbereich, der_studiengang, die_email_adresse);
  return eingabe;
}

/**
 * Erzeugt einen zufaelligen Student und gibt diesen zurueck.
 *
 * @return  Der zufaellig erzeugte Student.
 */
Student erzeuge_zufaelligen_student()
{
  Datei_Handler fachbereich      = Datei_Handler(DATEI_FACHBREICH);
  Datei_Handler studiengang      = Datei_Handler(DATEI_STUDIENGANG);
  Zufallsgenerierung zufall      = Zufallsgenerierung();
  int zufaellige_matrikelnnummer = zufall.erzeuge_zufaelligen_long(530000, 539999);
  string zufaelliger_fachbereich = fachbereich.liefere_zufaellige_zeile();
  string zufaelliger_studiengang = studiengang.liefere_zufaellige_zeile();
  Student der_zufaellige_student = Student(erzeuge_zufaellige_person(),
                                           erzeuge_zufaellige_adresse(),
                                           erzeuge_zufaelliges_datum(2010, 2010),
                                           zufaellige_matrikelnnummer,
                                           zufaelliger_fachbereich,
                                           zufaelliger_studiengang,
                                           erzeuge_zufaellige_email_adresse());
  return der_zufaellige_student;
}

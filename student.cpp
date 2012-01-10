/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/student.h"

Student::Student()
{

}

Student::Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation, int die_matrikelnummer, string der_fachbereich, string der_studiengang, Email_Adresse die_email_adressen)
        :Person(die_person), heimatanschrift(die_heimatanschrift), datum_der_immatrikulation(das_datum_der_immatrikulation), matrikelnummer(die_matrikelnummer), fachbereich(der_fachbereich), studiengang(der_studiengang), email_adressen(die_email_adressen)
{

}

Student::Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation, int die_matrikelnummer, string der_fachbereich, string der_studiengang)
        :Person(die_person), heimatanschrift(die_heimatanschrift), datum_der_immatrikulation(das_datum_der_immatrikulation), matrikelnummer(die_matrikelnummer), fachbereich(der_fachbereich), studiengang(der_studiengang)
{

}

Student::Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation, int die_matrikelnummer, string der_fachbereich)
        :Person(die_person), heimatanschrift(die_heimatanschrift), datum_der_immatrikulation(das_datum_der_immatrikulation), matrikelnummer(die_matrikelnummer), fachbereich(der_fachbereich)
{

}

Student::Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation, int die_matrikelnummer)
        :Person(die_person), heimatanschrift(die_heimatanschrift), datum_der_immatrikulation(das_datum_der_immatrikulation), matrikelnummer(die_matrikelnummer)
{

}

Student::Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation)
        :Person(die_person), heimatanschrift(die_heimatanschrift), datum_der_immatrikulation(das_datum_der_immatrikulation)
{

}

Student::Student(Person die_person, Adresse die_heimatanschrift)
        :Person(die_person), heimatanschrift(die_heimatanschrift)
{

}

Student::Student(Person die_person)
        :Person(die_person)
{

}

Student::~Student()
{

}

void Student::setze_heimatanschrift(Adresse die_heimatanschrift)
{
  heimatanschrift = die_heimatanschrift;
}

void Student::setze_datum_der_immatrikulation(Datum das_datum_der_immatrikulation)
{
  datum_der_immatrikulation = das_datum_der_immatrikulation;
}

void Student::setze_matrikelnummer(int die_matrikelnummer)
{
  matrikelnummer = die_matrikelnummer;
}

void Student::setze_fachbereich(string der_fachbereich)
{
  fachbereich = der_fachbereich;
}

void Student::setze_studiengang(string der_studiengang)
{
  studiengang = der_studiengang;
}

void Student::fuege_email_adresse_hinzu(string die_neue_email_adresse)
{
  email_adressen.fuege_email_adresse_hinzu(die_neue_email_adresse);
}

void Student::fuege_email_adresse_hinzu(string* die_neuen_email_adressen, int anzahl_neuer_email_adressen)
{
  email_adressen.fuege_email_adresse_hinzu(die_neuen_email_adressen, anzahl_neuer_email_adressen);
}

bool Student::entferne_email_adresse(int der_index)
{
  return email_adressen.entferne_email_adresse(der_index);
}

bool Student::entferne_email_adresse(string die_email_adresse)
{
  return email_adressen.entferne_email_adresse(die_email_adresse);
}

Adresse Student::liefere_heimatanschrift() const
{
  return heimatanschrift;
}

Datum Student::liefere_datum_der_immatrikulation() const
{
  return datum_der_immatrikulation;
}

int Student::liefere_matrikelnummer() const
{
  return matrikelnummer;
}

string Student::liefere_fachbereich() const
{
  return fachbereich;
}

string Student::liefere_studiengang() const
{
  return studiengang;
}

Email_Adresse Student::liefere_email_adressen() const
{
  return email_adressen;
}

string Student::liefere_email_adresse_ueber_index(int index) const
{
  return email_adressen.liefere_email_adresse_ueber_index(index);
}

string Student::liefere_beschreibung() const
{
  string die_beschreibung = Person::liefere_beschreibung();
  return die_beschreibung;
}

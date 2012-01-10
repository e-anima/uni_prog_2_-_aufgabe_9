/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/student.h"

Student::Student()
{
  anzahl_email_adressen = 1;
  email_adressen        = new string[anzahl_email_adressen];
  email_adressen[0]     = "student@uni.de";
}

Student::Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation, int die_matrikelnummer, string der_fachbereich, string der_studiengang, string* die_email_adressen, int die_anzahl_email_adressen)
        :Person(die_person), heimatanschrift(die_heimatanschrift), datum_der_immatrikulation(das_datum_der_immatrikulation), matrikelnummer(die_matrikelnummer), fachbereich(der_fachbereich), studiengang(der_studiengang)
{
  anzahl_email_adressen = die_anzahl_email_adressen;
  email_adressen        = die_email_adressen;
}

Student::Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation, int die_matrikelnummer, string der_fachbereich, string der_studiengang)
        :Person(die_person), heimatanschrift(die_heimatanschrift), datum_der_immatrikulation(das_datum_der_immatrikulation), matrikelnummer(die_matrikelnummer), fachbereich(der_fachbereich), studiengang(der_studiengang)
{
  anzahl_email_adressen = 1;
  email_adressen        = new string[anzahl_email_adressen];
  email_adressen[0]     = "student@uni.de";
}

Student::Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation, int die_matrikelnummer, string der_fachbereich)
        :Person(die_person), heimatanschrift(die_heimatanschrift), datum_der_immatrikulation(das_datum_der_immatrikulation), matrikelnummer(die_matrikelnummer), fachbereich(der_fachbereich)
{
  anzahl_email_adressen = 1;
  email_adressen        = new string[anzahl_email_adressen];
  email_adressen[0]     = "student@uni.de";
}

Student::Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation, int die_matrikelnummer)
        :Person(die_person), heimatanschrift(die_heimatanschrift), datum_der_immatrikulation(das_datum_der_immatrikulation), matrikelnummer(die_matrikelnummer)
{
  anzahl_email_adressen = 1;
  email_adressen        = new string[anzahl_email_adressen];
  email_adressen[0]     = "student@uni.de";
}

Student::Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation)
        :Person(die_person), heimatanschrift(die_heimatanschrift), datum_der_immatrikulation(das_datum_der_immatrikulation)
{
  anzahl_email_adressen = 1;
  email_adressen        = new string[anzahl_email_adressen];
  email_adressen[0]     = "student@uni.de";
}

Student::Student(Person die_person, Adresse die_heimatanschrift)
        :Person(die_person), heimatanschrift(die_heimatanschrift)
{
  anzahl_email_adressen = 1;
  email_adressen        = new string[anzahl_email_adressen];
  email_adressen[0]     = "student@uni.de";
}

Student::Student(Person die_person)
        :Person(die_person)
{
  anzahl_email_adressen = 1;
  email_adressen        = new string[anzahl_email_adressen];
  email_adressen[0]     = "student@uni.de";
}

Student::~Student()
{
  delete [] email_adressen;
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

void Student::fuege_email_adresse_hinzu(string die_email_adresse)
{
  string* neue_email_adressen = new string[anzahl_email_adressen + 1];
  for (int index = 0; index < anzahl_email_adressen; ++index)
  {
    neue_email_adressen[index] = email_adressen[index];
  }
  ++anzahl_email_adressen;
  neue_email_adressen[anzahl_email_adressen] = die_email_adresse;
  email_adressen = new string[anzahl_email_adressen];
  kopiere_array(email_adressen, neue_email_adressen, anzahl_email_adressen);
  delete [] neue_email_adressen;
}

bool Student::entferne_email_adresse(int der_index)
{
  int index;
  if (der_index < 0)
  {
    index = 0;
  }
  else if (der_index > anzahl_email_adressen)
  {
    index = anzahl_email_adressen;
  }
  bool wurde_entfernt = false;
  string* neue_email_adressen = new string[anzahl_email_adressen - 1];
  for (int zaehler = 0; zaehler < anzahl_email_adressen; ++zaehler)
  {
    if (index != zaehler)
    {
      neue_email_adressen[zaehler] = email_adressen[zaehler];
      wurde_entfernt = true;
    }
  }
  if (wurde_entfernt)
  {
    --anzahl_email_adressen;
    email_adressen = new string[anzahl_email_adressen];
    kopiere_array(email_adressen, neue_email_adressen, anzahl_email_adressen);
  }
  delete [] neue_email_adressen;
  return wurde_entfernt;
}

bool Student::entferne_email_adresse(string die_email_adresse)
{
  bool wurde_entfernt = false;
  string* neue_email_adressen = new string[anzahl_email_adressen - 1];
  for (int zaehler = 0; zaehler < anzahl_email_adressen; ++zaehler)
  {
    if (die_email_adresse != email_adressen[zaehler])
    {
      neue_email_adressen[zaehler] = email_adressen[zaehler];
      wurde_entfernt = true;
    }
  }
  if (wurde_entfernt)
  {
    --anzahl_email_adressen;
    email_adressen = new string[anzahl_email_adressen];
    kopiere_array(email_adressen, neue_email_adressen, anzahl_email_adressen);
  }
  delete [] neue_email_adressen;
  return wurde_entfernt;
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

string Student::liefere_email_adressen() const
{
  stringstream ausgabe(stringstream::out);
  for (int index = 0; index < anzahl_email_adressen; ++index)
  {
    ausgabe << email_adressen[index];
    if (index < (anzahl_email_adressen - 1))
    {
      ausgabe << ", ";
    }
  }
  return ausgabe.str();
}

string Student::liefere_email_adresse_ueber_index(int index) const
{
  int der_index;
  if (index < 0)
  {
    der_index = 0;
  }
  else if (index > anzahl_email_adressen)
  {
    der_index = anzahl_email_adressen;
  }
  return email_adressen[der_index];
}

string Student::liefere_beschreibung() const
{
  string die_beschreibung = Person::liefere_beschreibung();
  return die_beschreibung;
}

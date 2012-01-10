/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "adresse.h"
#include "array_helfer.h"
#include "beschreibbar.h"
#include "datum.h"
#include "email_adresse.h"
#include "person.h"

using namespace std;


class Student : public Person
{
  private:
    Adresse heimatanschrift;
    Datum datum_der_immatrikulation;
    int matrikelnummer;
    string fachbereich;
    string studiengang;
    Email_Adresse email_adressen;

  public:
    Student();
    Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation, int die_matrikelnummer, string der_fachbereich, string der_studiengang, Email_Adresse die_email_adressen);
    Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation, int die_matrikelnummer, string der_fachbereich, string der_studiengang);
    Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation, int die_matrikelnummer, string der_fachbereich);
    Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation, int die_matrikelnummer);
    Student(Person die_person, Adresse die_heimatanschrift, Datum das_datum_der_immatrikulation);
    Student(Person die_person, Adresse die_heimatanschrift);
    Student(Person die_person);

    virtual ~Student();

    void setze_heimatanschrift(Adresse die_heimatanschrift);
    void setze_datum_der_immatrikulation(Datum das_datum_der_immatrikulation);
    void setze_matrikelnummer(int die_matrikelnummer);
    void setze_fachbereich(string der_fachbereich);
    void setze_studiengang(string der_studiengang);
    void fuege_email_adresse_hinzu(string die_email_adresse);
    void fuege_email_adresse_hinzu(string* die_neuen_email_adressen, int anzahl_neuer_email_adressen);
    bool entferne_email_adresse(int der_index);
    bool entferne_email_adresse(string die_email_adresse);

    Adresse liefere_heimatanschrift() const;
    Datum liefere_datum_der_immatrikulation() const;
    int liefere_matrikelnummer() const;
    string liefere_fachbereich() const;
    string liefere_studiengang() const;
    Email_Adresse liefere_email_adressen() const;
    string liefere_email_adresse_ueber_index(int index) const;

    virtual string liefere_beschreibung() const;

};

#endif

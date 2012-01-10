/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef ANGESTELLTER_H
#define ANGESTELLTER_H

#include <string>
#include "email_adresse.h"
#include "person.h"
#include "telefonnummer.h"

class Angestellter : public Person
{
  private:
    Email_Adresse email_adressen;
    Telefonnummer dienstliche_telefonnummer;
    Telefonnummer dienstliche_faxnummer;
    string gebaeude_dienstzimmer;
    int raumnummer_dienstzimmer;

  public:
    Angestellter();
    Angestellter(Person die_person, Email_Adresse die_email_adressen, Telefonnummer die_dienstliche_telefonnummer, Telefonnummer die_dienstliche_faxnummer, string das_gebaeude_des_dienstzimmers, int die_raumnummer_des_dienstzimmers);
    Angestellter(Person die_person, Email_Adresse die_email_adressen, Telefonnummer die_dienstliche_telefonnummer, Telefonnummer die_dienstliche_faxnummer);
    Angestellter(Person die_person, Email_Adresse die_email_adressen, Telefonnummer die_dienstliche_telefonnummer);
    Angestellter(Person die_person, Email_Adresse die_email_adressen);
    Angestellter(Person die_person);

    virtual ~Angestellter();

    void setze_gebaeude_dienstzimmer(string das_gebaeude_des_dienstzimmers);
    void setze_raumnummer_dienstzimmer(int die_raumnummer_des_dienstzimmers);
    void setze_dienstliche_telefonnummer(Telefonnummer die_dienstliche_telefonnummer);
    void setze_dienstliche_faxnummer(Telefonnummer die_dienstliche_faxnummer);
    void fuege_email_adresse_hinzu(string die_email_adresse);
    void fuege_email_adresse_hinzu(string* die_neuen_email_adressen, int anzahl_neuer_email_adressen);
    bool entferne_email_adresse(int der_index);
    bool entferne_email_adresse(string die_email_adresse);

    Email_Adresse liefere_email_adressen() const;
    string liefere_email_adresse_ueber_index(int index) const;
    Telefonnummer liefere_dienstliche_telefonnummer() const;
    Telefonnummer liefere_dienstliche_faxnummer() const;
    string liefere_gebaeude_dienstzimmer() const;
    int liefere_raumnummer_dienstzimmer() const;

    virtual string liefere_beschreibung() const;
};

#endif

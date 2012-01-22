/**
 *  @author Markus Paeschke (s0531524)
 */

#ifndef ANGESTELLTER_H
#define ANGESTELLTER_H

#include <string>
#include "email_adresse.h"
#include "person.h"
#include "telefonnummer.h"
#include "zufallsgenerierung.h"

class Angestellter : public Person
{
  private:
    /** Die Funktion des Angestellten in der Uni. **/
    string funktion;
    /** Die Email Adressen des Angestellten. **/
    Email_Adresse email_adressen;
    /** Die Telefonnumer des Angestellten. **/
    Telefonnummer dienstliche_telefonnummer;
    /** Die Faxnummer des Angestellten. **/
    Telefonnummer dienstliche_faxnummer;
    /** Das Gebaeude in dem sich das Dienstzimmer des Angestellten befindet. **/
    string gebaeude_dienstzimmer;
    /** Die Raumnummer des Dienstzimmers. **/
    int raumnummer_dienstzimmer;

  public:
    Angestellter();
    Angestellter(Person die_person, string die_funktion, Email_Adresse die_email_adressen, Telefonnummer die_dienstliche_telefonnummer, Telefonnummer die_dienstliche_faxnummer, string das_gebaeude_des_dienstzimmers, int die_raumnummer_des_dienstzimmers);
    Angestellter(Person die_person, string die_funktion, Email_Adresse die_email_adressen, Telefonnummer die_dienstliche_telefonnummer, Telefonnummer die_dienstliche_faxnummer);
    Angestellter(Person die_person, string die_funktion, Email_Adresse die_email_adressen, Telefonnummer die_dienstliche_telefonnummer);
    Angestellter(Person die_person, string die_funktion, Email_Adresse die_email_adressen);
    Angestellter(Person die_person, string die_funktion);
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

std::ostream& operator<<(std::ostream& ausgabe, const Angestellter& person);
std::istream& operator>>(std::istream& eingabe, Angestellter& person);

Angestellter erzeuge_zufaelligen_angestellten(string die_funktion);
Angestellter erzeuge_zufaelligen_angestellten();

#endif

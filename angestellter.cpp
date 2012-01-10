/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/angestellter.h"

Angestellter::Angestellter()
{

}

Angestellter::Angestellter(Person die_person, Email_Adresse die_email_adressen, Telefonnummer die_dienstliche_telefonnummer, Telefonnummer die_dienstliche_faxnummer, string das_gebaeude_des_dienstzimmers, int die_raumnummer_des_dienstzimmers)
             :Person(die_person), email_adressen(die_email_adressen), dienstliche_telefonnummer(die_dienstliche_telefonnummer), dienstliche_faxnummer(die_dienstliche_faxnummer), gebaeude_dienstzimmer(das_gebaeude_des_dienstzimmers), raumnummer_dienstzimmer(die_raumnummer_des_dienstzimmers)
{

}

Angestellter::Angestellter(Person die_person, Email_Adresse die_email_adressen, Telefonnummer die_dienstliche_telefonnummer, Telefonnummer die_dienstliche_faxnummer)
             :Person(die_person), email_adressen(die_email_adressen), dienstliche_telefonnummer(die_dienstliche_telefonnummer), dienstliche_faxnummer(die_dienstliche_faxnummer)
{

}

Angestellter::Angestellter(Person die_person, Email_Adresse die_email_adressen, Telefonnummer die_dienstliche_telefonnummer)
             :Person(die_person), email_adressen(die_email_adressen), dienstliche_telefonnummer(die_dienstliche_telefonnummer)
{

}

Angestellter::Angestellter(Person die_person, Email_Adresse die_email_adressen)
             :Person(die_person), email_adressen(die_email_adressen)
{

}

Angestellter::Angestellter(Person die_person)
             :Person(die_person)
{

}

Angestellter::~Angestellter()
{

}

void Angestellter::setze_gebaeude_dienstzimmer(string das_gebaeude_des_dienstzimmers)
{
  gebaeude_dienstzimmer = das_gebaeude_des_dienstzimmers;
}

void Angestellter::setze_raumnummer_dienstzimmer(int die_raumnummer_des_dienstzimmers)
{
  raumnummer_dienstzimmer = die_raumnummer_des_dienstzimmers;
}

void Angestellter::setze_dienstliche_telefonnummer(Telefonnummer die_dienstliche_telefonnummer)
{
  dienstliche_telefonnummer = die_dienstliche_telefonnummer;
}

void Angestellter::setze_dienstliche_faxnummer(Telefonnummer die_dienstliche_faxnummer)
{
  dienstliche_faxnummer = die_dienstliche_faxnummer;
}

void Angestellter::fuege_email_adresse_hinzu(string die_neue_email_adresse)
{
  email_adressen.fuege_email_adresse_hinzu(die_neue_email_adresse);
}

void Angestellter::fuege_email_adresse_hinzu(string* die_neuen_email_adressen, int anzahl_neuer_email_adressen)
{
  email_adressen.fuege_email_adresse_hinzu(die_neuen_email_adressen, anzahl_neuer_email_adressen);
}

bool Angestellter::entferne_email_adresse(int der_index)
{
  return email_adressen.entferne_email_adresse(der_index);
}

bool Angestellter::entferne_email_adresse(string die_email_adresse)
{
  return email_adressen.entferne_email_adresse(die_email_adresse);
}

Email_Adresse Angestellter::liefere_email_adressen() const
{
  return email_adressen;
}

string Angestellter::liefere_email_adresse_ueber_index(int index) const
{
  return email_adressen.liefere_email_adresse_ueber_index(index);
}

Telefonnummer Angestellter::liefere_dienstliche_telefonnummer() const
{
  return dienstliche_telefonnummer;
}

Telefonnummer Angestellter::liefere_dienstliche_faxnummer() const
{
  return dienstliche_faxnummer;
}

string Angestellter::liefere_gebaeude_dienstzimmer() const
{
  return gebaeude_dienstzimmer;
}

int Angestellter::liefere_raumnummer_dienstzimmer() const
{
  return raumnummer_dienstzimmer;
}

string Angestellter::liefere_beschreibung() const
{
  string die_beschreibung = Person::liefere_beschreibung();
  return die_beschreibung;
}

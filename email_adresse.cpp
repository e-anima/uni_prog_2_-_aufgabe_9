/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/email_adresse.h"

Email_Adresse::Email_Adresse()
{
  anzahl_email_adressen = 1;
  email_adressen        = new string[anzahl_email_adressen];
  email_adressen[0]     = "student@uni.de";
}

Email_Adresse::Email_Adresse(string* die_email_adressen, int die_anzahl_email_adressen)
{
  anzahl_email_adressen = die_anzahl_email_adressen;
  email_adressen        = die_email_adressen;
}

Email_Adresse::Email_Adresse(string die_email_adresse)
{
  anzahl_email_adressen = 1;
  email_adressen        = new string[anzahl_email_adressen];
  email_adressen[0]     = die_email_adresse;
}

Email_Adresse::~Email_Adresse()
{
  delete [] email_adressen;
}

void Email_Adresse::fuege_email_adresse_hinzu(string die_neue_email_adresse)
{
  if (!addrese_bereits_enthalten(die_neue_email_adresse))
  {
    string* temporaere_adressen = new string[anzahl_email_adressen + 1];
    for (int index = 0; index < anzahl_email_adressen; ++index)
    {
      temporaere_adressen[index] = email_adressen[index];
    }
    ++anzahl_email_adressen;
    temporaere_adressen[anzahl_email_adressen] = die_neue_email_adresse;
    email_adressen = new string[anzahl_email_adressen];
    kopiere_array(email_adressen, temporaere_adressen, anzahl_email_adressen);
    delete [] temporaere_adressen;
  }
}

void Email_Adresse::fuege_email_adresse_hinzu(string* die_neuen_email_adressen, int anzahl_neuer_email_adressen)
{
  if (anzahl_email_adressen > 0)
  {
    for (int index = 0; index < anzahl_neuer_email_adressen; ++index)
    {
      fuege_email_adresse_hinzu(die_neuen_email_adressen[index]);
    }
  }
}

bool Email_Adresse::entferne_email_adresse(int der_index)
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
  string* temporaere_adressen = new string[anzahl_email_adressen - 1];
  for (int zaehler = 0; zaehler < anzahl_email_adressen; ++zaehler)
  {
    if (index != zaehler)
    {
      temporaere_adressen[zaehler] = email_adressen[zaehler];
      wurde_entfernt = true;
    }
  }
  if (wurde_entfernt)
  {
    --anzahl_email_adressen;
    email_adressen = new string[anzahl_email_adressen];
    kopiere_array(email_adressen, temporaere_adressen, anzahl_email_adressen);
  }
  delete [] temporaere_adressen;
  return wurde_entfernt;
}

bool Email_Adresse::entferne_email_adresse(string die_email_adresse)
{
  bool wurde_entfernt = false;
  if (addrese_bereits_enthalten(die_email_adresse))
  {
    string* temporaere_adressen = new string[anzahl_email_adressen - 1];
    for (int zaehler = 0; zaehler < anzahl_email_adressen; ++zaehler)
    {
      if (die_email_adresse != email_adressen[zaehler])
      {
        temporaere_adressen[zaehler] = email_adressen[zaehler];
        wurde_entfernt = true;
      }
    }
    if (wurde_entfernt)
    {
      --anzahl_email_adressen;
      email_adressen = new string[anzahl_email_adressen];
      kopiere_array(email_adressen, temporaere_adressen, anzahl_email_adressen);
    }
    delete [] temporaere_adressen;
  }
  return wurde_entfernt;
}

string Email_Adresse::liefere_email_adressen() const
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

string Email_Adresse::liefere_email_adresse_ueber_index(int index) const
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

bool Email_Adresse::addrese_bereits_enthalten(string zu_suchende_adresse) const
{
  bool ist_enthalten = false;
  for (int index = 0; index < anzahl_email_adressen && !ist_enthalten; ++index)
  {
    if (zu_suchende_adresse == email_adressen[index])
    {
      ist_enthalten = true;
    }
  }
  return ist_enthalten;
}

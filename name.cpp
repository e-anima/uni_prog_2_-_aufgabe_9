/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/name.h"

/*Name::Name()
{
  // TODO Auto-generated constructor stub
}

Name::Name(const string& der_vorname, const string& der_nachname)
{
  anzahl_vornamen  = 1;
  anzahl_nachnamen = 1;
  initialisiere_namen();
}

Name::Name(const string *die_vornamen, int die_anzahl_vornamen, const string& der_nachname)
{
  anzahl_vornamen  = die_anzahl_vornamen;
  anzahl_nachnamen = 1;
  initialisiere_namen(die_vornamen, der_nachname);
}

Name::Name(const string& der_vorname, const string *die_nachnamen, int die_anzahl_nachnamen)
{
  anzahl_vornamen  = 1;
  anzahl_nachnamen = die_anzahl_nachnamen;
  initialisiere_namen(der_vorname, die_nachnamen);
}

Name::Name(const string *die_vornamen, int die_anzahl_vornamen, const string *die_nachnamen, int die_anzahl_nachnamen)
{
  if (die_vornamen  != 0 && die_anzahl_vornamen  > 0 &&
      die_nachnamen != 0 && die_anzahl_nachnamen > 0)
  {
    anzahl_vornamen  = die_anzahl_vornamen;
    anzahl_nachnamen = die_anzahl_nachnamen;
    initialisiere_namen(die_vornamen, die_nachnamen);
  }
  else
  {
    anzahl_vornamen  = 1;
    anzahl_nachnamen = 1;
    initialisiere_namen();
  }
}

Name::Name(const Name& original)
{
  anzahl_vornamen  = original.anzahl_vornamen;
  anzahl_nachnamen = original.anzahl_nachnamen;
  initialisiere_namen(original.vorname, original.nachname);
}

Name::~Name()
{
  delete [] vorname;
  delete [] nachname;
}

string Name::liefere_vornamen() const
{
  string alle_vornamen;
  for (int i = 0; i < anzahl_vornamen; i++)
  {
    if (i == 0)
    {
      alle_vornamen += vorname[0];
    }
    else
    {
      alle_vornamen += (" " + vorname[i]);
    }
  }
  return alle_vornamen;
}

string Name::liefere_nachnamen() const
{
  string alle_nachnamen;
  for (int i = 0; i < anzahl_nachnamen; i++)
  {
    if (i == 0)
    {
      alle_nachnamen += nachname[0];
    }
    else
    {
      alle_nachnamen += (" " + nachname[i]);
    }
  }
  return alle_nachnamen;
}

string Name::liefere_namen() const
{
  return liefere_vornamen() + " " + liefere_anzahl_nachnamen();
}

int Name::liefere_anzahl_vornamen() const
{
  return anzahl_vornamen;
}

int Name::liefere_anzahl_nachnamen() const
{
  return anzahl_nachnamen;
}

void ersetze_vornamen(const string& der_neue_vorname)
{
  ersetze_vornamen(der_neue_vorname, 1);
}

void ersetze_vornamen(const string *die_vornamen, int anzahl_vornamen)
{
  vorname = new string[anzahl_vornamen];
  for (int i = 0; i < anzahl_vornamen; ++i)
  {
    vorname[i] = die_vornamen[i];
  }
}

void Name::ersetze_nachnamen(const string& der_neue_nachname)
{
  ersetze_nachnamen(der_neue_nachname, 1);
}

void Name::ersetze_nachnamen(const string *die_nachnamen, int die_anzahl_nachnamen)
{
  nachname = new string[anzahl_nachnamen];
  for (int i = 0; i < anzahl_nachnamen; ++i)
  {
    nachname[i] = die_nachnamen[i];
  }
}

bool Name::operator==(const Name& der_name)
{
  return (anzahl_vornamen     == der_name.anzahl_vornamen    &&
          anzahl_nachnamen    == der_name.anzahl_nachnamen   &&
          liefere_vornamen()  == der_name.liefere_vornamen() &&
          liefere_nachnamen() == der_name.liefere_anzahl_nachnamen());
}

bool Name::operator!=(const Name& der_name)
{
  return !(*this == der_name);
}

bool Name::operator<(const Name& der_name)
{
  return (liefere_nachnamen() < der_name.liefere_nachnamen() ||
      (liefere_nachnamen() == der_name.liefere_anzahl_nachnamen() &&
       liefere_vornamen() < der_name.liefere_vornamen()));
}

bool Name::operator<=(const Name& der_name)
{
  return *this == der_name || *this < der_name;
}

bool Name::operator>(const Name& der_name)
{
  return !(*this <= der_name);
}

bool Name::operator>=(const Name& der_name)
{
  return !(*this < der_name);
}

Name& Name::operator=(const Name& original)
{
  if (this != &original)
  {
    delete [] vorname;
    delete [] nachname;
    anzahl_vornamen  = original.anzahl_vornamen;
    anzahl_nachnamen = original.anzahl_nachnamen;
    initialisiere_namen(original.vorname, original.nachname);
  }
  return *this;
}

void Name::initialisiere_namen(const string& der_vorname, const string& der_nachname)
{
  ersetze_vornamen(der_vorname, 1);
  ersetze_nachnamen(der_nachname, 1);
}

void Name::initialisiere_namen(const string *die_vornamen, const string *die_nachnamen)
{
  ersetze_vornamen(die_vornamen, anzahl_vornamen);
  ersetze_nachnamen(die_nachnamen, anzahl_nachnamen);
}*/

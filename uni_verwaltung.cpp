/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/uni_verwaltung.h"

Uni_Verwaltung::Uni_Verwaltung()
{
  anzahl_personen = 100;
  initialisiere_personen();
}

Uni_Verwaltung::Uni_Verwaltung(int die_anzahl_personen)
               :anzahl_personen(die_anzahl_personen)
{
  initialisiere_personen();
}

Uni_Verwaltung::Uni_Verwaltung(const Uni_Verwaltung& original)
{
  loesche_liste();
  anzahl_personen = original.liefere_anzahl_personen();
  liste = new Person*[anzahl_personen];
  for (int personen_zaehler = 0; personen_zaehler < anzahl_personen; ++personen_zaehler)
  {
    liste[personen_zaehler] = new Person(original.liefere_person_nach_index(personen_zaehler));
  }
}

Uni_Verwaltung::~Uni_Verwaltung()
{
  loesche_liste();
}

int Uni_Verwaltung::liefere_anzahl_personen() const
{
  return anzahl_personen;
}

Person Uni_Verwaltung::liefere_person_nach_index(int der_index) const
{
  return *liste[der_index];
}

void Uni_Verwaltung::schreibe_personen_unsortiert()
{
  cout << endl;
  for (int personen_zaehler = 0; personen_zaehler < anzahl_personen; ++personen_zaehler)
  {
    cout << liste[personen_zaehler]->liefere_beschreibung() << endl;
  }
  schreibe_n_mal('-', 40);
}

void Uni_Verwaltung::initialisiere_personen()
{
  liste = new Person*[anzahl_personen];
  for (int personen_zaehler = 0; personen_zaehler < anzahl_personen; ++personen_zaehler)
  {
    liste[personen_zaehler] = new Person();
  }
}

void Uni_Verwaltung::loesche_liste()
{
  for (int personen_zaehler = 0; personen_zaehler < anzahl_personen; ++personen_zaehler)
  {
    delete liste[personen_zaehler];
  }
  delete [] liste;
}

Uni_Verwaltung& Uni_Verwaltung::operator=(const Uni_Verwaltung& original)
{
  if (this != &original)
  {
    loesche_liste();
    anzahl_personen = original.liefere_anzahl_personen();
    liste = new Person*[anzahl_personen];
    for (int personen_zaehler = 0; personen_zaehler < anzahl_personen; ++personen_zaehler)
    {
      liste[personen_zaehler] = new Person(original.liefere_person_nach_index(personen_zaehler));
    }
  }
  return *this;
}

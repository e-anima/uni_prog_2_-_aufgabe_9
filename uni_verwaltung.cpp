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
  delete [] liste;
  anzahl_personen = original.liefere_anzahl_personen();
  initialisiere_personen(original.liste);
}

Uni_Verwaltung::~Uni_Verwaltung()
{
  delete [] liste;
}

int Uni_Verwaltung::liefere_anzahl_personen() const
{
  return anzahl_personen;
}

Person Uni_Verwaltung::liefere_person_nach_index(int der_index) const
{
  return liste[der_index];
}

void Uni_Verwaltung::initialisiere_personen()
{
  liste = new Person[anzahl_personen];
  for (int personen_zaehler = 0; personen_zaehler < anzahl_personen; ++personen_zaehler)
  {
    int modulo_wert = personen_zaehler % 3;
    if (modulo_wert == 0)
    {
      liste[personen_zaehler] = Student();
    }
    else if (modulo_wert == 1)
    {
      liste[personen_zaehler] = Angestellter();
    }
    else
    {
      liste[personen_zaehler] = Professor();
    }
  }
}

void Uni_Verwaltung::initialisiere_personen(const Person *die_personen)
{
  liste = new Person[anzahl_personen];
  for (int personen_zaehler = 0; personen_zaehler < anzahl_personen; ++personen_zaehler)
  {
    liste[personen_zaehler] = die_personen[personen_zaehler];
  }
}

Uni_Verwaltung& Uni_Verwaltung::operator=(const Uni_Verwaltung& original)
{
  if (this != &original)
  {
    delete [] liste;
    anzahl_personen = original.liefere_anzahl_personen();
    initialisiere_personen(original.liste);
  }
  return *this;
}

std::ostream& operator<<(std::ostream& ausgabe, const Uni_Verwaltung& uni_verwaltung)
{
  for (int personen_zaehler = 0; personen_zaehler < uni_verwaltung.liefere_anzahl_personen(); ++personen_zaehler)
  {
    ausgabe << uni_verwaltung.liefere_person_nach_index(personen_zaehler) << endl;
  }
  return ausgabe;
}

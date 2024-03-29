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

Uni_Verwaltung::Uni_Verwaltung(const Person **die_personen, int die_anzahl_personen)
               :anzahl_personen(die_anzahl_personen)
{
  initialisiere_personen(die_personen);
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

void Uni_Verwaltung::initialisiere_personen(const Person **die_personen)
{
  liste = new Person*[anzahl_personen];
  for (int personen_zaehler = 0; personen_zaehler < anzahl_personen; ++personen_zaehler)
  {
    Person personen_ablage  = Person(die_personen[personen_zaehler]);
    liste[personen_zaehler] = new Person(personen_ablage);
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

Uni_Verwaltung erzeuge_n_zufaellige_personen(int anzahl_personen)
{
  Person **liste = new Person*[anzahl_personen];
  for (int personen_zaehler = 0; personen_zaehler < anzahl_personen; ++personen_zaehler)
  {
    Person zufaellige_person  = Person();
    int modulo_wert = personen_zaehler % 3;
    if (modulo_wert == 0)
    {
      liste[personen_zaehler] = new Student(erzeuge_zufaelligen_student());
    }
    else if (modulo_wert == 1)
    {
      liste[personen_zaehler] = new Angestellter(erzeuge_zufaelligen_angestellten());
    }
    else
    {
      liste[personen_zaehler] = new Professor(erzeuge_zufaelligen_professor());
    }
  }
  Uni_Verwaltung die_uni_verwaltung = Uni_Verwaltung(liste);
  return die_uni_verwaltung;
}

Uni_Verwaltung erzeuge_n_zufaellige_studenten(int anzahl_studenten)
{
  Student *liste;
  for (int personen_zaehler = 0; personen_zaehler < anzahl_studenten; ++personen_zaehler)
  {
    liste[personen_zaehler] = new Student(erzeuge_zufaelligen_student());
  }
  Uni_Verwaltung die_uni_verwaltung = Uni_Verwaltung(liste);
  return die_uni_verwaltung;
}

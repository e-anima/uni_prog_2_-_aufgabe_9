/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef UNI_VERWALTUNG_H
#define UNI_VERWALTUNG_H

#include "ausgabe.h"
#include "beschreibbar.h"
#include "eingabe.h"
#include "angestellter.h"
#include "person.h"
#include "professor.h"
#include "student.h"

using namespace std;

class Uni_Verwaltung
{
  private:
    /** Liste mit Personen. **/
    Person **liste;
    /** Die Anzahl der Personen in der Liste. **/
    int anzahl_personen;

  public:
    Uni_Verwaltung();
    Uni_Verwaltung(int die_anzahl_personen);
    Uni_Verwaltung(const Person **die_personen, int die_anzahl_personen);
    Uni_Verwaltung(const Uni_Verwaltung& original);

    virtual ~Uni_Verwaltung();

    int liefere_anzahl_personen() const;
    Person liefere_person_nach_index(int der_index) const;

    void schreibe_personen_unsortiert();

    Uni_Verwaltung& operator=(const Uni_Verwaltung& original);

  private:
    void initialisiere_personen();
    void initialisiere_personen(const Person **die_personen);
    void loesche_liste();
};

Uni_Verwaltung erzeuge_n_zufaellige_personen(int anzahl_personen);
Uni_Verwaltung erzeuge_n_zufaellige_studenten(int anzahl_studenten);

#endif

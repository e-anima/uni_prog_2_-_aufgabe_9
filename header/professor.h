/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <string>
#include "angestellter.h"
#include "sprechstunde.h"
#include "zeit.h"

using namespace std;

class Professor : public Angestellter
{
  private:
    /** Der Fachbereich des Professors. **/
    string fachbereich;
    /** Der Studiengang des Professors. **/
    string studiengang;
    /** Die Sprechstunde des Professors. **/
    Sprechstunde sprechstunde;

  public:
    Professor();
    Professor(Angestellter der_angestellte, string der_fachbereich, string der_studiengang, Sprechstunde die_sprechstunde);
    Professor(Angestellter der_angestellte, string der_fachbereich, string der_studiengang);
    Professor(Angestellter der_angestellte, string der_fachbereich);
    Professor(Angestellter der_angestellte);

    virtual ~Professor();

    void setze_fachbereich(string der_fachbereich);
    void setze_studiengang(string der_studiengang);
    void setze_sprechstunde(Sprechstunde die_sprechstunde);

    string liefere_fachbereich() const;
    string liefere_studiengang() const;
    Sprechstunde liefere_sprechstunde() const;

    virtual string liefere_beschreibung() const;
};

std::ostream& operator<<(std::ostream& ausgabe, const Professor& professor);
std::istream& operator>>(std::istream& eingabe, Professor& professor);

Professor erzeuge_zufaelligen_professor();

#endif

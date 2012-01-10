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
    Professor(string der_fachbereich, string der_studiengang, Sprechstunde die_sprechstunde);
    Professor(string der_fachbereich, string der_studiengang);
    Professor(string der_fachbereich);

    virtual ~Professor();

    void setze_fachbereich(string der_fachbereich);
    void setze_studiengang(string der_studiengang);
    void setze_sprechstunde_wochentag(Sprechstunde die_sprechstunde);

    string liefere_fachbereich() const;
    string liefere_studiengang() const;
    Sprechstunde liefere_sprechstunde() const;

    virtual string liefere_beschreibung() const;
};

#endif

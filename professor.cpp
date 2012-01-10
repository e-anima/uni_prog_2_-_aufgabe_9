/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/professor.h"

Professor::Professor()
{
  fachbereich = "Fachbereich 4";
  studiengang = "angewandte Informatik";
}

Professor::Professor(string der_fachbereich, string der_studiengang, Sprechstunde die_sprechstunde)
          :fachbereich(der_fachbereich), studiengang(der_studiengang), sprechstunde(die_sprechstunde)
{

}

Professor::Professor(string der_fachbereich, string der_studiengang)
          :fachbereich(der_fachbereich), studiengang(der_studiengang)
{

}

Professor::Professor(string der_fachbereich)
          :fachbereich(der_fachbereich)
{
  studiengang = "angewandte Informatik";
}

Professor::~Professor()
{

}

void Professor::setze_fachbereich(string der_fachbereich)
{
  fachbereich = der_fachbereich;
}

void Professor::setze_studiengang(string der_studiengang)
{
  studiengang = der_studiengang;
}

void Professor::setze_sprechstunde_wochentag(Sprechstunde die_sprechstunde)
{
  sprechstunde = die_sprechstunde;
}

string Professor::liefere_fachbereich() const
{
  return fachbereich;
}

string Professor::liefere_studiengang() const
{
  return studiengang;
}

Sprechstunde Professor::liefere_sprechstunde() const
{
  return sprechstunde;
}

string Professor::liefere_beschreibung() const
{
  return Angestellter::liefere_beschreibung() + "\n" +
         "Der Fachbereich des Professors ist: " + fachbereich + "\n" +
         "Der Studiengang ist: " + studiengang + "\n" +
         sprechstunde.liefere_beschreibung();
}

/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/professor.h"

/**
 * Der Default Konstruktor.
 * Setzt den Fachbereich auf Fachbereich 4
 * und den Studiengang auf angewandte Informatik.
 */
Professor::Professor()
{
  fachbereich = "Fachbereich 4";
  studiengang = "angewandte Informatik";
}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 *
 * @param  der_angestellte   Die Informationen zum Angestellten.
 * @param  der_fachbereich   Der Fachbereich des Professors.
 * @param  der_studiengang   Der Studiengang des Professors.
 * @param  die_sprechstunde  Die Sprechstunde des Professors.
 */
Professor::Professor(Angestellter der_angestellte, string der_fachbereich, string der_studiengang, Sprechstunde die_sprechstunde)
          :Angestellter(der_angestellte), fachbereich(der_fachbereich), studiengang(der_studiengang), sprechstunde(die_sprechstunde)
{

}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 *
 * @param  der_angestellte   Die Informationen zum Angestellten.
 * @param  der_fachbereich   Der Fachbereich des Professors.
 * @param  der_studiengang   Der Studiengang des Professors.
 */
Professor::Professor(Angestellter der_angestellte, string der_fachbereich, string der_studiengang)
          :Angestellter(der_angestellte), fachbereich(der_fachbereich), studiengang(der_studiengang)
{

}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 * Der Studiengang wird auf angewandte Informatik gesetzt.
 *
 * @param  der_angestellte   Die Informationen zum Angestellten.
 * @param  der_fachbereich   Der Fachbereich des Professors.
 */
Professor::Professor(Angestellter der_angestellte, string der_fachbereich)
          :Angestellter(der_angestellte), fachbereich(der_fachbereich)
{
  studiengang = "angewandte Informatik";
}

/**
 * Der Konstruktor der Klasse.
 * Alle Werte muessen uebergeben werden.
 * Der Fachbereich wird auf Fachbereich 4 gesetzt und
 * der Studiengang auf angewandte Informatik.
 *
 * @param  der_angestellte   Die Informationen zum Angestellten.
 */
Professor::Professor(Angestellter der_angestellte)
          :Angestellter(der_angestellte)
{
  fachbereich = "Fachbereich 4";
  studiengang = "angewandte Informatik";
}

/**
 * Der Destruktor der Klasse.
 * Zerstoert das Objekt.
 */
Professor::~Professor()
{

}

/**
 * Setzt den Fachbereich, fuer den der Professor zustaendig ist.
 *
 * @param  Der Fachbereich des Professors.
 */
void Professor::setze_fachbereich(string der_fachbereich)
{
  fachbereich = der_fachbereich;
}

/**
 * Setzt den Studiengang des Professors.
 *
 * @param  der_studiengang  Der Studiengang des Professors.
 */
void Professor::setze_studiengang(string der_studiengang)
{
  studiengang = der_studiengang;
}

/**
 * Setzt die Sprechstunde des Professors.
 *
 * @param  die_sprechstunde  Die Sprechstunde des Professors.
 */
void Professor::setze_sprechstunde(Sprechstunde die_sprechstunde)
{
  sprechstunde = die_sprechstunde;
}

/**
 * Gibt den Fachbereich des Professors zurueck.
 *
 * @return  Der Fachbereich des Professors.
 */
string Professor::liefere_fachbereich() const
{
  return fachbereich;
}

/**
 * Gibt den Studiengang, in dem der Professor unterrichtet, zurueck.
 *
 * @return  Der Studiengang, in dem der Professor unterrichtet.
 */
string Professor::liefere_studiengang() const
{
  return studiengang;
}

/**
 * Gibt die Sprechstunde des Professors zurueck.
 *
 * @return  Die Sprechstunde des Professors.
 */
Sprechstunde Professor::liefere_sprechstunde() const
{
  return sprechstunde;
}

/**
 * Gibt die Beschreibung des Professors zurueck.
 *
 * @return  Die Beschreibung des Professors.
 */
string Professor::liefere_beschreibung() const
{
  return Angestellter::liefere_beschreibung() + "\n" +
         "Der Fachbereich des Professors ist: " + fachbereich + "\n" +
         "Der Studiengang ist: " + studiengang + "\n" +
         sprechstunde.liefere_beschreibung();
}

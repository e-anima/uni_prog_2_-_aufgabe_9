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
          :Angestellter()
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
  string die_beschreibung = Angestellter::liefere_beschreibung();
  die_beschreibung       += "Der Professor ist fuer den Fachbereich \"" + fachbereich + "\" zustaendig.\n";
  die_beschreibung       += "Er unterrichtet im Studiengang \"" + studiengang + "\".\n";
  die_beschreibung       += sprechstunde.liefere_beschreibung();
  return die_beschreibung;
}

/**
 * Ueberlaedt den << Operator.
 * Gibt einen Professors, mit allen Daten, in den Outputstream.
 *
 * @param  ausgabe    Der Outputstream.
 * @param  professor  Der Professors, welcher in den Outputstream gegeben werden soll.
 *
 * @return            Der Outputstream.
 */
std::ostream& operator<<(std::ostream& ausgabe, const Professor& professor)
{
  ausgabe << professor.liefere_beschreibung();
  return ausgabe;
}

/**
 * Ueberlaedt den >> Operator.
 * Somit koennen Personendaten aus dem Inputstream geholt und eingegeben werden.
 *
 * @param  ausgabe    Der Inputstream.
 * @param  professor  Der Professors, welcher eingegeben werden soll.
 *
 * @return            Der Inputstream.
 */
std::istream& operator>>(std::istream& eingabe, Professor& professor)
{
  Angestellter der_angestellte;
  eingabe >> der_angestellte;
  string der_fachbereich = erfasse_string("Bitte geben Sie den Fachbreich des Professors an", 50);
  string der_studiengang = erfasse_string("Bitte geben Sie den Studiengang ein, in dem der Professor unterrichtet", 100);
  Sprechstunde die_sprechstunde;
  eingabe >> die_sprechstunde;
  professor = Professor(der_angestellte, der_fachbereich, der_studiengang, die_sprechstunde);
  return eingabe;
}

/**
 *  Repraesentiert einen Menschen mit einem Geschlecht ,maennlich (m) oder weiblich (w).
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/mensch.h"

/**
 * Der Default Constructor.
 * Erzeugt einen maennlichen Menschen.
 */
Mensch::Mensch()
{
  geschlecht = 'm';
}

/**
 * Initialisiert einen Menschen.
 * Dieser muss maennlichen (m) oder weiblich (w) sein.
 * Wird ein falscher Parameter uebergeben, wird automatisch ein maennlicher Mensch erzeugt.
 *
 * @param  das_geschlecht  Das Geschlecht welches der Menschen haben soll.
 */
Mensch::Mensch(char das_geschlecht)
{
  if (das_geschlecht != 'm' && das_geschlecht != 'w')
  {
    das_geschlecht = 'm';
  }
  geschlecht = das_geschlecht;
}

/**
 * Der Destructor der Klasse.
 * Zerstoert das Objekt.
 */
Mensch::~Mensch()
{

}

/**
 * Gibt das Geschlecht des Menschen zurueck.
 *
 * @return  Das Geschlecht des Menschen.
 */
char Mensch::liefere_geschlecht() const
{
  return geschlecht;
}

/**
 * Gibt das Geschlecht des Menschen in ausgeschriebener Form zurueck.
 *
 * @return  Das Geschlecht des Menschen in ausgeschriebener Form.
 */
string Mensch::liefere_geschlecht_ausgeschrieben() const
{
  return (geschlecht == 'm') ? "maennlich" : "weiblich";
}

/**
 * Gibt die Beschreibung des Menschen als Text wieder.
 *
 * @return  Die Beschreibung des Menschen als Text.
 */
string Mensch::liefere_beschreibung() const
{
  return "Dieser Mensch ist " + liefere_geschlecht_ausgeschrieben();
}

/**
 * Ueberlaedt den << Operator.
 * Gibt den Menschen in den Outputstream.
 *
 * @param  ausgabe  Der Outputstream.
 * @param  mensch   Der Mensch, welcher in den Outputstream gegeben werden soll.
 *
 * @return          Der Outputstream.
 */
std::ostream& operator<<(std::ostream& ausgabe, const Mensch& mensch)
{
  ausgabe << mensch.liefere_geschlecht_ausgeschrieben();
  return ausgabe;
}

/**
 * Ueberlaedt den >> Operator.
 * Somit kann ein Mensch aus dem Inputstream geholt und eingegeben werden.
 * Der Benutzer muss das Geschlecht fuer den Menschen (m oder w) eingeben.
 *
 * @param  ausgabe  Der Inputstream.
 * @param  mensch   Der Mensch, welcher eingegeben werden soll.
 *
 * @return          Der Inputstream.
 */
std::istream& operator>>(std::istream& eingabe, Mensch& mensch)
{
  char moegliche_eingaben[] = {'m', 'w'};
  char geschlecht = erfasse_zeichen("Bitte geben Sie das Geschlecht des Menschen ein [m, w]", moegliche_eingaben, 2);
  mensch = Mensch(geschlecht);
  return eingabe;
}

/**
 * Erzeugt einen zufaelligen Menschen und gibt diesen zurueck.
 *
 * @return  Der zufaellig generierte Mensch.
 */
Mensch erzeuge_zufaelligen_mensch()
{
  Zufallsgenerierung zufall = Zufallsgenerierung();
  char das_geschlecht = (zufall.erzeuge_zufaelligen_int(0, 1) == 1) ? 'w' : 'm';
  Mensch der_mensch = Mensch(das_geschlecht);
  return der_mensch;
}

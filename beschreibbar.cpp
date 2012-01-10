/**
 * Fuer Klassen die eine ausfuehrliche Beschreibung benoetigen.
 * Bsp.: Sind die Informationen ueber eine Person und einen Studenten sehr aehnlich.
 * Diese sollten mit diesem Interface beschrieben werden.
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/beschreibbar.h"

/**
 * Der Destructor der Klasse.
 * Zerstoert das Objekt.
 */
Beschreibbar::~Beschreibbar()
{

}

/**
 * Liefert die Beschreibung eines Objekts als Text.
 *
 * @return  Die Beschreiung eines Objekts als Text.
 */
string Beschreibbar::liefere_beschreibung() const
{
  return "";
}

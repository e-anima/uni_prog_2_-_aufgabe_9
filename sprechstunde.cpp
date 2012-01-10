/**
 *  Repraesentiert eine Sprechstunde.
 *  Eine Sprechstunde muss aus einem Tag, sowie einer Startzeit und einer Endzeit bestehen.
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/sprechstunde.h"

/**
 * Der Default-Konstruktor.
 * Initialisiert eine Sprechstunde, die am Montag stattfindet und von 8Uhr bis 12 Uhr geht.
 */
Sprechstunde::Sprechstunde()
{
  wochentag   = "Montag";
  uhrzeit_von = Zeit(8, 0, 0);
  uhrzeit_bis = uhrzeit_von + 4;
}

/**
 * Initialisiert eine Sprechstunde.
 * Alle Werte der Sprechstunde muessen uebergeben werden.
 *
 * @param  der_wochentag    Der Wochentag der Sprechstunde.
 * @param  die_uhrzeit_von  Die Uhrzeit, wann die Sprechstunde beginnt.
 * @param  die_uhrzeit_bis  DIe Uhrzeit, wann die Sprechstunde endet.
 */
Sprechstunde::Sprechstunde(string der_wochentag, Zeit die_uhrzeit_von, Zeit die_uhrzeit_bis)
             :wochentag(der_wochentag), uhrzeit_von(die_uhrzeit_von), uhrzeit_bis(die_uhrzeit_bis)
{

}

/**
 * Initialisiert eine Sprechstunde.
 * Alle Werte muessen uebergeben werde, bis auf die Endzeit.
 * Die Endzeit wird auf 4 Stunden nach der Startzeit gesetzt.
 *
 * @param  der_wochentag    Der Wochentag der Sprechstunde.
 * @param  die_uhrzeit_von  Die Uhrzeit, wann die Sprechstunde beginnt.
 */
Sprechstunde::Sprechstunde(string der_wochentag, Zeit die_uhrzeit_von)
             :wochentag(der_wochentag), uhrzeit_von(die_uhrzeit_von)
{
  uhrzeit_bis = uhrzeit_von + 4;
}

/**
 * Initialisiert eine Sprechstunde.
 * Nur der Wochentag wird gesetzt.
 * Die Startzeit wird auf 8Uhr gesetzt.
 * Die Endzeit wird auf 4 Stunden nach der Startzeit gesetzt, also auf 12Uhr.
 *
 * @param  der_wochentag    Der Wochentag der Sprechstunde.
 */
Sprechstunde::Sprechstunde(string der_wochentag)
             :wochentag(der_wochentag)
{
  uhrzeit_von = Zeit(8, 0, 0);
  uhrzeit_bis = uhrzeit_von + 4;
}

/**
 * Der Destructor der Klasse.
 * Zerstoert das Objekt.
 */
Sprechstunde::~Sprechstunde()
{

}

/**
 * Setzt den Wochentag der Sprechstunde.
 *
 * @param  der_wochentag  Der Wochentag der Sprechstunde, welcher gesetzt werden soll.
 */
void Sprechstunde::setze_wochentag(string der_wochentag)
{
  wochentag = der_wochentag;
}

/**
 * Setzt die Startzeit der Sprechstunde.
 *
 * @param  die_uhrzeit_von  Die Startzeit der Sprechstunde, welche gesetzt werden soll.
 */
void Sprechstunde::setze_uhrzeit_von(Zeit die_uhrzeit_von)
{
  uhrzeit_von = die_uhrzeit_von;
}

/**
 * Setzt die Endzeit der Sprechstunde.
 *
 * @param  die_uhrzeit_bis  Die Endzeit der Sprechstunde, welche gesetzt werden soll.
 */
void Sprechstunde::setze_uhrzeit_bis(Zeit die_uhrzeit_bis)
{
  uhrzeit_bis = die_uhrzeit_bis;
}

/**
 * Gibt den Wochentag der Sprechstunde zurueck.
 *
 * @return  Der Wochentag der Sprechstunde.
 */
string Sprechstunde::liefere_wochentag() const
{
  return wochentag;
}

/**
 * Gibt die Startzeit der Sprechstunde zurueck.
 *
 * @return  Die Startzeit der Sprechstunde.
 */
Zeit Sprechstunde::liefere_uhrzeit_von() const
{
  return uhrzeit_von;
}

/**
 * Gibt die Endzeit der Sprechstunde zurueck.
 *
 * @return  Die Endzeit der Sprechstunde.
 */
Zeit Sprechstunde::liefere_uhrzeit_bis() const
{
  return uhrzeit_bis;
}

/**
 * Gibt eine ausfuehrliche Beschreibung ueber die Sprechstunde zurueck.
 * Diese Werden in Textform ausgegeben.
 *
 * @return  Die Beschreibung der Sprechstunde in Textform.
 */
string Sprechstunde::liefere_beschreibung() const
{
  return "Die Sprechzeit ist am " + wochentag +
         "von " + uhrzeit_von.liefere_stunden_und_minuten() + "Uhr "
         "bis"  + uhrzeit_bis.liefere_stunden_und_minuten() + "Uhr.";
}

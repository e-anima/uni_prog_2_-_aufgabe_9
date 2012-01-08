/**
 *  Repraesentiert einen Ort.
 *  Ein Ort hat einen Namen.
 *  Ferner kann er in einem Land und einem Landesteil liegen.
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/ort.h"

/**
 * Der Default Constructor der Klasse.
 * Setzt den Ort Berlin, in dem Landesteil Berlin, welches im Land Deutschland liegt.
 */
Ort::Ort()
{
  ortsname   = "Berlin";
  land       = "Deutschland";
  landesteil = "Berlin";
}

/**
 * Initialisiert einen Ort.
 * Dieser muss aus einem Namen, einem Land und einem Landesteil bestehen.
 *
 * @param  der_name        Der Name des Ortes.
 * @param  das_land        Das Land in dem der Ort liegt.
 * @param  das_landesteil  Das Landesteil in dem der Ort liegt.
 */
Ort::Ort(const string& der_name, const string& das_land, const string& das_landesteil)
    :ortsname(der_name), land(das_land), landesteil(das_landesteil)
{

}

/**
 * Initialisiert einen Ort.
 * Dieser muss aus einem Namen und einem Land bestehen.
 *
 * @param  der_name  Der Name des Ortes.
 * @param  das_land  Das Land in dem der Ort liegt.
 */
Ort::Ort(const string& der_name, const string& das_land)
    :ortsname(der_name), land(das_land)
{

}

/**
 * Initialisiert einen Ort.
 * Dieser muss nur aus einem Namen bestehen.
 *
 * @param  der_name  Der Name des Ortes.
 */
Ort::Ort(const string& der_name)
    :ortsname(der_name)
{

}

/**
 * Setzt das Land des Ortes.
 *
 * @param  das_land  Der Name des Landes, in dem der Ort liegt.
 */
void Ort::setze_land(const string& das_land)
{
  land = das_land;
}

/**
 * Setzt das Landesteil des Ortes.
 *
 * @param  das_landesteil  Der Name des Landesteils, in dem der Ort liegt.
 */
void Ort::setze_landesteil(const string& das_landesteil)
{
  landesteil = das_landesteil;
}

/**
 * Setzt den Namen des Ortes.
 *
 * @param  das_land  Der Name des Ortes.
 */
void Ort::setze_name(const string& der_name)
{
  ortsname = der_name;
}

/**
 * Gibt den Namen des Landes zurueck, in dem der Ort liegt.
 *
 * @return  Der Name des Landes, in dem der Ort liegt.
 */
string Ort::liefere_land() const
{
  return land;
}

/**
 * Gibt den Namen des Landesteils zurueck, in dem der Ort liegt.
 *
 * @return  Der Name des Landesteils, in dem der Ort liegt.
 */
string Ort::liefere_landesteil() const
{
  return landesteil;
}

/**
 * Gibt den Namen des Ortes zurueck.
 *
 * @return  Der Name des Ortes.
 */
string Ort::liefere_ortsname() const
{
  return ortsname;
}

/**
 * Gibt eine Beschreibung des Ortes zurueck.
 * In der Beschreibung steht der Name des Ortes,
 * das Landesteil und das Land, Kommasepariert, drin.
 *
 * @return  Die Beschreibung des Ortes.
 */
string Ort::liefere_ortsbeschreibung() const
{
  string beschreibung = ortsname;
  beschreibung += (landesteil != "") ? (", " + landesteil) : "";
  beschreibung += (land != "")       ? (", " + land)       : "";
  return beschreibung;
}

/**
 * Ueberlaedt den << Operator.
 * Gibt einen Ort, mit der Standardformatierung, in den Outputstream.
 *
 * @param  ausgabe  Der Outputstream.
 * @param  ort      Der Ort, welcher in den Outputstream gegeben werden soll.
 *
 * @return          Der Outputstream.
 */
std::ostream& operator<<(std::ostream& ausgabe, const Ort& ort)
{
  ausgabe << ort.liefere_ortsbeschreibung();
  return ausgabe;
}

/**
 * Ueberlaedt den >> Operator.
 * Somit kann ein Ort aus dem Inputstream geholt und eingegeben werden.
 * Der Benutzer muss nacheinander den Namen, das Land und das Landesteil eingeben.
 *
 * @param  ausgabe  Der Inputstream.
 * @param  ort      Der Ort, welcher eingegeben werden soll.
 *
 * @return          Der Inputstream.
 */
std::istream& operator>>(std::istream& eingabe, Ort& ort)
{
  string name       = erfasse_string("Bitte den Namen des Orts eingeben", 100);
  string land       = erfasse_string("Bitte das Land, in dem der Ort liegt, eingeben", 100);
  string landesteil = erfasse_string("Bitte das Landesteil, in dem der Ort leigt, eingeben", 100);
  ort               = Ort(name, land, landesteil);
  return eingabe;
}

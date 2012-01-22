/**
 *  Repraesentiert eine Telefonnummer.
 *  Diese besteht aus einer Landesvorwahl, einer Ortsvorwahl und einer Hauptnummer.
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/telefonnummer.h"

/**
 * Der Default Constructor der Klasse.
 * Setzt die Landesvorwahl auf +49 fuer Deutschland, die Ortsvorwahl auf 30 fuer Berlin und die Teilnehmerkennung auf 123456.
 */
Telefonnummer::Telefonnummer()
{
  initialisiere_telefonnummer();
}

/**
 * Initialisiert eine Telefonnummer.
 * Dieser muss aus einer Landesvorwahl, einer Ortsvorwahl und einer Teilnehmerkennung bestehen.
 *
 * @param  die_teilnehmerkennung  Die Teilnehmerkennung der Nummer.
 * @param  die_ortsvorwahl        Die Ortsvorwahl der Nummer.
 * @param  die_landesvorwahl      Die Landesvorwahl der Nummer.
 */
Telefonnummer::Telefonnummer(string die_teilnehmerkennung, string die_ortsvorwahl, string die_landesvorwahl)
{
  initialisiere_telefonnummer(die_teilnehmerkennung, die_ortsvorwahl, die_landesvorwahl);
}

/**
 * Initialisiert eine Telefonnummer.
 * Dieser muss aus einer Landesvorwahl, einer Ortsvorwahl und einer Teilnehmerkennung bestehen.
 * Die Landesvorwahl wird mit +49 fuer Deutschland initialisiert.
 *
 * @param  die_teilnehmerkennung  Die Teilnehmerkennung der Nummer.
 * @param  die_ortsvorwahl        Die Ortsvorwahl der Nummer.
 */
Telefonnummer::Telefonnummer(string die_teilnehmerkennung, string die_ortsvorwahl)
{
  initialisiere_telefonnummer(die_teilnehmerkennung, die_ortsvorwahl);
}

/**
 * Initialisiert eine Telefonnummer.
 * Dieser muss aus einer Landesvorwahl, einer Ortsvorwahl und einer Teilnehmerkennung bestehen.
 * Die Landesvorwahl wird mit +49 fuer Deutschland und die Ortsvorwahl mit 30 fuer Berlin initialisiert.
 *
 * @param  die_teilnehmerkennung  Die Teilnehmerkennung der Nummer.
 */
Telefonnummer::Telefonnummer(string die_teilnehmerkennung)
{
  initialisiere_telefonnummer(die_teilnehmerkennung);
}

/**
 * Setzt die Teilnehmerkennung der Nummer.
 *
 * @param  die_teilnehmerkennung  Die Teilnehmerkennung der Nummer.
 */
void Telefonnummer::setze_teilnehmerkennung(string die_teilnehmerkennung)
{
  teilnehmerkennung = die_teilnehmerkennung;
}

/**
 * Setzt die Ortsvorwahl der Nummer.
 *
 * @param  die_ortsvorwahl  Die Ortsvorwahl der Nummer.
 */
void Telefonnummer::setze_ortsvorwahl(string die_ortsvorwahl)
{
  ortsvorwahl = die_ortsvorwahl;
}

/**
 * Setzt die Landesvorwahl der Nummer.
 *
 * @param  die_landesvorwahl  Die Landesvorwahl der Nummer.
 */
void Telefonnummer::setze_landesvorwahl(string die_landesvorwahl)
{
  landesvorwahl = die_landesvorwahl;
}

/**
 * Gibt die Teilnehmerkennung der Nummer zurueck.
 *
 * @return  Die Teilnehmerkennung der Nummer.
 */
string Telefonnummer::liefere_teilnehmerkennung() const
{
  return teilnehmerkennung;
}

/**
 * Gibt die Ortsvorwahl der Nummer zurueck.
 *
 * @return  Die Ortsvorwahl der Nummer.
 */
string Telefonnummer::liefere_ortsvorwahl() const
{
  return ortsvorwahl;
}

/**
 * Gibt die Landesvorwahl der Nummer zurueck.
 *
 * @return  Die Landesvorwahl der Nummer.
 */
string Telefonnummer::liefere_landesvorwahl() const
{
  return landesvorwahl;
}

/**
 * Liefert die Gesamte Nummer mit Landesvorwahl und Ortsvorwahl.
 *
 * @return  Die Gesamte Nummer mit Landes- und Ortsvorwahl.
 */
string Telefonnummer::liefere_gesamte_nummer() const
{
  string gesamte_nummer = "";
  if (landesvorwahl != "")
  {
    gesamte_nummer += landesvorwahl + " ";
  }
  if (ortsvorwahl != "")
  {
    gesamte_nummer += ortsvorwahl + " ";
  }
  return gesamte_nummer + teilnehmerkennung;
}

/**
 * Ueberlaedt den < Operator.
 * Prueft ob eine Telefonnummer kleiner als eine andere ist.
 *
 * @param  vergleichsnummer  Die Telefonnummer, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                   Ein true, wenn die Telefonnummer kleiner ist, bzw. ein false, wenn sie gleich oder groesser sein sollte.
 */
bool Telefonnummer::operator<(const Telefonnummer& vergleichsnummer)
{
  return (liefere_gesamte_nummer() < vergleichsnummer.liefere_gesamte_nummer());
}

/**
 * Ueberlaedt den > Operator.
 * Prueft ob eine Telefonnummer groesser als eine andere ist.
 *
 * @param  vergleichsnummer  Die Telefonnummer, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                   Ein true, wenn die Telefonnummer groesser ist, bzw. ein false, wenn sie gleich oder kleiner sein sollte.
 */
bool Telefonnummer::operator>(const Telefonnummer& vergleichsnummer)
{
  return !(*this <= vergleichsnummer);
}

/**
 * Ueberlaedt den == Operator.
 * Prueft ob zwei Telefonnummer gleich sind.
 *
 * @param  vergleichsnummer  Die Telefonnummer, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                   Ein true, wenn die Telefonnummern gleich sind, bzw. ein false, wenn sie ungleich sein sollten.
 */
bool Telefonnummer::operator==(const Telefonnummer& vergleichsnummer)
{
  return (liefere_gesamte_nummer() == vergleichsnummer.liefere_gesamte_nummer());
}

/**
 * Ueberlaedt den != Operator.
 * Prueft ob zwei Telefonnummer ungleich sind.
 *
 * @param  vergleichsnummer  Die Telefonnummer, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                   Ein true, wenn die Telefonnummern ungleich sind, bzw. ein false, wenn sie gleich sein sollten.
 */
bool Telefonnummer::operator!=(const Telefonnummer& vergleichsnummer)
{
  return !(*this == vergleichsnummer);
}

/**
 * Ueberlaedt den <= Operator.
 * Prueft ob eine Telefonnummer kleiner oder gleich einer anderen ist.
 *
 * @param  vergleichsnummer  Die Telefonnummer, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                   Ein true, wenn die Telefonnummer gleich oder kleiner ist, bzw. ein false, wenn groesser sein sollten.
 */
bool Telefonnummer::operator<=(const Telefonnummer& vergleichsnummer)
{
  return (*this < vergleichsnummer || *this == vergleichsnummer);
}

/**
 * Ueberlaedt den >= Operator.
 * Prueft ob eine Telefonnummer groesser oder gleich einer anderen ist.
 *
 * @param  vergleichsnummer  Die Telefonnummer, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                   Ein true, wenn die Telefonnummer gleich oder groesser ist, bzw. ein false, wenn kleiner sein sollten.
 */
bool Telefonnummer::operator>=(const Telefonnummer& vergleichsnummer)
{
  return (*this > vergleichsnummer || *this == vergleichsnummer);
}

/**
 * Initialisiert eine Telefonnummer.
 * Wenn die Landesvorwahl leer gelassen wird, wird diese automatisch auf +49 fuer Deutschland gesetzt.
 * Wird hingegen zusaetzlich die Ortvorwahl leer gelassen, wird diese auf 30 fuer Berlin gesetzt
 * und wenn darueber hinaus noch Teilnehmerkennung leer gelassen wird, wird diese auf 123456 gesetzt.
 *
 * @param  die_teilnehmerkennung  Die Teilnehmerkennung der Nummer. Default 123456.
 * @param  die_ortsvorwahl        Die Ortsvorwahl der Nummer. Default 30.
 * @param  die_landesvorwahl      Die Landesvorwahl der Nummer. Default +49.
 */
void Telefonnummer::initialisiere_telefonnummer(string die_teilnehmerkennung, string die_ortsvorwahl, string die_landesvorwahl)
{
  teilnehmerkennung = die_teilnehmerkennung;
  ortsvorwahl       = die_ortsvorwahl;
  landesvorwahl     = die_landesvorwahl;
}

/**
 * Ueberlaedt den << Operator.
 * Gibt eine Telefonnummer, mit Landes- und Ortsvorwahl, in den Outputstream.
 *
 * @param  ausgabe        Der Outputstream.
 * @param  telefonnummer  Die Telefonnummer, welche in den Outputstream gegeben werden soll.
 *
 * @return                Der Outputstream.
 */
std::ostream& operator<<(std::ostream& ausgabe, const Telefonnummer& telefonnummer)
{
  ausgabe << telefonnummer.liefere_gesamte_nummer();
  return ausgabe;
}

/**
 * Ueberlaedt den >> Operator.
 * Somit kann eine Telefonnummer aus dem Inputstream geholt und eingegeben werden.
 * Der Benutzer muss nacheinander die Landesvorwahl, die Ortsvorwahl und die Teilnehmerkennung eingeben.
 *
 * @param  ausgabe        Der Inputstream.
 * @param  telefonnummer  Die Telefonnummer, welche eingegeben werden soll.
 *
 * @return                Der Inputstream.
 */
std::istream& operator>>(std::istream& eingabe, Telefonnummer& telefonnummer)
{
  string landesvorwahl     = erfasse_string("Bitte die Landesvorwahl eingeben", 10);
  string ortsvorwahl       = erfasse_string("Bitte die Ortsvorwahl eingeben", 10);
  string teilnehmerkennung = erfasse_string("Bitte die Teilnehmerkennung eingeben", 20);
  telefonnummer            = Telefonnummer(teilnehmerkennung, ortsvorwahl, landesvorwahl);
  return eingabe;
}

/**
 * Erzeugt eine zufaellige Telefonnumer mit der deutschen Landesvorwahl.
 *
 * @return  Die zufaellige erzeugte Telefonnummer.
 */
Telefonnummer erzeuge_zufaellige_telefonnummer()
{
  Zufallsgenerierung zufall                  = Zufallsgenerierung();
  string zufaellige_teilnehmerkennung        = zufall.erzeuge_zufaelligen_int(1000000, 9999999);
  string zufaellige_ortsvorwahl              = zufall.erzeuge_zufaelligen_int(30, 999);
  Telefonnummer die_zufaellige_telefonnummer = Telefonnummer(zufaellige_teilnehmerkennung, zufaellige_ortsvorwahl);
  return die_zufaellige_telefonnummer;
}

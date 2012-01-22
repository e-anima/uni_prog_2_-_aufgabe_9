/**
 *  Repraesentiert ein Datum.
 *  Das Datum darf ab den 01.01.1583 existieren, da an diesem Datum der gregorianische Kalendar eingefuehrt wurde
 *  und somit, erst ab diesen Datum, eine einheitliche Berechnung moeglich ist.
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/datum.h"

/**
 * Der Default-Konstruktor.
 * Initialisiert das aktuelle Datum.
 */
Datum::Datum()
{
  time_t zeit  = time(0);
  struct tm *p = localtime(&zeit);
  tag          = p->tm_mday;
  monat        = (p->tm_mon) + 1;
  jahr         = (p->tm_year) + 1900;
}

/**
 * Initialisiert ein Datum.
 * Das Datum darf nicht vor dem 01.01.1583 liegen.
 * Ferner wird das Datum auf Richtigkeit geprueft.
 * Falls das Datum ungueltig ist, wird das aktuelle Datum gesetzt.
 *
 * @param  der_tag    Der Tag des Datums.
 * @param  der_monat  Der Monat des Datums.
 * @param  das_jahr   Das Jahr des Datums.
 */
Datum::Datum(int der_tag, int der_monat, int das_jahr)
{
  if (datum_ok(der_tag, der_monat, das_jahr))
  {
    initialisiere_datum(der_tag, der_monat, das_jahr);
  }
  else
  {
    initialisiere_datum();
  }
}

/**
 * Gibt den Tag des Datums zurueck.
 *
 * @return  Der Tag des Datums.
 */
int Datum::liefere_tag() const
{
  return tag;
}

/**
 * Gibt den Monat des Datums zurueck.
 *
 * @return  Der Monat des Monats.
 */
int Datum::liefere_monat() const
{
  return monat;
}

/**
 * Gibt das Jahr des Datums zurueck.
 *
 * @return  Das Jahr des Monats.
 */
int Datum::liefere_jahr() const
{
  return jahr;
}

/**
 * Gibt das Datums nach DIN 5008 aus.
 * Folgendes Format ist dafuer definiert: YYYY-MM-DD.
 *
 * @return  Das Datum nach DIN 5008.
 */
string Datum::liefere_din_datum() const
{
  std::ostringstream wandler(std::ios::out);
  wandler << jahr << '-';
  if (monat >= 10)
  {
    wandler << monat << '-';
  }
  else
  {
    wandler << '0' << monat << '-';
  }
  if (tag >= 10)
  {
    wandler << tag;
  }
  else
  {
    wandler << '0' << tag;
  }
  return wandler.str();
}

/**
 * Gibt das Datum nach der in Deutschland gebraeuchlichen Schreibeweise aus.
 * Folgendes Format ist dafuer definiert: DD.MM.YYYY.
 * Dieses Datum ist nach DIN 5008 ebenfalls gueltig, aber international nicht kompatibel.
 *
 * @return Das Datum nach der in Deutschland gebrauchlichen Schreibweise.
 */
string Datum::liefere_standarddatum() const
{
  std::ostringstream wandler(std::ios::out);
  if (tag >= 10)
  {
    wandler << tag << '.';
  }
  else
  {
    wandler << '0' << tag << '.';
  }
  if (monat >= 10)
  {
    wandler << monat;
  }
  else
  {
    wandler << '0' << monat;
  }
  wandler << '.' << jahr;
  return wandler.str();
}

/**
 * Liefert das Datum mit dem ausgeschriebenen Monat.
 * Bsp.: 1. Februar 2012
 *
 * @return  Das Datum mit dem ausgeschriebenen Monat.
 */
string Datum::liefere_textdatum() const
{
  string name[] = {"Fehler! Falscher Monat.",
                   "Januar",
                   "Februar",
                   "Maerz",
                   "April",
                   "Mai",
                   "Juni",
                   "Juli",
                   "August",
                   "September",
                   "Oktober",
                   "November",
                   "Dezember"};
  std::ostringstream wandler(std::ios::out);
  wandler << tag << '.' << ' ' << name[monat] << ' ' << jahr;
  return wandler.str();
}

/**
 * Gibt den Wochentag des Datums zurueck.
 * Bsp.: der 07.01.2012 gibt Samstag zurueck.
 *
 * @return  Der Wochentag des Datums.
 */
string Datum::liefere_wochentag() const
{
  string name[] = {"Samstag",
                   "Sonntag",
                   "Monatg",
                   "Dienstag",
                   "Mittwoch",
                   "Donnerstag",
                   "Freitag"};
  return name[liefere_tage() % 7];
}

/**
 * Gibt den Wochentag mit dem Datum zurueck.
 * Bsp.: der 07.01.2012 gibt Samstag, 07.01.2012 zurueck.
 *
 * @return  Der Wochentag und das Datum.
 */
string Datum::liefere_wochentagdatum() const
{
  string datumstext = liefere_wochentag();
  datumstext += ", ";
  datumstext += liefere_textdatum();
  return datumstext;
}

/**
 * Ueberlaedt den < Operator.
 * Prueft ob ein Datum kleiner als das andere ist.
 * Das Datum ist kleiner, wenn das Jahr kleiner ist,
 * oder das Jahr gleich und der Monat kleiner
 * oder auch wenn das Jahr gleich, der Monat gleich und nur der Tag kleiner ist.
 *
 * @param  vergleichsdatum  Das Datum, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                  Ein true, wenn das Datum kleiner ist, bzw. ein false, wenn es gleich oder groesser sein sollte.
 */
bool Datum::operator<(const Datum& vergleichsdatum)
{
  bool jahr_kleiner  = liefere_jahr()  <  vergleichsdatum.liefere_jahr();
  bool jahr_gleich   = liefere_jahr()  == vergleichsdatum.liefere_jahr();
  bool monat_kleiner = liefere_monat() <  vergleichsdatum.liefere_monat();
  bool monat_gleich  = liefere_monat() == vergleichsdatum.liefere_monat();
  bool tag_kleiner   = liefere_tag()   <  vergleichsdatum.liefere_tag();
  return jahr_kleiner ||
         (jahr_gleich && monat_kleiner) ||
         (jahr_gleich && monat_gleich && tag_kleiner);

}

/**
 * Ueberlaedt den > Operator.
 * Prueft ob ein Datum groesser als das andere ist.
 * Das Datum ist groesser, wenn das Jahr groesser ist,
 * oder das Jahr gleich und der Monat groesser
 * oder auch wenn das Jahr gleich, der Monat gleich und nur der Tag groesser ist.
 *
 * @param  vergleichsdatum  Das Datum, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                  Ein true, wenn das Datum groesser ist, bzw. ein false, wenn es gleich oder kleiner sein sollte.
 */
bool Datum::operator>(const Datum& vergleichsdatum)
{
  return !(*this <= vergleichsdatum);
}

/**
 * Ueberlaedt den == Operator.
 * Prueft ob ein Datum gleich ein anderes ist.
 * Die Daten sind gleich, wenn sowohl das Jahr, der Monat, als auch der Tag gleich sind.
 *
 * @param  vergleichsdatum  Das Datum, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                  Ein true, wenn die Daten gleich sind, bzw. ein false, wenn sie ungleich sein sollten.
 */
bool Datum::operator==(const Datum& vergleichsdatum)
{
  return liefere_tag()   == vergleichsdatum.liefere_tag()   &&
         liefere_monat() == vergleichsdatum.liefere_monat() &&
         liefere_jahr()  == vergleichsdatum.liefere_jahr();
}

/**
 * Ueberlaedt den != Operator.
 * Prueft ob ein Datum ungleich ein anderes ist.
 * Die Daten sind ungleich, wenn entweder das Jahr, der Monat, oder der Tag ungleich sind.
 *
 * @param  vergleichsdatum  Das Datum, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                  Ein true, wenn die Daten ungleich sind, bzw. ein false, wenn sie gleich sein sollten.
 */
bool Datum::operator!=(const Datum& vergleichsdatum)
{
  return !(*this == vergleichsdatum);
}

/**
 * Ueberlaedt den <= Operator.
 * Prueft ob ein Datum kleiner oder gleich ein anderes ist.
 * Das Datum ist kleiner, wenn das Jahr kleiner ist,
 * oder das Jahr gleich und der Monat kleiner
 * oder auch wenn das Jahr gleich, der Monat gleich und nur der Tag kleiner ist.
 * Wenn sowohl das Jahr, der Monat und der Tag gleich sind, sind die Daten gleich.
 *
 * @param  vergleichsdatum  Das Datum, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                  Ein true, wenn das Datum kleiner oder gleich ist, bzw. ein false, wenn es groesser sein sollte.
 */
bool Datum::operator<=(const Datum& vergleichsdatum)
{
  return (*this < vergleichsdatum || *this == vergleichsdatum);
}

/**
 * Ueberlaedt den >= Operator.
 * Prueft ob ein Datum kleiner oder gleich ein anderes ist.
 * Das Datum ist groesser, wenn das Jahr groesser ist,
 * oder das Jahr gleich und der Monat groesser
 * oder auch wenn das Jahr gleich, der Monat gleich und nur der Tag groesser ist.
 * Wenn sowohl das Jahr, der Monat und der Tag gleich sind, sind die Daten gleich.
 *
 * @param  vergleichsdatum  Das Datum, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                  Ein true, wenn das Datum groesser oder gleich ist, bzw. ein false, wenn es kleiner sein sollte.
 */
bool Datum::operator>=(const Datum& vergleichsdatum)
{
  return (*this > vergleichsdatum || *this == vergleichsdatum);
}

/**
 * Ueberlaedt den + Operator.
 * Addiert eine Anzahl von Tagen zu einem Datum hinzu.
 * So wird beispielsweise bei 07.01.2012 + 3 der 10.01.2012.
 * Dabei werden auch Monats oder Jahresspruenge beachtet.
 *
 * @param  tage  Die Anzahl der Tage, die zu dem Datum hinzaddiert werden sollen.
 *
 * @return       Das Datum, zu dem die Anzahl der Tage addiert wurden.
 */
Datum Datum::operator+(int tage) const
{
  long anzahl_tage = liefere_tage();
  anzahl_tage += tage;
  return liefere_datum(anzahl_tage);
}

/**
 * Ueberlaedt den - Operator.
 * Subtrahiert eine Anzahl von Tagen von einem Datum.
 * So ergibt beispielsweise die Rechnung 07.01.2012 - 3 den 04.01.2012.
 * Dabei werden auch Monats oder Jahresspruenge beachtet.
 *
 * @param  tage  Die Anzahl der Tage, die vom Datum subtrahiert werden sollen.
 *
 * @return       Das Datum, von dem die Anzahl der Tage subtrahiert wurde.
 */
Datum Datum::operator-(int tage) const
{
  long anzahl_tage = liefere_tage();
  anzahl_tage -= tage;
  return liefere_datum(anzahl_tage);
}

/**
 * Ueberlaedt den - Operator.
 * Gibt die Differenz von zwei Daten zurueck.
 * So ergibt beispielsweise die Rechnung 07.01.2012 - 04.01.2012 die Differenz von 3.
 * Sollte das zweite Datum groesser sein als das erste, wird eine negative Zahl zurueckgegeben.
 *
 * @param  ein_datum  Das Datum, welchen von dem aktuell gesetzten Datum abgezogen werden soll.
 *
 * @return            Die Anzahl der Differenz zwischen den beiden Daten.
 */
int Datum::operator-(const Datum& ein_datum) const
{
  return liefere_tage() - ein_datum.liefere_tage();
}

/**
 * Ueberlaedt den ++ Operator.
 * Das Datum wird um einen Tag erhoeht.
 * So wuerde aus dem ++07.01.2012 der 08.01.2012 werden.
 * Dabei werden auch Monats oder Jahresspruenge beachtet.
 *
 * @return  Das, um eins erhoehte, Datum.
 */
Datum& Datum::operator++()
{
  *this = *this + 1;
  return *this;
}

/**
 * Ueberlaedt den ++ Operator.
 * Das Datum wird um einen Tag erhoeht.
 * So wuerde aus dem 07.01.2012++ der 08.01.2012 werden.
 * Dabei werden auch Monats oder Jahresspruenge beachtet.
 * Zu beachten ist, dass das alte Datum zurueckgegeben wird, nicht die Erhoehung.
 *
 * @return  Das Datum vor der Erhoehung.
 */
Datum Datum::operator++(int)
{
  Datum altes_datum = *this;
  ++*this;
  return altes_datum;
}

/**
 * Prueft ob ein Datum gueltig ist oder nicht.
 * Ein Datum gilt als gueltig, wenn das Jahr groesser oder gleich 1583 ist,
 * der Monat groesser oder gleich 1 ist und kleiner oder gleich 12
 * und wenn der Tag groesser oder gleich 1 ist,
 * bzw. wenn er die maximale Anzahl der Tage in einem Monat nicht ueberschreitet.
 * Richtig:
 * 16.06.1986
 *
 * Falsch:
 * 30.13.1200
 *
 * @param  der_tag    Der Tag des Datums.
 * @param  der_monat  Der Monat des Datums.
 * @param  das_jahr   Das Jahr des Datums.
 *
 * @return Ein true, wenn das Datum gueltig ist, bzw. ein false, wenn das Datum nicht gueltig ist.
 */
bool Datum::datum_ok(int der_tag, int der_monat, int das_jahr)
{
  return (1583      <= das_jahr)  &&
         (das_jahr  <= INT_MAX)   &&
         (1         <= der_monat) &&
         (der_monat <= 12)        &&
         (1         <= der_tag)   &&
         (der_tag   <= liefere_tage_im_monat(der_monat, das_jahr));
}

/**
 * Prueft ob ein Jahr ein Schaltjahr ist.
 *
 * @param  das_jahr  Das Jahr, welches geprueft werden soll, ob es ein Schaltjahr ist oder nicht.
 *
 * @return           Ein true, wenn das Datum ein Schaltjahr ist, bzw. ein false, wenn nicht.
 */
bool Datum::ist_schaltjahr(int das_jahr) const
{
  return (((das_jahr % 4) == 0) &&
          (((das_jahr % 100) != 0) || ((das_jahr % 400) == 0)));
}

/**
 * Gibt ein Datum, anhand einer uebergeben Anzahl von Tagen, zurueck.
 * Dabei wird vom 01.01.1583 gerechnet.
 *
 * @param  tage  Die Anzahl der Tage, die zu dem 01.01.1583 hinzugerechnet werden sollen.
 *
 * @return       Das Datum, welches der Anzahl von Tagen entspricht.
 */
Datum Datum::liefere_datum(long tage) const
{
  long gezaehlte_tage = 0;
  int das_jahr = 0;
  for (das_jahr = 1583; gezaehlte_tage <= tage; das_jahr++)
  {
    gezaehlte_tage += liefere_tage_im_jahr(das_jahr);
  }
  das_jahr--;
  gezaehlte_tage -= liefere_tage_im_jahr(das_jahr);
  int monat = 0;
  for (monat = 1; gezaehlte_tage <= tage; monat++)
  {
    gezaehlte_tage += liefere_tage_im_monat(monat, das_jahr);
  }
  monat--;
  gezaehlte_tage -= liefere_tage_im_monat(monat, das_jahr);
  int tag = (tage - gezaehlte_tage) + 1;
  return Datum(tag, monat, das_jahr);
}

/**
 * Gibt die Anzahl der Tage in einem Jahr zurueck.
 * Dabei werden Schaltjahre beruecksichtigt.
 *
 * @param  das_jahr  Das Jahr, von dem die Tage bestimmt werden sollen.
 *
 * @return           Die Anzahl der Tage in dem Jahr.
 */
int Datum::liefere_tage_im_jahr(int das_jahr) const
{
  return ist_schaltjahr(das_jahr) ? 366 : 365;
}

/**
 * Gibt die Anzahl der Tage in einem Monat eines bestimmten Jahres zurueck.
 * Dabei werden Schaltjahre beruecksichtigt.
 *
 * @param  der_monat  Der Monat, von dem die Tage bestimmt werden sollen.
 * @param  das_jahr   Das Jahr, in dem der Monat liegt, von dem die tage bestimmt werden sollen.
 */
int Datum::liefere_tage_im_monat(int der_monat, int das_jahr) const
{
  int tage[] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int der_tag;
  if ((1 <= der_monat) && (der_monat <= 12))
  {
    if (der_monat == 2 && ist_schaltjahr(das_jahr))
    {
      der_tag = tage[der_monat] + 1;
    }
    else
    {
      der_tag = tage[der_monat];
    }
  }
  else
  {
    der_tag = tage[0];
  }
  return der_tag;
}

/**
 * Gibt die Anzahl von Tagen eines Datums zurueck.
 * Dabei wird von dem 01.01.1583 gerechnet.
 * Der 03.01.1583 wuerde demnach eine 3 zurueck geben.
 *
 * @return  Die Anzahl der Tage eines Datum, vom 01.01.1583 an gerechnet.
 */
long Datum::liefere_tage() const
{
  long anzahl_tage = 0;
  for (long das_jahr = 1583; das_jahr < jahr; das_jahr++)
  {
    anzahl_tage += liefere_tage_im_jahr(das_jahr);
  }
  if (monat != 1)
  {
    for (long der_monat = 0; der_monat < monat; der_monat++)
    {
      anzahl_tage += liefere_tage_im_monat(der_monat, jahr);
    }
  }
  return (anzahl_tage + tag - 1);
}

/**
 * Initialisiert ein Datum.
 * Wenn das Jahr leer gelassen wird, wird automatisch das Jahr 1583 gesetzt.
 * Wird hingegen zusaetzlich der Monat leer gelassen, wird dieser auf 1 gesetzt
 * und wenn darueber hinaus noch der Tag leer gelassen wird, wird dieser ebenfalls auf 1 gesetzt.
 *
 * @param  der_tag   Der Tag des Datums. Default 1.
 * @param  der_monat Der Monat des Datums. Default 1.
 * @param  das_jahr  Das Jahr des Datums. Default 1583.
 */
void Datum::initialisiere_datum(int der_tag, int der_monat, int das_jahr)
{
  tag   = der_tag;
  monat = der_monat;
  jahr  = das_jahr;
}

/**
 * Ueberlaedt den << Operator.
 * Gibt ein Datum, mit der Standardformatierung, in den Outputstream.
 *
 * @param  ausgabe  Der Outputstream.
 * @param  datum    Das Datum, welches in den Outputstream gegeben werden soll.
 *
 * @return          Der Outputstream.
 */
std::ostream& operator<<(std::ostream& ausgabe, const Datum& datum)
{
  ausgabe << datum.liefere_standarddatum();
  return ausgabe;
}

/**
 * Ueberlaedt den >> Operator.
 * Somit kann ein Datum aus dem Inputstream geholt und eingegeben werden.
 * Dabei wird geprueft, ob das Datum gueltig ist oder nicht.
 * Sollte es nicht gueltig sein, wird eine Fehlermeldung ausgegeben und der Benutzer muss erneut ein Datum eingeben.
 *
 * @param  ausgabe  Der Inputstream.
 * @param  datum    Das Datum, welches eingegeben werden soll.
 *
 * @return          Der Inputstream.
 */
std::istream& operator>>(std::istream& eingabe, Datum& datum)
{
  int tag         = 0;
  int monat       = 0;
  int jahr        = 0;
  bool eingabe_ok = false;
  Datum vergleichsdatum(1, 1, 1583);
  Datum eingebenes_datum;
  do
  {
    tag              = erfasse_zahl<int>("Bitte den Tag eingeben", 1, 31);
    monat            = erfasse_zahl<int>("Bitte den Monat eingeben", 1, 12);
    jahr             = erfasse_zahl<int>("Bitte das Jahr eingeben", 1583, INT_MAX);
    eingebenes_datum = Datum(tag, monat, jahr);
    if (eingebenes_datum.liefere_tag() == 1 && eingebenes_datum.liefere_monat() == 1  && eingebenes_datum.liefere_jahr() == 1583)
    {
      eingabe_ok = true;
    }
    else
    {
      eingabe_ok = (eingebenes_datum != vergleichsdatum);
    }
    if (!eingabe_ok)
    {
      cout << "Das Datum ist nicht korrekt." << endl;
    }
  } while (!eingabe_ok);
  datum = Datum(tag, monat, jahr);
  return eingabe;
}

/**
 * Erzeugt ein zufaelliges Datum, welches zwischen zwei Jahren liegen muss, und gibt dieses zurueck.
 * Sollte jahr_min groesser als jahr_max sein, werden die beiden vertauscht.
 *
 * @param  jahr_min  Das kleinere Datum zum erzeugen des Datums. Default = 1583.
 * @param  jahr_max  Das groessere Datum zum erzeugen des Datums. Default = 2011.
 *
 * @return  Das zufaellig erzeugte Datum.
 */
Datum erzeuge_zufaelliges_datum(int jahr_min, int jahr_max)
{
  vertausche<int>(jahr_min, jahr_max);
  Zufallsgenerierung zufall = Zufallsgenerierung();
  int zufaelliges_jahr      = zufall.erzeuge_zufaelligen_int(jahr_min, jahr_max);
  int zufaelliger_monat     = zufall.erzeuge_zufaelligen_int(1, 12);
  int zufaelliger_tag       = zufall.erzeuge_zufaelligen_int(1, 28);
  Datum das_zufaellige_datum = Datum(zufaelliger_tag, zufaelliger_monat, zufaelliges_jahr);
  return das_zufaellige_datum;
}

/**
 *  Repraesentierte eine Zeit.
 *  Diese kann aus Stunden, Minuten und Sekunden bestehen.
 *  Man kann sich diese ausgeben lassen, vergelichen oder auch hochzaehlen bzw. runterzaehlen.
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/zeit.h"

/**
 * Der Default-Konstruktor.
 * Initialisiert die Zeit zu Mitternacht, also 00:00:00.
 */
Zeit::Zeit()
{
  initialisiere_zeit();
}

/**
 * Initialisiert eine Zeit.
 * Prueft die Zeit auf Richtigkeit.
 * Sollte die Zeit zu gross sein, diese Angepasst.
 * So wuerde aus 25:00:00 gleich 01:00:00 werden.
 *
 * @param  die_stunden   Die Stunden der Zeit.
 * @param  die_minuten   Die Minuten der Zeit.
 * @param  die_sekunden  Die Sekunden der Zeit.
 */
Zeit::Zeit(int die_stunden, int die_minuten, int die_sekunden)
{
  initialisiere_zeit(die_stunden, die_minuten, die_sekunden);
}

/**
 * Initialisiert eine Zeit.
 * Prueft die Zeit auf Richtigkeit.
 * Sollte die Zeit zu gross sein, diese Angepasst.
 * So wuerde aus 25:00 gleich 01:00 werden.
 *
 * @param  die_stunden  Die Stunden der Zeit.
 * @param  die_minuten  Die Minuten der Zeit.
 */
Zeit::Zeit(int die_stunden, int die_minuten)
{
  initialisiere_zeit(die_stunden, die_minuten);
}

/**
 * Initialisiert eine Zeit.
 * Prueft die Zeit auf Richtigkeit.
 * Sollte die Zeit zu gross sein, diese Angepasst.
 * So wuerde aus 25 gleich 01 werden.
 *
 * @param  die_stunden  Die Stunden der Zeit.
 */
Zeit::Zeit(int die_stunden)
{
  initialisiere_zeit(die_stunden);
}

/**
 * Initialisiert eine Zeit.
 * Wandelt eine Zeit die nur aus Sekunden besteht in die entsprechende Zeit um.
 * Prueft die Zeit auf Richtigkeit.
 * Sollte die Zeit zu gross sein, diese Angepasst.
 * So wuerde aus 25:00:00 gleich 01:00:00 werden.
 *
 * @param  die_zeit_in_sekunden  Die Zeit in Sekunden.
 */
Zeit::Zeit(long die_zeit_in_sekunden)
{
  int die_stunden  = ((die_zeit_in_sekunden / 60) / 60);
  int die_stunden_in_sekunden = ((die_stunden * 60) * 60);
  int die_minuten  = ((die_zeit_in_sekunden - die_stunden_in_sekunden) / 60);
  int die_minuten_in_sekunden = (die_minuten * 60);
  int die_sekunden = ((die_zeit_in_sekunden - die_stunden_in_sekunden) - die_minuten_in_sekunden);
  initialisiere_zeit(die_stunden, die_minuten, die_sekunden);
}

/**
 * Setzt die Stunden der Zeit.
 *
 * @param  die_stunden  Die Stunden der Zeit.
 */
void Zeit::setze_stunden(int die_stunden)
{
  stunden = (die_stunden >= 24) ? die_stunden % 24 : die_stunden;
}

/**
 * Setzt die Minuten der Zeit.
 *
 * @param  die_minuten  Die Minuten der Zeit.
 */
void Zeit::setze_minuten(int die_minuten)
{
  minuten = (die_minuten >= 60) ? die_minuten % 60 : die_minuten;
}

/**
 * Setzt die Sekunden der Zeit.
 *
 * @param  die_sekunden  Die Sekunden der Zeit.
 */
void Zeit::setze_sekunden(int die_sekunden)
{
  sekunden = (die_sekunden >= 60) ? die_sekunden % 60 : die_sekunden;
}

/**
 * Gibt die Stunden der Zeit zurueck.
 *
 * @return Die Stunden der Zeit.
 */
int Zeit::liefere_stunden() const
{
  return stunden;
}

/**
 * Gibt die Minuten der Zeit zurueck.
 *
 * @return Die Sekunden der Zeit.
 */
int Zeit::liefere_minuten() const
{
  return minuten;
}

/**
 * Gibt die Sekunden der Zeit zurueck.
 *
 * @return Die Sekunden der Zeit.
 */
int Zeit::liefere_sekunden() const
{
  return sekunden;
}

/**
 * Liefert die Zeit in einer Stunden:Minuten schreibweise.
 *
 * @return Die Zeit in einer Stunden:Minuten schreibewiese.
 */
string Zeit::liefere_stunden_und_minuten() const
{
  return setze_fuehrende_null(stunden) + ":" + setze_fuehrende_null(minuten);
}

/**
 * Liefert die Zeit in einer Stunden:Minuten:Sekunden schreibweise.
 *
 * @return Die Zeit in einer Stunden:Minuten:Sekunden schreibewiese.
 */
string Zeit::liefere_stunden_minuten_und_sekunden() const
{
  return liefere_stunden_und_minuten() + ":" + setze_fuehrende_null(sekunden);
}

/**
 * Liefert die Zeit in Sekunden.
 *
 * @return  Die Zeit in Sekunden.
 */
long Zeit::liefere_zeit_in_sekunden() const
{
  long zeit_in_sekunden = sekunden;
  zeit_in_sekunden += (minuten * 60);
  zeit_in_sekunden += ((stunden * 60) * 60);
  return zeit_in_sekunden;
}

/**
 * Initialisiert eine Zeit.
 * Wenn die Sekunden leer gelassen werden, werden diese automatisch auf 0 gesetzt.
 * Wird hingegen zusaetzlich die Minuten leer gelassen werden, werden diese auf 0 gesetzt
 * und wenn darueber hinaus noch die Sekunden leer gelassen werden, werden diese ebenfalls auf 0 gesetzt.
 * Prueft ferner die Zeit auf Richtigkeit.
 * Sollte die Zeit zu gross sein, wird diese angepasst.
 * So wuerde aus 25:62:120 die Zeit 01:02:00 werden.
 *
 * @param  die_stunden   Die Stunden der Zeit. Default 0.
 * @param  die_minuten   Die Minuten der Zeit. Default 0.
 * @param  die_sekunden  Die Sekunden der Zeit. Default 0.
 */
void Zeit::initialisiere_zeit(int die_stunden, int die_minuten, int die_sekunden)
{
  stunden  = (die_stunden  >= 24) ? die_stunden  % 24 : die_stunden;
  minuten  = (die_minuten  >= 60) ? die_minuten  % 60 : die_minuten;
  sekunden = (die_sekunden >= 60) ? die_sekunden % 60 : die_sekunden;
}

/**
 * Setzt an einen Wert eine fuehrende Null, wenn der Wert einstellig ist.
 *
 * @param  wert  Der Wert, an dem eine fuherende Null gesetzt werden soll, wenn dieser einstellig ist.
 *
 * @return       Der Wert als String, mit einer fuhrenden Null, wenn der Wert einstellig war, sonst nur der Wert.
 */
string Zeit::setze_fuehrende_null(int wert) const
{
  string ausgabe = "";
  if (wert < 10)
  {
    ausgabe += "0";
  }
  ausgabe += zahl_zu_string(wert);
  return ausgabe;
}

/**
 * Ueberlaedt den < Operator.
 * Prueft ob eine Zeit kleiner als die andere ist.
 * Die Zeit ist kleiner, wenn die Stunden kleiner sind,
 * oder die Stunden gleich und die Minuten kleiner
 * oder auch wenn die Stunden gleich, der Minuten gleich und nur die Sekunden kleiner sind.
 *
 * @param  vergleichszeit  Die Zeit, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                 Ein true, wenn die Zeit kleiner ist, bzw. ein false, wenn sie gleich oder groesser sein sollte.
 */
bool Zeit::operator<(const Zeit& vergleichszeit)
{
  bool stunden_kleiner  = liefere_stunden()  <  vergleichszeit.liefere_stunden();
  bool stunden_gleich   = liefere_stunden()  == vergleichszeit.liefere_stunden();
  bool minuten_kleiner  = liefere_minuten()  <  vergleichszeit.liefere_minuten();
  bool minuten_gleich   = liefere_minuten()  == vergleichszeit.liefere_minuten();
  bool sekunden_kleiner = liefere_sekunden() <  vergleichszeit.liefere_sekunden();
  return stunden_kleiner ||
         (stunden_gleich && minuten_kleiner) ||
         (stunden_gleich && minuten_gleich && sekunden_kleiner);

}

/**
 * Ueberlaedt den > Operator.
 * Prueft ob eine Zeit groesser als die andere ist.
 * Die Zeit ist groesser, wenn die Stunden groesser sind,
 * oder die Stunden gleich und die Minuten groesser
 * oder auch wenn die Stunden gleich, die Minuten gleich und nur die Sekunden groesser sind.
 *
 * @param  vergleichszeit  Das Datum, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                 Ein true, wenn die Zeit groesser ist, bzw. ein false, wenn sie gleich oder kleiner sein sollte.
 */
bool Zeit::operator>(const Zeit& vergleichszeit)
{
  return !(*this <= vergleichszeit);
}

/**
 * Ueberlaedt den == Operator.
 * Prueft ob eine Zeit gleich ein anderes ist.
 * Die Zeiten sind gleich, wenn sowohl die Stunden, die Minuten, als auch die Sekunden gleich sind.
 *
 * @param  vergleichsdatum  Die Zeit, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                  Ein true, wenn die Zeiten gleich sind, bzw. ein false, wenn sie ungleich sein sollten.
 */
bool Zeit::operator==(const Zeit& vergleichszeit)
{
  return liefere_stunden()  == vergleichszeit.liefere_stunden() &&
         liefere_minuten()  == vergleichszeit.liefere_minuten() &&
         liefere_sekunden() == vergleichszeit.liefere_sekunden();
}

/**
 * Ueberlaedt den != Operator.
 * Prueft ob eine Zeit ungleich ein anderes ist.
 * Die Zeiten sind ungleich, wenn entweder die Stunden, die Minuten, oder die Sekunden ungleich sind.
 *
 * @param  vergleichsdatum  Die Zeiten, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                  Ein true, wenn die Zeiten ungleich sind, bzw. ein false, wenn sie gleich sein sollten.
 */
bool Zeit::operator!=(const Zeit& vergleichszeit)
{
  return !(*this == vergleichszeit);
}

/**
 * Ueberlaedt den <= Operator.
 * Prueft ob eine Zeit kleiner oder gleich ein anderes ist.
 * Die Zeit ist kleiner, wenn die Stunden kleiner sind,
 * oder die Stunden gleich und die Minuten kleiner
 * oder auch wenn die Stunden gleich, die Minuten gleich und nur die Sekunden kleiner sind.
 * Wenn sowohl die Stunden, die Minuten und die Sekunden gleich sind, zaehlen die Zeiten als gleich.
 *
 * @param  vergleichsdatum  Die Zeit, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                  Ein true, wenn die Zeit kleiner oder gleich ist, bzw. ein false, wenn sie groesser sein sollte.
 */
bool Zeit::operator<=(const Zeit& vergleichszeit)
{
  return (*this < vergleichszeit || *this == vergleichszeit);
}

/**
 * Ueberlaedt den >= Operator.
 * Prueft ob eine Zeit kleiner oder gleich ein anderes ist.
 * Die Zeit ist groesser, wenn die Stunden groesser sind,
 * oder die Stunden gleich und die Minuten groesser
 * oder auch wenn die Stunden gleich, die Minuten gleich und nur die Sekunden groesser sind.
 * Wenn sowohl die Stunden, die Minuten und die Sekunden gleich sind, zaehlen die Zeiten als gleich.
 *
 * @param  vergleichsdatum  Die Zeit, mit der der Vergleich durchgefuehrt werden soll.
 *
 * @return                  Ein true, wenn die Zeit groesser oder gleich ist, bzw. ein false, wenn sie kleiner sein sollte.
 */
bool Zeit::operator>=(const Zeit& vergleichszeit)
{
  return (*this > vergleichszeit || *this == vergleichszeit);
}

/**
 * Ueberlaedt den + Operator.
 * Addiert eine Anzahl von Minuten zu einer Zeit hinzu.
 * So wird beispielsweise bei 13:10:12 + 3 die Zeit 13:11:12.
 * Dabei werden auch Minuten- oder Stundenspruenge beachtet.
 *
 * @param  minuten  Die Anzahl der Minuten, die zu der Zeit hinzaddiert werden sollen.
 *
 * @return          Die Zeit, zu dem die Anzahl der Minuten addiert wurden.
 */
Zeit Zeit::operator+(int minuten) const
{
  long zeit_in_sekunden = liefere_zeit_in_sekunden();
  zeit_in_sekunden     += (minuten * 60);
  Zeit neue_zeit        = Zeit(zeit_in_sekunden);
  return neue_zeit;
}

/**
 * Ueberlaedt den + Operator.
 * Addiert eine Zeit zu einer Zeit hinzu.
 * So wird beispielsweise bei 13:10:12 + 01:00:00 die Zeit 14:10:12.
 * Dabei werden auch Minuten- oder Stundenspruenge beachtet.
 *
 * @param  zeit  Die Zeit, die zu der anderen Zeit hinzaddiert werden sollen.
 *
 * @return       Die Zeit, zu dem die Anzahl der Minuten addiert wurden.
 */
Zeit Zeit::operator+(const Zeit& zeit) const
{
  long addierte_zeiten_in_sekunden = liefere_zeit_in_sekunden() + zeit.liefere_zeit_in_sekunden();
  Zeit neue_zeit                   = Zeit(addierte_zeiten_in_sekunden);
  return neue_zeit;
}

/**
 * Ueberlaedt den - Operator.
 * Subtrahiert eine Anzahl von Minuten von einer Zeit.
 * So ergibt beispielsweise die Rechnung 13:10:12 - 3 die Zeit 13:09:12.
 * Dabei werden auch Minuten- oder Stundenspruenge beachtet.
 *
 * @param  minuten  Die Anzahl der Minuten, die von einer Zeit subtrahiert werden sollen.
 *
 * @return          Die Zeit, von der die Minuten subtrahiert wurde.
 */
Zeit Zeit::operator-(int minuten) const
{
  long zeit_in_sekunden = liefere_zeit_in_sekunden();
  zeit_in_sekunden     -= (minuten * 60);
  Zeit neue_zeit        = Zeit(zeit_in_sekunden);
  return neue_zeit;
}

/**
 * Ueberlaedt den - Operator.
 * Gibt die Differenz von zwei Zeiten zurueck.
 * So ergibt beispielsweise die Rechnung 13:17:23 - 12:12:00 eine Differenz von 01:05:23.
 *
 * @param  zeit  Die Zeit, welche von der aktuell gesetzten Zeit abgezogen werden soll.
 *
 * @return       Die Zeit die zwischen den beiden Zeiten liegt.
 */
Zeit Zeit::operator-(const Zeit& zeit) const
{
  long die_differenz     = liefere_zeit_in_sekunden() - zeit.liefere_zeit_in_sekunden();
  Zeit die_differenzzeit = Zeit(die_differenz);
  return die_differenzzeit;
}

/**
 * Ueberlaedt den ++ Operator.
 * Die Zeit wird um eine Minute erhoeht.
 * So wuerde aus ++12:11:23 die Zeit 12:12:23 werden.
 * Dabei werden auch Minuten- oder Stundenspruenge beachtet.
 *
 * @return  Das, um eins erhoehte, Datum.
 */
Zeit& Zeit::operator++()
{
  *this = *this + 1;
  return *this;
}

/**
 * Ueberlaedt den ++ Operator.
 * Die Zeit wird um eine Minute erhoeht.
 * So wuerde aus ++12:11:23 die Zeit 12:12:23 werden.
 * Dabei werden auch Minuten- oder Stundenspruenge beachtet.
 * Zu beachten ist, dass die alte Zeit zurueckgegeben wird, nicht die Erhoehung.
 *
 * @return  Die Zeit vor der Erhoehung.
 */
Zeit Zeit::operator++(int)
{
  Zeit alte_zeit = *this;
  ++*this;
  return alte_zeit;
}

/**
 * Ueberlaedt den -- Operator.
 * Die Zeit wird um eine Minute verringert.
 * So wuerde aus --12:11:23 die Zeit 12:10:23 werden.
 * Dabei werden auch Minuten- oder Stundenspruenge beachtet.
 *
 * @return  Das, um eins verringerte, Datum.
 */
Zeit& Zeit::operator--()
{
  *this = *this - 1;
  return *this;
}

/**
 * Ueberlaedt den -- Operator.
 * Die Zeit wird um eine Minute verringert.
 * So wuerde aus --12:11:23 die Zeit 12:10:23 werden.
 * Dabei werden auch Minuten- oder Stundenspruenge beachtet.
 * Zu beachten ist, dass die alte Zeit zurueckgegeben wird, nicht die Verringerung.
 *
 * @return  Die Zeit vor der Verringerung.
 */
Zeit Zeit::operator--(int)
{
  Zeit alte_zeit = *this;
  --*this;
  return alte_zeit;
}

/**
 * Ueberlaedt den << Operator.
 * Gibt eine Zeit, mit den Stunden, Minuten und Sekunden, in den Outputstream.
 *
 * @param  ausgabe  Der Outputstream.
 * @param  datum    Die Zeit, welche in den Outputstream gegeben werden soll.
 *
 * @return          Der Outputstream.
 */
std::ostream& operator<<(std::ostream& ausgabe, const Zeit& zeit)
{
  ausgabe << zeit.liefere_stunden_minuten_und_sekunden();
  return ausgabe;
}

/**
 * Ueberlaedt den >> Operator.
 * Somit kann eine Zeit aus dem Inputstream geholt und eingegeben werden.
 * Dabei wird geprueft, ob die Zeit gueltig ist oder nicht.
 * Sollte sie nicht gueltig sein, wird eine Fehlermeldung ausgegeben und der Benutzer muss erneut eine Zeit eingeben.
 *
 * @param  ausgabe  Der Inputstream.
 * @param  datum    Die Zeit, welche eingegeben werden soll.
 *
 * @return          Der Inputstream.
 */
std::istream& operator>>(std::istream& eingabe, Zeit& zeit)
{
  int stunden  = erfasse_zahl<int>("Bitte die Stunden eingeben", 0, 23);
  int minuten  = erfasse_zahl<int>("Bitte die Minuten eingeben", 0, 59);
  int sekunden = erfasse_zahl<int>("Bitte die Sekunden eingeben", 0, 59);
  zeit         = Zeit(stunden, minuten, sekunden);
  return eingabe;
}

/**
 * Erzeugt eine zufaellige Zeit und gibt diese zurueck.
 *
 * @return  Die zufaellig erzeugte Zeit.
 */
Zeit erzeuge_zufaellige_zeit()
{
  Zufallsgenerierung zufall = Zufallsgenerierung();
  Zeit die_zufaellige_zeit  = Zeit(zufall.erzeuge_zufaelligen_int(0, 23),
                                   zufall.erzeuge_zufaelligen_int(0, 59),
                                   zufall.erzeuge_zufaelligen_int(0, 59));
  return die_zufaellige_zeit;
}

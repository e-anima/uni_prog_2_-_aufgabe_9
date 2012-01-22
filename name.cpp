/**
 *  Repraesentiert einen Namen.
 *  Ein Name kann aus mehreren Vor- und Nachnamen bestehen.
 *  Namen koennen nachtraeglich geaendert werden.
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/name.h"

/**
 * Der Default Constructor der Klasse.
 * Setzt den Namen auf Max Mustermann.
 */
Name::Name()
{
  anzahl_vornamen  = 1;
  anzahl_nachnamen = 1;
  initialisiere_namen();
}

/**
 * Initialisiert einen Namen.
 * Dieser muss aus einem Vornamen und einem Nachnamen bestehen.
 *
 * @param  der_vorname   Der Vorname des Namen.
 * @param  der_nachname  Der Nachname des Namen.
 */
Name::Name(const string& der_vorname, const string& der_nachname)
{
  anzahl_vornamen  = 1;
  anzahl_nachnamen = 1;
  initialisiere_namen(der_vorname, der_nachname);
}

/**
 * Initialisiert einen Namen.
 * Dieser kann mehrer Vor- und genau einen Nachnamen haben.
 *
 * @param  die_vornamen         Die Vornamen des Namens als Stringarray.
 * @param  die_anzahl_vornamen  Die Anzahl der Vornamen des Namens.
 * @param  der_nachname         Der Nachname des Namen.
 */
Name::Name(const string *die_vornamen, int die_anzahl_vornamen, const string& der_nachname)
{
  anzahl_vornamen  = die_anzahl_vornamen;
  anzahl_nachnamen = 1;
  string die_nachnamen[] = {der_nachname};
  initialisiere_namen(die_vornamen, die_nachnamen);
}

/**
 * Initialisiert einen Namen.
 * Dieser kann genau einen Vor- und mehrer Nachnamen haben.
 *
 * @param  der_vorname           Der Vorname des Namen.
 * @param  die_nachname          Die Nachnamen des Namens als Stringarray.
 * @param  die_anzahl_nachnamen  Die Anzahl der Nachnamen des Namens.
 */
Name::Name(const string& der_vorname, const string *die_nachnamen, int die_anzahl_nachnamen)
{
  anzahl_vornamen  = 1;
  anzahl_nachnamen = die_anzahl_nachnamen;
  string die_vornamen[] = {der_vorname};
  initialisiere_namen(die_vornamen, die_nachnamen);
}

/**
 * Initialisiert einen Namen.
 * Dieser kann mehrer Vor- und mehrere Nachnamen haben.
 *
 * @param  die_vornamen         Die Vornamen des Namens.
 * @param  die_anzahl_vornamen  Die Anzahl der Vornamen des Namens.
 * @param  die_nachname          Die Nachnamen des Namens als Stringarray.
 * @param  die_anzahl_nachnamen  Die Anzahl der Nachnamen des Namens.
 */
Name::Name(const string *die_vornamen, int die_anzahl_vornamen, const string *die_nachnamen, int die_anzahl_nachnamen)
{
  if (die_vornamen  != 0 && die_anzahl_vornamen  > 0 &&
      die_nachnamen != 0 && die_anzahl_nachnamen > 0)
  {
    anzahl_vornamen  = die_anzahl_vornamen;
    anzahl_nachnamen = die_anzahl_nachnamen;
    initialisiere_namen(die_vornamen, die_nachnamen);
  }
  else
  {
    anzahl_vornamen  = 1;
    anzahl_nachnamen = 1;
    initialisiere_namen();
  }
}

/**
 * Der Copy Contructor der Klasse.
 * Kopiert einen bestehenden Namen.
 *
 * @param  original  Der originale Names, welcher kopiert werden soll.
 */
Name::Name(const Name& original)
{
  anzahl_vornamen  = original.anzahl_vornamen;
  anzahl_nachnamen = original.anzahl_nachnamen;
  initialisiere_namen(original.vorname, original.nachname);
}

/**
 * Der Destructor der Klasse.
 * Zerstoert die Vornamen und Nachnamen.
 */
Name::~Name()
{
  delete[] vorname;
  delete[] nachname;
}

/**
 * Gibt alle Vornamen, mit Leerzeichen getrennt, zurueck.
 *
 * @return  Alle Vornamen des Namens.
 */
string Name::liefere_vornamen() const
{
  string alle_vornamen;
  for (int i = 0; i < anzahl_vornamen; i++)
  {
    if (i == 0)
    {
      alle_vornamen += vorname[0];
    }
    else
    {
      alle_vornamen += (" " + vorname[i]);
    }
  }
  return alle_vornamen;
}

/**
 * Gibt alle Nachnamen, mit Leerzeichen getrennt, zurueck.
 *
 * @return  Alle Nachnamen des Namens.
 */
string Name::liefere_nachnamen() const
{
  string alle_nachnamen;
  for (int i = 0; i < anzahl_nachnamen; i++)
  {
    if (i == 0)
    {
      alle_nachnamen += nachname[0];
    }
    else
    {
      alle_nachnamen += (" " + nachname[i]);
    }
  }
  return alle_nachnamen;
}

/**
 * Gibt den gesamten Namen zurueck.
 * Alle Vor- und alle Nachnamen sind mit Leerzeichen getrennt.
 *
 * @return  Der Gesamte Name, mit allen Vor- und Nachnamen, Leerzeichen separiert.
 */
string Name::liefere_namen() const
{
  string die_vornamen = liefere_vornamen();
  string die_nachname = liefere_nachnamen();
  return die_vornamen + " " + die_nachname;
}

/**
 * Gibt die Anzahl der Vornamen zurueck.
 *
 * @return  Die Anzahl der Vornamen.
 */
int Name::liefere_anzahl_vornamen() const
{
  return anzahl_vornamen;
}

/**
 * Gibt die Anzahl der Nachnamen zurueck.
 *
 * @return  Die Anzahl der Nachnamen.
 */
int Name::liefere_anzahl_nachnamen() const
{
  return anzahl_nachnamen;
}

/**
 * Ersetzt alle Vornamen mit einem neuen Vornamen.
 *
 * @param  der_neue_vorname  Der neue Vorname, der gesetzt werden soll.
 */
void Name::ersetze_vornamen(const string& der_neue_vorname)
{
  anzahl_vornamen = 1;
  vorname         = new string[anzahl_vornamen];
  vorname[0]      = der_neue_vorname;
}

/**
 * Ersetzt alle Vornamen durch neue Vornamen.
 *
 * @param  die_vornamen         Die neuen Vornamen, welche gesetzt werden sollen.
 * @param  die_anzahl_vornamen  Die Anzahl der neuen Vornamen.
 */
void Name::ersetze_vornamen(const string *die_vornamen, int die_anzahl_vornamen)
{
  anzahl_vornamen = die_anzahl_vornamen;
  vorname         = new string[anzahl_vornamen];
  for (int namenszaehler = 0; namenszaehler < anzahl_vornamen; ++namenszaehler)
  {
    vorname[namenszaehler] = die_vornamen[namenszaehler];
  }
}

/**
 * Ersetzt alle Nachnamen mit einem neuen Nachnamen.
 *
 * @param  der_neue_nachname  Der neue Nachname der gesetzt werden soll.
 */
void Name::ersetze_nachnamen(const string& der_neue_nachname)
{
  anzahl_nachnamen = 1;
  nachname         = new string[anzahl_nachnamen];
  nachname[0]      = der_neue_nachname;
}

/**
 * Ersetzt alle Nachnamen durch neue Nachnamen.
 *
 * @param  die_nachnamen         Die neuen Nachnamen, welche gesetzt werden sollen.
 * @param  die_anzahl_nachnamen  Die Anzahl der neuen Nachnamen.
 */
void Name::ersetze_nachnamen(const string *die_nachnamen, int die_anzahl_nachnamen)
{
  anzahl_nachnamen = die_anzahl_nachnamen;
  nachname         = new string[anzahl_nachnamen];
  for (int namenszaehler = 0; namenszaehler < anzahl_nachnamen; ++namenszaehler)
  {
    nachname[namenszaehler] = die_nachnamen[namenszaehler];
  }
}

/**
 * Ueberlaedt den == Operator.
 * Prueft ob zwei Namen gleich sind.
 * Die Namen sind gleich, wenn sowohl der Vor- als auch der Nachname gleich sind.
 *
 * @param  der_name  Der Name, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return           Ein true, wenn die Namen gleich sind, bzw. ein false, wenn sie ungleich sein sollten.
 */
bool Name::operator==(const Name& der_name)
{
  return (anzahl_vornamen     == der_name.anzahl_vornamen    &&
          anzahl_nachnamen    == der_name.anzahl_nachnamen   &&
          liefere_vornamen()  == der_name.liefere_vornamen() &&
          liefere_nachnamen() == der_name.liefere_nachnamen());
}

/**
 * Ueberlaedt den != Operator.
 * Prueft ob zwei Namen ungleich sind.
 * Die Namen sind ungleich, wenn der Vor- oder der Nachname ungleich sind.
 *
 * @param  der_name  Der Name, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return           Ein true, wenn die Namen ungleich sind, bzw. ein false, wenn sie gleich sein sollten.
 */
bool Name::operator!=(const Name& der_name)
{
  return !(*this == der_name);
}

/**
 * Ueberlaedt den < Operator.
 * Prueft ob ein Name kleiner als die andere ist.
 * Kleiner bedeutet in diesem zusammenhang frueher im Alphabet.
 * Ein B ist kleiner als ein C.
 * Der Name gilt als kleiner wenn entweder der Nachname kleiner ist
 * oder wenn die Nachnamen gleich, aber der Vorname kleiner ist.
 *
 * @param  der_name  Der Name, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return           Ein true, wenn der Name kleiner ist, bzw. ein false, wenn der Name gleich oder groesser sein sollte.
 */
bool Name::operator<(const Name& der_name)
{
  return (liefere_nachnamen() < der_name.liefere_nachnamen() ||
         (liefere_nachnamen() == der_name.liefere_nachnamen() &&
          liefere_vornamen() < der_name.liefere_vornamen()));
}

/**
 * Ueberlaedt den <= Operator.
 * Prueft ob ein Name kleiner oder gleich wie ein andere ist.
 * Kleiner bedeutet in diesem zusammenhang frueher im Alphabet.
 * Ein B ist als kleiner als ein C.
 * Der Name gilt als kleiner wenn entweder der Nachname kleiner ist
 * oder wenn die Nachnamen gleich, aber der Vorname kleiner ist.
 * Als gleich gilt er wenn sowohl der Vor- als auch der Nachname gleich ist.
 *
 * @param  der_name  Der Name, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return           Ein true, wenn der Name kleiner oder gleich ist, bzw. ein false, wenn er groesser sein sollte.
 */
bool Name::operator<=(const Name& der_name)
{
  return *this == der_name || *this < der_name;
}

/**
 * Ueberlaedt den > Operator.
 * Prueft ob ein Name groesser als die andere ist.
 * Groesser bedeutet in diesem zusammenhang spaeter im Alphabet.
 * Ein C ist als groesser als ein B.
 * Der Name gilt als groesser wenn entweder der Nachname groesser ist
 * oder wenn die Nachnamen gleich, aber der Vorname groesser ist.
 *
 * @param  der_name  Der Name, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return           Ein true, wenn der Name groesser ist, bzw. ein false, wenn der Name gleich oder kleiner sein sollte.
 */
bool Name::operator>(const Name& der_name)
{
  return !(*this <= der_name);
}

/**
 * Ueberlaedt den >= Operator.
 * Prueft ob ein Name groesser als die andere ist.
 * Groesser bedeutet in diesem zusammenhang spaeter im Alphabet.
 * Ein C ist als groesser als ein B.
 * Der Name gilt als groesser wenn entweder der Nachname groesser ist
 * oder wenn die Nachnamen gleich, aber der Vorname groesser ist.
 * Als gleich gilt er wenn sowohl der Vor- als auch der Nachname gleich ist.
 *
 * @param  der_name  Der Name, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return           Ein true, wenn der Name groesser oder gleich ist, bzw. ein false, wenn er kleiner sein sollte.
 */
bool Name::operator>=(const Name& der_name)
{
  return !(*this < der_name);
}

/**
 * Ueberlaedt den = Operator.
 * Erzeugt eine Kopie des Namen.
 *
 * @param  original  Der originale Name, welcher kopiert werden soll.
 */
Name& Name::operator=(const Name& original)
{
  if (this != &original)
  {
    delete [] vorname;
    delete [] nachname;
    anzahl_vornamen  = original.anzahl_vornamen;
    anzahl_nachnamen = original.anzahl_nachnamen;
    initialisiere_namen(original.vorname, original.nachname);
  }
  return *this;
}

/**
 * Initialisiert einen Namen.
 * Wenn der Vorname leer gelassen wird, wird dieser mit Max gesetzt.
 * Wenn der Nachname leer gelassen wird, wird dieser mit Mustermann gesetzt.
 *
 * @param  der_vorname   Der Vorname des Namen. Default Max.
 * @param  der_nachname  Der Nachname des Namen. Default Mustermann.
 */
void Name::initialisiere_namen(const string& der_vorname, const string& der_nachname)
{
  ersetze_vornamen(der_vorname);
  ersetze_nachnamen(der_nachname);
}

/**
 * Initialisiert einen Namen.
 * Es werden alle uebergebenen Vor- und Nachnamen gesetzt.
 *
 * @param  der_vorname   Der Vorname des Namen. Default Max.
 * @param  der_nachname  Der Nachname des Namen. Default Mustermann.
 */
void Name::initialisiere_namen(const string *die_vornamen, const string *die_nachnamen)
{
  ersetze_vornamen(die_vornamen, anzahl_vornamen);
  ersetze_nachnamen(die_nachnamen, anzahl_nachnamen);
}

/**
 * Ueberlaedt den << Operator.
 * Gibt einen Namen, mit allen Vor- und Nachnamen, in den Outputstream.
 *
 * @param  ausgabe  Der Outputstream.
 * @param  name     Der Name, welcher in den Outputstream gegeben werden soll.
 *
 * @return          Der Outputstream.
 */
std::ostream& operator<<(std::ostream& ausgabe, const Name& name)
{
  ausgabe << name.liefere_namen();
  return ausgabe;
}

/**
 * Ueberlaedt den >> Operator.
 * Somit kann ein Name aus dem Inputstream geholt und eingegeben werden.
 * Der Benutzer muss einen Vor- und Nachnamen eingeben.
 *
 * @param  ausgabe  Der Inputstream.
 * @param  name     Der Name, welcher eingegeben werden soll.
 *
 * @return          Der Inputstream.
 */
std::istream& operator>>(std::istream& eingabe, Name& name)
{
  string vorname  = erfasse_string("Bitte den Vornamen eingeben", 100);
  string nachname = erfasse_string("Bitte den Nachnamen eingeben", 100);
  name             = Name(vorname, nachname);
  return eingabe;
}

/**
 * Erzeugt einen zufaelligen Namen anhand von Textdateien.
 *
 * @return  Gibt den zufaelligen Namen zurueck.
 */
Name erzeuge_zufaelligen_namen()
{
  Datei_Handler nachnamen     = Datei_Handler(DATEI_NACHNAMEN);
  Datei_Handler vornamen      = Datei_Handler(DATEI_VORNAMEN);
  string zufaelliger_nachname = nachnamen.liefere_zufaellige_zeile();
  string zufaelliger_vorname  = vornamen.liefere_zufaellige_zeile();
  Name zufaelliger_name       = Name(zufaelliger_vorname, zufaelliger_nachname);
  return zufaelliger_name;
}

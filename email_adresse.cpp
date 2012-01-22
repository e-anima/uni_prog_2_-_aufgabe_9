/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/email_adresse.h"

/**
 * Der Default Konstruktor.
 * Setzt eine Email Adresse.
 * Diese lautet student@uni.de.
 */
Email_Adresse::Email_Adresse()
{
  anzahl_email_adressen = 1;
  email_adressen        = new string[anzahl_email_adressen];
  email_adressen[0]     = "student@uni.de";
}

/**
 * Der Konstruktor der Klasse.
 * Setzt mehrere Email Adressen.
 *
 * @param  die_email_adressen         Die Email Adressen, welche gesetzt werden sollen.
 * @param  die_anzahl_email_adressen  Die Anzahl der Email Adressen, welche gesetzt werden sollen.
 */
Email_Adresse::Email_Adresse(const string* die_email_adressen, const int die_anzahl_email_adressen)
{
  anzahl_email_adressen = die_anzahl_email_adressen;
  email_adressen        = new string[anzahl_email_adressen];
  for (int index = 0; index < anzahl_email_adressen; ++index)
  {
    email_adressen[index] = die_email_adressen[index];
  }
}

/**
 * Der Konstruktor der Klasse.
 * Setzt eine Email Adresse.
 *
 * @param  die_email_adresse  Die Email Adresse die gesetzt werden soll.
 */
Email_Adresse::Email_Adresse(const string die_email_adresse)
{
  anzahl_email_adressen = 1;
  email_adressen        = new string[anzahl_email_adressen];
  email_adressen[0]     = die_email_adresse;
}

/**
 * Der Copy Contructor der Klasse.
 * Kopiert eine bestehende Email Adresse.
 *
 * @param  original  Die originale Email Adressen, welche kopiert werden sollen.
 */
Email_Adresse::Email_Adresse(const Email_Adresse& die_email_adresse)
{
  anzahl_email_adressen = die_email_adresse.liefere_anzahl_der_email_adressen();
  email_adressen        = new string[anzahl_email_adressen];
  for (int index = 0; index < anzahl_email_adressen; ++index)
  {
    email_adressen[index] = die_email_adresse.liefere_email_adresse_ueber_index(index);
  }
}

/**
 * Der Destruktor der Klasse.
 * Zerstoert das Objekt.
 * Gibt den Speicher der Email Adressen frei.
 */
Email_Adresse::~Email_Adresse()
{
  delete [] email_adressen;
}

/**
 * Fuegt eine Email Adresse zur Liste hinzu.
 *
 * @param  die_neue_email_adresse  Die Email Adresse, welche zur Liste hinzugefuegt werden soll.
 */
void Email_Adresse::fuege_email_adresse_hinzu(string die_neue_email_adresse)
{
  if (!addrese_bereits_enthalten(die_neue_email_adresse))
  {
    string* temporaere_adressen = new string[anzahl_email_adressen + 1];
    for (int index = 0; index < anzahl_email_adressen; ++index)
    {
      temporaere_adressen[index] = email_adressen[index];
    }
    ++anzahl_email_adressen;
    temporaere_adressen[anzahl_email_adressen] = die_neue_email_adresse;
    email_adressen = new string[anzahl_email_adressen];
    kopiere_array(email_adressen, temporaere_adressen, anzahl_email_adressen);
    delete [] temporaere_adressen;
  }
}

/**
 * Fuegt mehrere Email Adresse zur Liste hinzu.
 *
 * @param  die_neuen_email_adressen     Die Email Adressen, welche zur Liste hinzugefuegt werden sollen.
 * @param  anzahl_neuer_email_adressen  Die Anzahl der Email Adressen, welche hinzugefuegt werden sollen.
 */
void Email_Adresse::fuege_email_adresse_hinzu(string* die_neuen_email_adressen, int anzahl_neuer_email_adressen)
{
  if (anzahl_email_adressen > 0)
  {
    for (int index = 0; index < anzahl_neuer_email_adressen; ++index)
    {
      fuege_email_adresse_hinzu(die_neuen_email_adressen[index]);
    }
  }
}

/**
 * Entfernt eine Email Adresse aus der Liste anhand dem Index aus der Liste.
 *
 * @param  der_index  Der Index der Email Adresse in der Liste, welche entfernt werden soll.
 *
 * @return            Ein true, wenn die Adresse erfolgreich entfernt wurde, bzw. ein false, wenn sie nicht entfernt werden konnte.
 */
bool Email_Adresse::entferne_email_adresse(int der_index)
{
  int index;
  if (der_index < 0)
  {
    index = 0;
  }
  else if (der_index > anzahl_email_adressen)
  {
    index = anzahl_email_adressen;
  }
  bool wurde_entfernt = false;
  string* temporaere_adressen = new string[anzahl_email_adressen - 1];
  for (int zaehler = 0; zaehler < anzahl_email_adressen; ++zaehler)
  {
    if (index != zaehler)
    {
      temporaere_adressen[zaehler] = email_adressen[zaehler];
      wurde_entfernt = true;
    }
  }
  if (wurde_entfernt)
  {
    --anzahl_email_adressen;
    email_adressen = new string[anzahl_email_adressen];
    kopiere_array(email_adressen, temporaere_adressen, anzahl_email_adressen);
  }
  delete [] temporaere_adressen;
  return wurde_entfernt;
}

/**
 * Entfernt eine Email Adresse aus der Liste.
 *
 * @param  die_email_adresse  Die Email Adresse, welche aus der Liste entfernt werden soll.
 *
 * @return                    Ein true, wenn die Adresse erfolgreich entfernt wurde, bzw. ein false, wenn sie nicht entfernt werden konnte.
 */
bool Email_Adresse::entferne_email_adresse(string die_email_adresse)
{
  bool wurde_entfernt = false;
  if (addrese_bereits_enthalten(die_email_adresse))
  {
    string* temporaere_adressen = new string[anzahl_email_adressen - 1];
    for (int zaehler = 0; zaehler < anzahl_email_adressen; ++zaehler)
    {
      if (die_email_adresse != email_adressen[zaehler])
      {
        temporaere_adressen[zaehler] = email_adressen[zaehler];
        wurde_entfernt = true;
      }
    }
    if (wurde_entfernt)
    {
      --anzahl_email_adressen;
      email_adressen = new string[anzahl_email_adressen];
      kopiere_array(email_adressen, temporaere_adressen, anzahl_email_adressen);
    }
    delete [] temporaere_adressen;
  }
  return wurde_entfernt;
}

/**
 * Gibt alle Email Adressen aus der Liste, Kommasepariert aus.
 *
 * @return  Alle Email Adressen aus der Liste, mit Komma separiert.
 */
string Email_Adresse::liefere_email_adressen() const
{
  stringstream ausgabe(stringstream::out);
  for (int index = 0; index < anzahl_email_adressen; ++index)
  {
    ausgabe << email_adressen[index];
    if (index < (anzahl_email_adressen - 1))
    {
      ausgabe << ", ";
    }
  }
  return ausgabe.str();
}

/**
 * Gibt eine Email Adresse, anhand des Index in der Liste, aus
 *
 * @param  der_index  Der Index der Email Adresse aus der Liste.
 *
 * @return            Die Email Adresse aus der Liste.
 */
string Email_Adresse::liefere_email_adresse_ueber_index(int der_index) const
{
  int der_index_der_email_adresse;
  if (der_index < 0)
  {
    der_index_der_email_adresse = 0;
  }
  else if (der_index > anzahl_email_adressen)
  {
    der_index_der_email_adresse = anzahl_email_adressen;
  }
  return email_adressen[der_index_der_email_adresse];
}

/**
 * Gibt die Anzahl der Email Adressen zurueck.
 *
 * @return  Die Anzahl der Email Adressen.
 */
int Email_Adresse::liefere_anzahl_der_email_adressen() const
{
  return anzahl_email_adressen;
}

/**
 * Ueberlaedt den == Operator.
 * Prueft ob zwei Email Adressen gleich sind.
 * Die Adressen sind gleich, wenn sowohl die Anzahl der Email Adressen, als auch die Email Adresse selber, gleich sind.
 *
 * @param  die_email_adresse  Die Email Adressen, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                    Ein true, wenn die Adressen gleich sind, bzw. ein false, wenn sie ungleich sein sollten.
 */
bool Email_Adresse::operator==(const Email_Adresse& die_email_adresse)
{
  return (liefere_anzahl_der_email_adressen() == die_email_adresse.liefere_anzahl_der_email_adressen() &&
          liefere_email_adressen()            == die_email_adresse.liefere_email_adressen());
}

/**
 * Ueberlaedt den != Operator.
 * Prueft ob zwei Email Adressen ungleich sind.
 * Die Adressen sind ungleich, wenn entweder die Anzahl der Email Adressen oder die Email Adresse selber, ungleich sind.
 *
 * @param  die_email_adresse  Die Email Adressen, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                    Ein true, wenn die Adressen ungleich sind, bzw. ein false, wenn sie gleich sein sollten.
 */
bool Email_Adresse::operator!=(const Email_Adresse& die_email_adresse)
{
  return !(*this == die_email_adresse);
}

/**
 * Ueberlaedt den < Operator.
 * Prueft ob ein Email Adresse kleiner als die andere ist.
 * Kleiner bedeutet in diesem zusammenhang frueher im Alphabet.
 * Ein B ist kleiner als ein C.
 * Die Adresse gilt als kleiner wenn der Reihe nach, eine der Email Adressen kleiner ist,
 * als die entsprechende in den zu vergleichenden Email Adressen.
 *
 * @param  die_email_adresse  Die Email Adressen, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                    Ein true, wenn die Adresse kleiner ist, bzw. ein false, wenn sie groesser sein sollte.
 */
bool Email_Adresse::operator<(const Email_Adresse& die_email_adresse)
{
  return liefere_email_adressen() < die_email_adresse.liefere_email_adressen();
}

/**
 * Ueberlaedt den <= Operator.
 * Prueft ob ein Email Adresse kleiner oder gleich einer andere ist.
 * Kleiner bedeutet in diesem zusammenhang frueher im Alphabet.
 * Ein B ist kleiner als ein C.
 * Die Adresse gilt als kleiner wenn der Reihe nach, eine der Email Adressen kleiner ist,
 * als die entsprechende in den zu vergleichenden Email Adressen.
 * Die Adressen sind gleich, wenn sowohl die Anzahl der Email Adressen, als auch die Email Adresse selber, gleich sind.
 *
 * @param  die_email_adresse  Die Email Adressen, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                    Ein true, wenn die Adresse kleiner oder gleich ist, bzw. ein false, wenn sie groesser sein sollte.
 */
bool Email_Adresse::operator<=(const Email_Adresse& die_email_adresse)
{
  return (*this < die_email_adresse || *this == die_email_adresse);
}

/**
 * Ueberlaedt den > Operator.
 * Prueft ob ein Email Adresse groesser als die andere ist.
 * Groesser bedeutet in diesem zusammenhang spaeter im Alphabet.
 * Ein C ist groesser als ein B.
 * Die Adresse gilt als groesser wenn der Reihe nach, eine der Email Adressen groesser ist,
 * als die entsprechende in den zu vergleichenden Email Adressen.
 *
 * @param  die_email_adresse  Die Email Adressen, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                    Ein true, wenn die Adresse groesser ist, bzw. ein false, wenn sie kleiner sein sollte.
 */
bool Email_Adresse::operator>(const Email_Adresse& die_email_adresse)
{
  return liefere_email_adressen() > die_email_adresse.liefere_email_adressen();
}

/**
 * Ueberlaedt den >= Operator.
 * Prueft ob ein Email Adresse groesser als die andere ist.
 * Groesser bedeutet in diesem zusammenhang spaeter im Alphabet.
 * Ein C ist groesser als ein B.
 * Die Adresse gilt als groesser wenn der Reihe nach, eine der Email Adressen groesser ist,
 * als die entsprechende in den zu vergleichenden Email Adressen.
 * Die Adressen sind gleich, wenn sowohl die Anzahl der Email Adressen, als auch die Email Adresse selber, gleich sind.
 *
 * @param  die_email_adresse  Die Email Adressen, mit dem der Vergleich durchgefuehrt werden soll.
 *
 * @return                    Ein true, wenn die Adresse groesser oder gleich ist, bzw. ein false, wenn sie kleiner sein sollte.
 */
bool Email_Adresse::operator>=(const Email_Adresse& die_email_adresse)
{
  return (*this > die_email_adresse || *this == die_email_adresse);
}

/**
 * Ueberlaedt den = Operator.
 * Erzeugt eine Kopie der Email Adressen.
 *
 * @param  original  Die originalen Email Adressen, welche kopiert werden sollen.
 */
Email_Adresse& Email_Adresse::operator=(const Email_Adresse& original)
{
  anzahl_email_adressen = original.liefere_anzahl_der_email_adressen();
  email_adressen        = new string[anzahl_email_adressen];
  for (int index = 0; index < anzahl_email_adressen; ++index)
  {
    email_adressen[index] = original.liefere_email_adresse_ueber_index(index);
  }
  return *this;
}

/**
 * Prueft ob die Email Adresse bereits in der Liste enthalten ist oder nicht.
 *
 * @param  zu_suchende_adresse  Die Adresse, welche in der Liste gesucht werden soll.
 *
 * @return                      Ein true, wenn die Email Adresse bereits in der Liste enthalten ist, bzw. ein false, wenn sie nicht enthalten ist.
 */
bool Email_Adresse::addrese_bereits_enthalten(string zu_suchende_adresse) const
{
  bool ist_enthalten = false;
  for (int index = 0; index < anzahl_email_adressen && !ist_enthalten; ++index)
  {
    if (zu_suchende_adresse == email_adressen[index])
    {
      ist_enthalten = true;
    }
  }
  return ist_enthalten;
}

/**
 * Ueberlaedt den << Operator.
 * Gibt die Email-Adresse, mit allen Daten, in den Outputstream.
 *
 * @param  ausgabe        Der Outputstream.
 * @param  email_adresse  Der Email-Adresse, welche in den Outputstream gegeben werden soll.
 *
 * @return                Der Outputstream.
 */
std::ostream& operator<<(std::ostream& ausgabe, const Email_Adresse& email_adresse)
{
  ausgabe << email_adresse.liefere_email_adressen();
  return ausgabe;
}

/**
 * Ueberlaedt den >> Operator.
 * Somit koennen die Email-Adressen aus dem Inputstream geholt und eingegeben werden.
 *
 * @param  ausgabe        Der Inputstream.
 * @param  email_adresse  Die Email-Adresse, welcher eingegeben werden soll.
 *
 * @return                Der Inputstream.
 */
std::istream& operator>>(std::istream& eingabe, Email_Adresse& email_adresse)
{
  string die_email_adresse = erfasse_string("Bitte geben Sie die Email-Adresse ein", 255);
  email_adresse = Email_Adresse(die_email_adresse);
  return eingabe;
}

/**
 * Erzeugt eine zufaellige Email-Adresse und gibt diese zurueck.
 *
 * @return  Die zufaellig erzeugt Email-Adresse.
 */
Email_Adresse erzeuge_zufaellige_email_adresse()
{
  Datei_Handler emails            = Datei_Handler(DATEI_EMAILS);
  Datei_Handler nachnamen         = Datei_Handler(DATEI_NACHNAMEN);
  Datei_Handler vornamen          = Datei_Handler(DATEI_VORNAMEN);
  string zufaelliger_vorname      = vornamen.liefere_zufaellige_zeile();
  string zufaelliger_nachename    = nachnamen.liefere_zufaellige_zeile();
  string zufaelliges_email_suffix = emails.liefere_zufaellige_zeile();
  Email_Adresse die_zufaellige_email_adresse = Email_Adresse(zufaelliger_vorname + "." + zufaelliger_nachename + "@" + zufaelliges_email_suffix);
  return die_zufaellige_email_adresse;
}

/**
 *  Repraesentiert eine Adresse.
 *  Eine Adresse hat neben den Daten aus der Klasse Ort, auch noch eine Strasse, eine Hausnummer und eine Postleitzahl.
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/adresse.h"

/**
 * Der Default Constructor der Klasse.
 * Setzt den Ort Berlin, in dem Landesteil Berlin, welches im Land Deutschland liegt.
 * Weiterhin wird die Postleitzahl auf 12345, die Strasse auf Musterstrasse und die Hausnummer auf 0 gesetzt.
 */
Adresse::Adresse()
{
  initialisiere_adresse();
}

/**
 * Initialisiert eine Adresse.
 * Diese muss aus einem Ort, einer Postleitzahl, einer Strasse und einer Hausnummer bestehen.
 *
 * @param  der_ort           Der Ort der Adresse.
 * @param  die_postleitzahl  Die Postleitzahl der Adresse.
 * @param  die_strasse       Die Strasse der Adresse.
 * @param  die_hausnummer    Die Hausnummer der Adresse.
 */
Adresse::Adresse(const Ort& der_ort, const int& die_postleitzahl, const string& die_strasse, const int& die_hausnummer)
        :Ort(der_ort)
{
  initialisiere_adresse(die_postleitzahl, die_strasse, die_hausnummer);
}

/**
 * Initialisiert eine Adresse.
 * Diese muss aus einem Ort, einer Postleitzahl und einer Strasse bestehen.
 * Die Hausnummer mit 0 initialisiert.
 *
 * @param  der_ort           Der Ort der Adresse.
 * @param  die_postleitzahl  Die Postleitzahl der Adresse.
 * @param  die_strasse       Die Strasse der Adresse.
 */
Adresse::Adresse(const Ort& der_ort, const int& die_postleitzahl, const string& die_strasse)
        :Ort(der_ort)
{
  initialisiere_adresse(die_postleitzahl, die_strasse);
}

/**
 * Initialisiert eine Adresse.
 * Diese muss aus einem Ort und einer Postleitzahl bestehen.
 *
 * @param  der_ort           Der Ort der Adresse.
 * @param  die_postleitzahl  Die Postleitzahl der Adresse.
 * Die Strasse wird mit Musterstrasse und die Hausnummer mit 0 initialisiert.
 */
Adresse::Adresse(const Ort& der_ort, const int& die_postleitzahl)
        :Ort(der_ort)
{
  initialisiere_adresse(die_postleitzahl);
}

/**
 * Initialisiert eine Adresse.
 * Diese muss aus einem Ort bestehen.
 * Die Postleitzahl wird mit 12345 initialisiert,
 * die Strasse mit Musterstrasse und die Hausnummer mit 0.
 *
 * @param  der_ort           Der Ort der Adresse.
 */
Adresse::Adresse(const Ort& der_ort)
        :Ort(der_ort)
{
  initialisiere_adresse();
}

/**
 * Initialisiert eine Adresse.
 * Diese muss aus einem Ortsnamen, einem Land, einem Landesteil fuer den Ort bestehen.
 * Weiterhin muss die Postleitzahl, die Strasse und die Hausnummer uebergeben werden.
 *
 * @param  der_name          Der Name der Adresse.
 * @param  das_land          Das Land der Adresse.
 * @param  das_landesteil    Das Landesteil der Adresse.
 * @param  die_postleitzahl  Die Postleitzahl der Adresse.
 * @param  die_strasse       Die Strasse der Adresse.
 * @param  die_hausnummer    Die Hausnummer der Adresse.
 */
Adresse::Adresse(const string& der_name, const string& das_land, const string& das_landesteil, const int& die_postleitzahl, const string& die_strasse, const int& die_hausnummer)
        :Ort(der_name, das_land, das_landesteil)
{
  initialisiere_adresse(die_postleitzahl, die_strasse, die_hausnummer);
}

/**
 * Initialisiert eine Adresse.
 * Diese muss aus einem Ortsnamen, einem Land, einem Landesteil fuer den Ort bestehen.
 * Weiterhin muss die Postleitzahl und die Strasse uebergeben werden.
 * Die Hausnummer wird mit 0 initialisiert.
 *
 * @param  der_name          Der Name der Adresse.
 * @param  das_land          Das Land der Adresse.
 * @param  das_landesteil    Das Landesteil der Adresse.
 * @param  die_postleitzahl  Die Postleitzahl der Adresse.
 * @param  die_strasse       Die Strasse der Adresse.
 */
Adresse::Adresse(const string& der_name, const string& das_land, const string& das_landesteil, const int& die_postleitzahl, const string& die_strasse)
        :Ort(der_name, das_land, das_landesteil)
{
  initialisiere_adresse(die_postleitzahl, die_strasse);
}

/**
 * Initialisiert eine Adresse.
 * Diese muss aus einem Ortsnamen, einem Land, einem Landesteil fuer den Ort bestehen.
 * Weiterhin muss die Strasse uebergeben werden.
 * Die Strasse wird mit Musterstrasse und die Hausnummer mit 0 initialisiert.
 *
 * @param  der_name          Der Name der Adresse.
 * @param  das_land          Das Land der Adresse.
 * @param  das_landesteil    Das Landesteil der Adresse.
 * @param  die_postleitzahl  Die Postleitzahl der Adresse.
 */
Adresse::Adresse(const string& der_name, const string& das_land, const string& das_landesteil, const int& die_postleitzahl)
        :Ort(der_name, das_land, das_landesteil), postleitzahl(die_postleitzahl)
{
  initialisiere_adresse(die_postleitzahl);
}

/**
 * Initialisiert eine Adresse.
 * Diese muss nur aus einem Ortsnamen, einem Land, einem Landesteil fuer den Ort bestehen.
 * Die Postleitzahl wird mit 12345, die Strasse mit Musterstrasse und die Hausnummer mit 0 initialisiert.
 *
 * @param  der_name          Der Name der Adresse.
 * @param  das_land          Das Land der Adresse.
 * @param  das_landesteil    Das Landesteil der Adresse.
 */
Adresse::Adresse(const string& der_name, const string& das_land, const string& das_landesteil)
        :Ort(der_name, das_land, das_landesteil)
{
  initialisiere_adresse();
}

/**
 * Initialisiert eine Adresse.
 * Diese muss aus einem Ortsnamen und einem Land fuer den Ort bestehen.
 * Die Postleitzahl wird mit 12345, die Strasse mit Musterstrasse und die Hausnummer mit 0 initialisiert.
 *
 * @param  der_name          Der Name der Adresse.
 * @param  das_land          Das Land der Adresse.
 */
Adresse::Adresse(const string& der_name, const string& das_land)
        :Ort(der_name, das_land)
{
  initialisiere_adresse();
}

/**
 * Initialisiert eine Adresse.
 * Diese muss nur aus einem Ortsnamen bestehen.
 * Die Postleitzahl wird mit 12345, die Strasse mit Musterstrasse und die Hausnummer mit 0 initialisiert.
 *
 * @param  der_name          Der Name der Adresse.
 */
Adresse::Adresse(const string& der_name)
        :Ort(der_name)
{
  initialisiere_adresse();
}

/**
 * Setzt die Hausnummer der Adresse.
 *
 * @param  die_hausnummer  Die Hausnummer der Adresse.
 */
void Adresse::setze_hausnummer(const int& die_hausnummer)
{
  hausnummer = die_hausnummer;
}

/**
 * Setzt die Postleitzahl der Adresse.
 *
 * @param  die_postleitzahl  Die Postleitzahl der Adresse.
 */
void Adresse::setze_postleitzahl(const int& die_postleitzahl)
{
  postleitzahl = die_postleitzahl;
}

/**
 * Setzt die Strasse der Adresse.
 *
 * @param  die_strasse  Die Strasse der Adresse.
 */
void Adresse::setze_strasse(const string& die_strasse)
{
  strasse = die_strasse;
}

/**
 * Gibt die Hausnummer der Adresse zurueck.
 *
 * @return  Die Hausnummer der Adresse.
 */
int Adresse::liefere_hausnummer() const
{
  return hausnummer;
}

/**
 * Gibt die Postleitzahl der Adresse zurueck.
 *
 * @return  Die Postleitzahl der Adresse.
 */
int Adresse::liefere_postleitzahl() const
{
  return postleitzahl;
}

/**
 * Gibt die Strasse der Adresse zurueck.
 *
 * @return  Die Strasse der Adresse.
 */
string Adresse::liefere_strasse() const
{
  return strasse;
}

string Adresse::liefere_ortsbeschreibung() const
{
  string adresse = "";
  string hausnummer_als_string   = zahl_zu_string(hausnummer);
  string postleitzahl_als_string = zahl_zu_string(postleitzahl);
  if (strasse != "")
  {
    adresse += strasse;
  }
  if (hausnummer_als_string != "")
  {
    adresse += " "  + hausnummer_als_string;
  }
  if (postleitzahl_als_string != "")
  {
    adresse += ", "  + postleitzahl_als_string;
  }
  adresse += ", " + Ort::liefere_ortsbeschreibung();
  return adresse;
}

bool Adresse::operator<(const Adresse& vergleichsadresse)
{
  return liefere_ortsbeschreibung() < vergleichsadresse.liefere_ortsbeschreibung();
}

bool Adresse::operator>(const Adresse& vergleichsadresse)
{
  return !(*this <= vergleichsadresse);
}

bool Adresse::operator==(const Adresse& vergleichsadresse)
{
  return liefere_ortsbeschreibung() == vergleichsadresse.liefere_ortsbeschreibung();
}

bool Adresse::operator!=(const Adresse& vergleichsadresse)
{
  return !(*this == vergleichsadresse);
}

bool Adresse::operator<=(const Adresse& vergleichsadresse)
{
  return (*this < vergleichsadresse || *this == vergleichsadresse);
}

bool Adresse::operator>=(const Adresse& vergleichsadresse)
{
  return (*this > vergleichsadresse || *this == vergleichsadresse);
}

/**
 * Initialisiert eine Datum.
 * Wenn die Hausnummer leer gelassen wird, wird sie automatisch auf 0 gesetzt.
 * Wird hingegen zusaetzlich die Strasse leer gelassen, wird diese auf "Musterstrasse" gesetzt
 * und wenn darueber hinaus noch die Postleitzahl leer gelassen wird, wird diese auf 12345 gesetzt.
 *
 * @param  die_postleitzahl   Die Postleitzahl der Adresse. Default 12345.
 * @param  die_strasse        Die Strasse der Adresse. Default "Musterstrasse".
 * @param  die_hausnummer     Die Hausnummer der Adresse. Default 0.
 */
void Adresse::initialisiere_adresse(int die_postleitzahl, string die_strasse, int die_hausnummer)
{
  postleitzahl = die_postleitzahl;
  strasse      = die_strasse;
  hausnummer   = die_hausnummer;
}

/**
 * Ueberlaedt den << Operator.
 * Gibt einen Ort, mit der Standardformatierung, in den Outputstream.
 *
 * @param  ausgabe  Der Outputstream.
 * @param  datum    Der Ort, welcher in den Outputstream gegeben werden soll.
 *
 * @return          Der Outputstream.
 */
std::ostream& operator<<(std::ostream& ausgabe, const Adresse& adresse)
{
  ausgabe << adresse.liefere_ortsbeschreibung();
  return ausgabe;
}

/**
 * Ueberlaedt den >> Operator.
 * Somit kann ein Ort aus dem Inputstream geholt und eingegeben werden.
 * Der Benutzer muss nach einander den Namen, das Land und das Landesteil eingeben.
 *
 * @param  ausgabe  Der Inputstream.
 * @param  datum    Der Ort, welcher eingegeben werden soll.
 *
 * @return          Der Inputstream.
 */
std::istream& operator>>(std::istream& eingabe, Adresse& adresse)
{
  Ort der_ort;
  eingabe >> der_ort;
  string strasse      = erfasse_string("Bitte die Strasse eingeben", 100);
  int hausnummer      = erfasse_zahl<int>("Bitte die Hausnummer eingeben");
  int postleitzahl    = erfasse_zahl<int>("Bitte die Postleitzahl, eingeben", 10000, 99999);
  adresse             = Adresse(der_ort, postleitzahl, strasse, hausnummer);
  return eingabe;
}

/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef EMAIL_ADRESSE_H
#define EMAIL_ADRESSE_H

#include <string>
#include "array_helfer.h"
#include "datei_handler.h"
#include "eingabe.h"

using namespace std;

class Email_Adresse
{
  private:
    /** Die einzelnen Email Adressen. **/
    string* email_adressen;
    /** Die Anzahl der Email Adressen. **/
    int anzahl_email_adressen;

  public:
    Email_Adresse();
    Email_Adresse(const string* die_email_adressen, const int die_anzahl_email_adressen);
    Email_Adresse(const string die_email_adresse);
    Email_Adresse(const Email_Adresse& die_email_adresse);

    virtual ~Email_Adresse();

    void fuege_email_adresse_hinzu(string die_neue_email_adresse);
    void fuege_email_adresse_hinzu(string* die_neuen_email_adressen, int anzahl_neuer_email_adressen);
    bool entferne_email_adresse(int der_index);
    bool entferne_email_adresse(string die_email_adresse);

    string liefere_email_adressen() const;
    string liefere_email_adresse_ueber_index(int index) const;
    int liefere_anzahl_der_email_adressen() const;

    bool operator==(const Email_Adresse& die_email_adresse);
    bool operator!=(const Email_Adresse& die_email_adresse);
    bool operator<(const Email_Adresse& die_email_adresse);
    bool operator<=(const Email_Adresse& die_email_adresse);
    bool operator>(const Email_Adresse& die_email_adresse);
    bool operator>=(const Email_Adresse& die_email_adresse);
    Email_Adresse& operator=(const Email_Adresse& original);

  private:
    bool addrese_bereits_enthalten(string zu_suchende_adresse) const;
};

std::ostream& operator<<(std::ostream& ausgabe, const Email_Adresse& email_adresse);
std::istream& operator>>(std::istream& eingabe, Email_Adresse& email_adresse);

Email_Adresse erzeuge_zufaellige_email_adresse();

#endif

/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef NAME_H
#define NAME_H

#include <string>

using namespace std;


/*class Name
{
  private:
    int anzahl_vornamen;
    string *vorname;
    int anzahl_nachnamen;
    string *nachname;

  public:
    Name();
    Name(const string& der_vorname, const string& der_nachname);
    Name(const string *die_vornamen, int anzahl_vornamen, const string& der_nachname);
    Name(const string& der_vorname, const string *die_nachnamen, int anzahl_nachnamen);
    Name(const string *die_vornamen, int anzahl_vornamen, const string *die_nachnamen, int anzahl_nachnamen);

    Name(const Name& original);

    virtual ~Name();

    string liefere_vornamen() const;
    string liefere_nachnamen() const;
    string liefere_namen() const;
    int liefere_anzahl_vornamen() const;
    int liefere_anzahl_nachnamen() const;
    void ersetze_vornamen(const string& der_neue_vorname);
    void ersetze_vornamen(const string *die_vornamen, int anzahl_vornamen);
    void ersetze_nachnamen(const string& der_neue_nachname);
    void ersetze_nachnamen(const string *die_nachnamen, int anzahl_nachnamen);

    bool operator==(const Name& der_name);
    bool operator!=(const Name& der_name);
    bool operator<(const Name& der_name);
    bool operator<=(const Name& der_name);
    bool operator>(const Name& der_name);
    bool operator>=(const Name& der_name);
    Name& operator=(const Name& original);

  private:
    void initialisiere_namen(const string& der_vorname = "Max", const string& der_nachname = "Mustermann");
    void initialisiere_namen(const string *die_vornamen, const string *die_nachnamen);
};*/

#endif

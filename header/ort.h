/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef ORT_H
#define ORT_H

#include <iomanip>
#include <iostream>
#include <string>
#include "beschreibbar.h"
#include "eingabe.h"
#include "zufallsgenerierung.h"

using std::string;

class Ort : public Beschreibbar
{
  private:
    /** Der Name des Ortes. **/
    string ortsname;
    /** Das Land in dem der Ort liegt. **/
    string land;
    /** Der Landesteil in dem der Ort liegt. **/
    string landesteil;

  public:
    Ort();
    Ort(const string& der_name, const string& das_land, const string& das_landesteil);
    Ort(const string& der_name, const string& das_land);
    Ort(const string& der_name);

    void setze_land(const string& das_land);
    void setze_landesteil(const string& das_landesteil);
    void setze_name(const string& der_name);

    string liefere_land() const;
    string liefere_landesteil() const;
    string liefere_ortsname() const;

    virtual string liefere_beschreibung() const;

    bool operator<(const Ort& vergleichsort);
    bool operator>(const Ort& vergleichsort);
    bool operator==(const Ort& vergleichsort);
    bool operator!=(const Ort& vergleichsort);
    bool operator<=(const Ort& vergleichsort);
    bool operator>=(const Ort& vergleichsort);
};

std::ostream& operator<<(std::ostream& ausgabe, const Ort& ort);
std::istream& operator>>(std::istream& eingabe, Ort& ort);

Ort erzeuge_zufaelligen_ort();

#endif

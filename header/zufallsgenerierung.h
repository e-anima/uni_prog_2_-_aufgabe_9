/**
 * Repräsentiert eine Zufallsgenerator der diverse zufaellige Zahlen erzeugen kann.
 *
 * @author: Markus Paeschke (531524)
 */

#ifndef ZUFALLSGENERIERUNG_H
#define ZUFALLSGENERIERUNG_H

#include <climits>
#include <ctime>
#include <cstdlib>
#include <limits>
#include <iostream>

using namespace std;

class Zufallsgenerierung
{
  public:
    Zufallsgenerierung();
    
    void setze_srand(const size_t srand_wert);
    
    long erzeuge_zufaelligen_long(const long min, const long max) const;
    long erzeuge_zufaelligen_long() const;
    int erzeuge_zufaelligen_int(const int min, const int max) const;
    int erzeuge_zufaelligen_int() const;
    short erzeuge_zufaelligen_short(const short min, const short max) const;
    short erzeuge_zufaelligen_short() const;
    long double erzeuge_zufaelligen_long_double(const long double min, const long double max) const;
    long double erzeuge_zufaelligen_long_double() const;
    double erzeuge_zufaelligen_double(const double min, const double max) const;
    double erzeuge_zufaelligen_double() const;
    float erzeuge_zufaelligen_float(const float min, const float max) const;
    float erzeuge_zufaelligen_float() const;
};

#endif

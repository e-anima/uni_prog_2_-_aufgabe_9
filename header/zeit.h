/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef ZEIT_H
#define ZEIT_H

#include <iomanip>
#include <iostream>
#include <string>
#include "eingabe.h"
#include "helfer.h"

class Zeit
{
  private:
    int stunden;
    int minuten;
    int sekunden;

  public:
    Zeit();
    Zeit(int die_stunden, int die_minuten, int die_sekunden);
    Zeit(int die_stunden, int die_minuten);
    Zeit(int die_stunden);
    Zeit(long die_zeit_in_sekunden);

    void setze_stunden(int die_stunden);
    void setze_minuten(int die_minuten);
    void setze_sekunden(int die_sekunden);

    int liefere_stunden() const;
    int liefere_minuten() const;
    int liefere_sekunden() const;
    string liefere_stunden_und_minuten() const;
    string liefere_stunden_minuten_und_sekunden() const;
    long liefere_zeit_in_sekunden() const;

    bool operator<(const Zeit& vergleichszeit);
    bool operator>(const Zeit& vergleichszeit);
    bool operator==(const Zeit& vergleichszeit);
    bool operator!=(const Zeit& vergleichszeit);
    bool operator<=(const Zeit& vergleichszeit);
    bool operator>=(const Zeit& vergleichszeit);
    Zeit operator+(int tage) const;
    Zeit operator+(const Zeit& zeit) const;
    Zeit operator-(int minuten) const;
    Zeit operator-(const Zeit& zeit) const;
    Zeit& operator++();
    Zeit operator++(int);
    Zeit& operator--();
    Zeit operator--(int);


  private:
    void initialisiere_zeit(int die_stunden = 0, int die_minuten = 0, int die_sekunden = 0);
    string setze_fuehrende_null(int wert) const;
};

std::ostream& operator<<(std::ostream& ausgabe, const Zeit& zeit);
std::istream& operator>>(std::istream& eingabe, Zeit& zeit);

#endif

/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef HELFER_H
#define HELFER_H

#include <climits>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void setze_schalter(ios_base::fmtflags format);

/**
 * Prueft ob eine Zahl eine gerade ist oder nicht.
 *
 * @param  zahl  Die Zahl, die geprueft werden soll, ob sie gerade ist.
 *
 * @return       Ein boolscher Wert, ob die Zahl gerade ist (true) oder nicht (false).
 */
template <typename T> bool ist_gerade_zahl(T zahl)
{
  bool ist_eine_gerade_zahl = false;
  if ((zahl % 2) == 0)
  {
    ist_eine_gerade_zahl = true;
  }
  return ist_eine_gerade_zahl;
}

/**
 * Prueft ob eine Zahl, eine Primzahl ist, oder nicht.
 *
 * @param  zahl  Die Zahl, welche geprueft werden soll.
 *
 * @return       Gibt ein true zueuck, wenn die Zahl eine Primzahl ist, bzw. ein false, wenn nicht.
 */
template <typename T> bool ist_primzahl(T zahl)
{
  bool ist_eine_primzahl = true;
  if (!ist_gerade_zahl(zahl))
  {
    T groesster_teiler = sqrt(zahl);
    for (int teiler = 3; ist_eine_primzahl && teiler <= groesster_teiler; teiler+=2)
    {
      if ((zahl % teiler) == 0)
      {
        ist_eine_primzahl = false;
      }
    }
  }
  else
  {
    ist_eine_primzahl = false;
  }
  return ist_eine_primzahl;
}

/**
 * Gibt eine Zahl als Prozentzahl zurueck.
 *
 * @param  anzahl_werte       Die Zahl, welche als Prozentzahl zurueckgegeben werden soll.
 * @param  wert_fuer_prozent  Die Zahl, wo nach sich die prozentuale Bemessung richtet.
 *
 * @return                    Die Zahl als Prozentzahl.
 */
template <typename T> double zahl_in_prozent(T anzahl_werte, T wert_fuer_prozent)
{
  double ein_prozent = static_cast<double>(anzahl_werte) / 100;
  return static_cast<double>(wert_fuer_prozent) / ein_prozent;
}

/**
 * Tauscht zwei Werte, wenn der kleinere Wert (min) groesser als der eigentlich groessere Wert ist (max).
 *
 * @param  min  Der kleine Wert von beiden.
 * @param  max  Der groessere Wert von beiden.
 */
template <typename T> void vertausche(T& min, T& max)
{
  if (min > max)
  {
    T ablage = min;
    min = max;
    max = ablage;
  }
}

/**
 * Liefert den kleineren von zwei Werten.
 *
 * @param  wert1  Der erste Wert, welcher geprueft werden soll.
 * @param  wert2  Der zweite Wert, welcher geprueft werden soll.
 *
 * @return        Der kleinere Wert von beiden.
 */
template <typename T> T liefere_min(T wert1, T wert2)
{
  return wert1 <= wert2 ? wert1 : wert2;
}

/**
 * Wandelt eine Zahl in einen string Wert um.
 *
 * @param  zahl  Die Zahl, welche umgewandelt werden soll.
 *
 * @return       Die umgewandelte Zahl als string.
 */
template <typename T> string zahl_zu_string(T zahl)
{
  ostringstream text_stream(ios::out);
  text_stream << fixed << zahl;
  return text_stream.str();
}

#endif

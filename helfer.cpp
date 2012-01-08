/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/helfer.h"

/**
 * Prueft ob eine Zahl eine gerade ist oder nicht.
 *
 * @param  zahl  Die Zahl, die geprueft werden soll, ob sie gerade ist.
 *
 * @return  Ein boolscher Wert, ob die Zahl gerade ist (true) oder nicht (false).
 */
bool ist_gerade_zahl(long zahl)
{
  bool ist_eine_gerade_zahl = false;
  if ((zahl % 2) == 0)
  {
    ist_eine_gerade_zahl = true;
  }
  return ist_eine_gerade_zahl;
}

/**
 * Prueft ob eine Zahl eine gerade ist oder nicht.
 *
 * @param  zahl  Die Zahl, die geprueft werden soll, ob sie gerade ist.
 *
 * @return  Ein boolscher Wert, ob die Zahl gerade ist (true) oder nicht (false).
 */
bool ist_gerade_zahl(int zahl)
{
  return ist_gerade_zahl(static_cast<long>(zahl));
}

/**
 * Prueft ob eine Zahl eine gerade ist oder nicht.
 *
 * @param  zahl  Die Zahl, die geprueft werden soll, ob sie gerade ist.
 *
 * @return  Ein boolscher Wert, ob die Zahl gerade ist (true) oder nicht (false).
 */
bool ist_gerade_zahl(short zahl)
{
  return ist_gerade_zahl(static_cast<long>(zahl));
}

/**
 * Prueft ob eine Zahl, eine Primzahl ist, oder nicht.
 *
 * @param  zahl  Die Zahl, welche geprueft werden soll.
 *
 * @return Gibt ein true zueuck, wenn die Zahl eine Primzahl ist, bzw. ein false, wenn nicht.
 */
bool ist_primzahl(long zahl)
{
  bool ist_eine_primzahl = true;
  if (!ist_gerade_zahl(zahl))
  {
    long groesster_teiler = sqrt(zahl);
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
 * Prueft ob eine Zahl, eine Primzahl ist, oder nicht.
 *
 * @param  zahl  Die Zahl, welche geprueft werden soll.
 *
 * @return Gibt ein true zueuck, wenn die Zahl eine Primzahl ist, bzw. ein false, wenn nicht.
 */
bool ist_primzahl(int zahl)
{
  return ist_primzahl(static_cast<long>(zahl));
}

/**
 * Prueft ob eine Zahl, eine Primzahl ist, oder nicht.
 *
 * @param  zahl  Die Zahl, welche geprueft werden soll.
 *
 * @return Gibt ein true zueuck, wenn die Zahl eine Primzahl ist, bzw. ein false, wenn nicht.
 */
bool ist_primzahl(short zahl)
{
  return ist_primzahl(static_cast<long>(zahl));
}

/**
 * Tauscht zwei long Werte, wenn der kleinere Wert (min) groesser als der eigentlich groessere Wert ist (max).
 *
 * @param  min  Der kleine Wert von beiden.
 * @param  max  Der groessere Wert von beiden.
 */
void vertausche(long& min, long& max)
{
  if (min > max)
  {
    long ablage = min;
    min = max;
    max = ablage;
  }
}

/**
 * Tauscht zwei int Werte, wenn der kleinere Wert (min) groesser als der eigentlich groessere Wert ist (max).
 *
 * @param  min  Der kleine Wert von beiden.
 * @param  max  Der groessere Wert von beiden.
 */
void vertausche(int& min, int& max)
{
  if (min > max)
  {
    int ablage = min;
    min = max;
    max = ablage;
  }
}

/**
 * Tauscht zwei double Werte, wenn der kleinere Wert (min) groesser als der eigentlich groessere Wert ist (max).
 *
 * @param  min  Der kleine Wert von beiden.
 * @param  max  Der groessere Wert von beiden.
 */
void vertausche(double& min, double& max)
{
  if (min > max)
  {
    double ablage = min;
    min = max;
    max = ablage;
  }
}

/**
 * Tauscht zwei float Werte, wenn der kleinere Wert (min) groesser als der eigentlich groessere Wert ist (max).
 *
 * @param  min  Der kleine Wert von beiden.
 * @param  max  Der groessere Wert von beiden.
 */
void vertausche(float& min, float& max)
{
  if (min > max)
  {
    float ablage = min;
    min = max;
    max = ablage;
  }
}

/**
 * Wandelt einen long Wert in einen string Wert um.
 *
 * @param  zahl  Der long Wert, der umgewandelt werden soll.
 *
 * @return Der umgewandelte long Wert.
 */
string zahl_zu_string(long zahl)
{
  ostringstream text_stream(ios::out);
  text_stream << fixed << zahl;
  return text_stream.str();
}

/**
 * Wandelt einen int Wert in einen string Wert um.
 *
 * @param  zahl  Der int Wert, der umgewandelt werden soll.
 *
 * @return Der umgewandelte int Wert.
 */
string zahl_zu_string(int zahl)
{
  return zahl_zu_string(static_cast<long>(zahl));
}

/**
 * Wandelt einen long double Wert in einen string Wert um.
 *
 * @param  zahl  Der long double Wert, der umgewandelt werden soll.
 *
 * @return Der umgewandelte long double Wert.
 */
string zahl_zu_string(long double zahl)
{
  ostringstream text_stream(ios::out);
  text_stream << fixed << zahl;
  return text_stream.str();
}

/**
 * Wandelt einen double Wert in einen string Wert um.
 *
 * @param  zahl  Der double Wert, der umgewandelt werden soll.
 *
 * @return Der umgewandelte double Wert.
 */
string zahl_zu_string(double zahl)
{
  return zahl_zu_string(static_cast<long double>(zahl));
}

/**
 * Wandelt einen float Wert in einen string Wert um.
 *
 * @param  zahl  Der float Wert, der umgewandelt werden soll.
 *
 * @return Der umgewandelte float Wert.
 */
string zahl_zu_string(float zahl)
{
  return zahl_zu_string(static_cast<long double>(zahl));
}

/**
 * Setzt einen Schalter im Ausgabestream.
 *
 * @param format  Der Schalter, welche gesetzt werden soll.
 */
void setze_schalter(ios_base::fmtflags format)
{
  if (format == cout.dec || format == cout.oct || format == cout.hex)
  {
    cout.setf(format, ios_base::basefield);
  }
  else
  {
    if (format == cout.left || format == cout.right || format == cout.internal)
    {
      cout.setf(format, ios_base::adjustfield);
    }
    else if (format == cout.scientific || format == cout.fixed)
    {
      cout.setf(format, ios_base::floatfield);
    }
    else
    {
      cout.setf(format);
    }
  }
}

/**
 * Gibt eine Zahl als Prozentzahl zurueck.
 *
 * @param  anzahl_werte       Die Zahl, welche als Prozentzahl zurueckgegeben werden soll.
 * @param  wert_fuer_prozent  Die Zahl, wo nach sich die prozentuale Bemessung richtet.
 *
 * @return                    Die Zahl als Prozentzahl.
 */
double zahl_in_prozent(long anzahl_werte, long wert_fuer_prozent)
{
  double ein_prozent = static_cast<double>(anzahl_werte) / 100;
  return static_cast<double>(wert_fuer_prozent) / ein_prozent;
}

/**
 * Gibt eine Zahl als Prozentzahl zurueck.
 *
 * @param  anzahl_werte       Die Zahl, welche als Prozentzahl zurueckgegeben werden soll.
 * @param  wert_fuer_prozent  Die Zahl, wo nach sich die prozentuale Bemessung richtet.
 *
 * @return                    Die Zahl als Prozentzahl.
 */
double zahl_in_prozent(int anzahl_werte, int wert_fuer_prozent)
{
  return zahl_in_prozent(static_cast<long>(anzahl_werte), static_cast<long>(wert_fuer_prozent));
}

/**
 * Gibt eine Zahl als Prozentzahl zurueck.
 *
 * @param  anzahl_werte       Die Zahl, welche als Prozentzahl zurueckgegeben werden soll.
 * @param  wert_fuer_prozent  Die Zahl, wo nach sich die prozentuale Bemessung richtet.
 *
 * @return                    Die Zahl als Prozentzahl.
 */
double zahl_in_prozent(short anzahl_werte, short wert_fuer_prozent)
{
  return zahl_in_prozent(static_cast<long>(anzahl_werte), static_cast<long>(wert_fuer_prozent));
}

#include "header/zufallsgenerierung.h"

/**
 * Der Default-Konstruktor. Initialisiert den Zufallsgenerator mit Hilfe des aktuellen Timestamps.
 */
Zufallsgenerierung::Zufallsgenerierung()
{
  int seed = (unsigned)time(0);
  srand(seed);
}

/**
 * Initialisiert den Zufallsgenerator mit Hilfe des uebergebenen Werts.
 * 
 * @param  srand_wert  Der Wert, welcher zum initialisieren des Zufallsgenerators benoetigt wird.
 */
void Zufallsgenerierung::setze_srand(const size_t srand_wert)
{
  srand(srand_wert);
}

/**
 * Erzeugt einen zufaelligen Long Wert, der zwischen min und max liegt.
 * 
 * @param  min  Der minimale Wert, den die Zufallszahl annehmen darf.
 * @param  max  Der maximale Wert, den die Zufallszahl annehmen darf.
 * 
 * @return      Die zufaellig generierte Zahl.
 */
long Zufallsgenerierung::erzeuge_zufaelligen_long(const long min, const long max) const
{
  return (rand() % ((max + 1) - min)) + min;
}

/**
 * Erzeugt einen zufaelligen Long Wert, der im Wertebereich von Long liegen muss.
 * 
 * @return      Die zufaellig generierte Zahl.
 */ 
long Zufallsgenerierung::erzeuge_zufaelligen_long() const
{
  return erzeuge_zufaelligen_long(numeric_limits<long>::min(), numeric_limits<long>::max());
}

/**
 * Erzeugt einen zufaelligen Int Wert, der zwischen min und max liegt.
 * 
 * @param  min  Der minimale Wert, den die Zufallszahl annehmen darf.
 * @param  max  Der maximale Wert, den die Zufallszahl annehmen darf.
 * 
 * @return      Die zufaellig generierte Zahl.
 */
int Zufallsgenerierung::erzeuge_zufaelligen_int(const int min, const int max) const
{
  return static_cast<int>(erzeuge_zufaelligen_long(min, max));
}

/**
 * Erzeugt einen zufaelligen Int Wert, der im Wertebereich von Int liegen muss.
 * 
 * @return      Die zufaellig generierte Zahl.
 */ 
int Zufallsgenerierung::erzeuge_zufaelligen_int() const
{
  return static_cast<int>(erzeuge_zufaelligen_long(numeric_limits<int>::min(), numeric_limits<int>::max()));
}

/**
 * Erzeugt einen zufaelligen Short Wert, der zwischen min und max liegt.
 * 
 * @param  min  Der minimale Wert, den die Zufallszahl annehmen darf.
 * @param  max  Der maximale Wert, den die Zufallszahl annehmen darf.
 * 
 * @return      Die zufaellig generierte Zahl.
 */
short Zufallsgenerierung::erzeuge_zufaelligen_short(const short min, const short max) const
{
  return static_cast<short>(erzeuge_zufaelligen_long(min, max));
}

/**
 * Erzeugt einen zufaelligen Short Wert, der im Wertebereich von Short liegen muss.
 * 
 * @return      Die zufaellig generierte Zahl.
 */ 
short Zufallsgenerierung::erzeuge_zufaelligen_short() const
{
  return static_cast<short>(erzeuge_zufaelligen_long(numeric_limits<short>::min(), numeric_limits<short>::max()));
}

/**
 * Erzeugt einen zufaelligen Long Double Wert, der zwischen min und max liegt.
 * 
 * @param  min  Der minimale Wert, den die Zufallszahl annehmen darf.
 * @param  max  Der maximale Wert, den die Zufallszahl annehmen darf.
 * 
 * @return      Die zufaellig generierte Zahl.
 */
long double Zufallsgenerierung::erzeuge_zufaelligen_long_double(const long double min, const long double max) const
{
  double ergebnis = static_cast<double>(rand()) / RAND_MAX;
  return min + ergebnis * (max - min);
}

/**
 * Erzeugt einen zufaelligen Long Double Wert, der im Wertebereich von Long Double liegen muss.
 * 
 * @return      Die zufaellig generierte Zahl.
 */ 
long double Zufallsgenerierung::erzeuge_zufaelligen_long_double() const
{
  return erzeuge_zufaelligen_long_double(numeric_limits<long double>::min(), numeric_limits<long double>::max());
}

/**
 * Erzeugt einen zufaelligen Double Wert, der zwischen min und max liegt.
 * 
 * @param  min  Der minimale Wert, den die Zufallszahl annehmen darf.
 * @param  max  Der maximale Wert, den die Zufallszahl annehmen darf.
 * 
 * @return      Die zufaellig generierte Zahl.
 */
double Zufallsgenerierung::erzeuge_zufaelligen_double(const double min, const double max) const
{
  return static_cast<double>(erzeuge_zufaelligen_long_double(min, max));
}

/**
 * Erzeugt einen zufaelligen Double Wert, der im Wertebereich von Double liegen muss.
 * 
 * @return      Die zufaellig generierte Zahl.
 */
double Zufallsgenerierung::erzeuge_zufaelligen_double() const
{
  return erzeuge_zufaelligen_long_double(numeric_limits<double>::min(), numeric_limits<double>::max());
}

/**
 * Erzeugt einen zufaelligen Float Wert, der zwischen min und max liegt.
 * 
 * @param  min  Der minimale Wert, den die Zufallszahl annehmen darf.
 * @param  max  Der maximale Wert, den die Zufallszahl annehmen darf.
 * 
 * @return      Die zufaellig generierte Zahl.
 */
float Zufallsgenerierung::erzeuge_zufaelligen_float(const float min, const float max) const
{
  return static_cast<float>(erzeuge_zufaelligen_long_double(min, max));
}

/**
 * Erzeugt einen zufaelligen Float Wert, der im Wertebereich von Float liegen muss.
 * 
 * @return      Die zufaellig generierte Zahl.
 */
float Zufallsgenerierung::erzeuge_zufaelligen_float() const
{
  return erzeuge_zufaelligen_long_double(numeric_limits<float>::min(), numeric_limits<float>::max());
}

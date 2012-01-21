/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef ARRAY_HELFER_H
#define ARRAY_HELFER_H

#include <string>

using namespace std;

/**
 * Initialisiert alle Elemente eines Arrays mit dem entsprechenden Wert.
 *
 * @param  zu_initialisierendes_array  Das Array, welches gefuellt werden soll.
 * @param  laenge                      Die Laenge des zu initialisierenden Arrays.
 * @param  wert                        Der Wert, mit dem alle Arrayelemente gefuellt werden sollen.
 */
template <typename T> void initialisieren_array(T* zu_initialisierendes_array, int laenge, T wert)
{
  for (int array_element = 0; array_element < laenge; ++array_element)
  {
    zu_initialisierendes_array[array_element] = wert;
  }
}

/**
 * Initialisiert alle Elemente eines Arrays mit 0.
 *
 * @param  zu_initialisierendes_array  Das Array, welches gefuellt werden soll.
 * @param  laenge                      Die Laenge des zu initialisierenden Arrays.
 */
template <typename T> void initialisieren_array(T* zu_initialisierendes_array, int laenge)
{
  initialisieren_array<T>(zu_initialisierendes_array, laenge, 0);
}

/**
 * Kopiert alle Werte eines Array in ein anderes.
 *
 * @param  zu_fuellendes_array   Das Array, welches mit den Werten des zweiten Arrays gefuellt werden soll.
 * @param  zu_kopierendes_array  Das Array, von dem die Werte in das erste Array kopiert werden sollen.
 * @param  laenge_der_arrays     Die Anzahl der Elemente in den beiden Arrays.
 */
template <typename T> void kopiere_array(T* zu_fuellendes_array, T* zu_kopierendes_array, int laenge_der_arrays)
{
  for (int index_zaehler = 0; index_zaehler < laenge_der_arrays; ++index_zaehler)
  {
    zu_fuellendes_array[index_zaehler] = zu_kopierendes_array[index_zaehler];
  }
}

/**
 * Gibt eine Array auf dem Bildschirm aus.
 *
 * @param  ausgabe  Der Stream, in den das Array geschrieben werden soll.
 * @param  array    Das Array, welches in den Stream gepackt werden soll.
 * @param  laenge   Die Laenge des Arrays.
 * @param  trenner  Der Trenner, welche am Ende eines Elements geschrieben werden soll.
 * @param  am_ende  Boolscher Wert, ob nach dem letzten Element der Trenner ebenfalls ausgegeben werden soll oder nicht.
 */
template <typename T, typename Indextype> void schreibe_array(std::ostream& ausgabe, const T array[], Indextype laenge, std::string trenner = " ", bool am_ende = false)
{
  for (Indextype zaehler = 0; zaehler < (laenge - 1); ++zaehler)
  {
    ausgabe << array[zaehler] << trenner;
  }
  if (am_ende)
  {
    ausgabe << trenner;
  }
}

#endif

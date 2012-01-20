/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/array_helfer.h"

/**
 * Initialisiert alle Elemente eines Arrays mit dem entsprechenden Wert.
 *
 * @param  zu_initialisierendes_array  Das Array, welches gefuellt werden soll.
 * @param  laenge                      Die Laenge des zu initialisierenden Arrays.
 * @param  wert                        Der Wert, mit dem alle Arrayelemente gefuellt werden sollen.
 */
void initialisieren_array(int* zu_initialisierendes_array, int laenge, int wert)
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
void initialisieren_array(int* zu_initialisierendes_array, int laenge)
{
  initialisieren_array(zu_initialisierendes_array, laenge, 0);
}

/**
 * Kopiert alle Werte eines Array in ein anderes.
 *
 * @param  zu_fuellendes_array   Das Array, welches mit den Werten des zweiten Arrays gefuellt werden soll.
 * @param  zu_kopierendes_array  Das Array, von dem die Werte in das erste Array kopiert werden sollen.
 * @param  laenge_der_arrays     Die Anzahl der Elemente in den beiden Arrays.
 */
void kopiere_array(int* zu_fuellendes_array, int* zu_kopierendes_array, int laenge_der_arrays)
{
  for (int index_zaehler = 0; index_zaehler < laenge_der_arrays; ++index_zaehler)
  {
    zu_fuellendes_array[index_zaehler] = zu_kopierendes_array[index_zaehler];
  }
}

/**
 * Kopiert alle Werte eines Array in ein anderes.
 *
 * @param  zu_fuellendes_array   Das Array, welches mit den Werten des zweiten Arrays gefuellt werden soll.
 * @param  zu_kopierendes_array  Das Array, von dem die Werte in das erste Array kopiert werden sollen.
 * @param  laenge_der_arrays     Die Anzahl der Elemente in den beiden Arrays.
 */
void kopiere_array(string* zu_fuellendes_array, string* zu_kopierendes_array, int laenge_der_arrays)
{
  for (int index_zaehler = 0; index_zaehler < laenge_der_arrays; ++index_zaehler)
  {
    zu_fuellendes_array[index_zaehler] = zu_kopierendes_array[index_zaehler];
  }
}

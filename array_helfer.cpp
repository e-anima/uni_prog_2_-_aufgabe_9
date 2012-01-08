/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/array_helfer.h"

void initialisieren_array(int* array, int laenge, int wert)
{
  for (int array_element = 0; array_element < laenge; ++array_element)
  {
    array[array_element] = wert;
  }
}

void initialisieren_array(int* array, int laenge)
{
  initialisieren_array(array, laenge, 0);
}

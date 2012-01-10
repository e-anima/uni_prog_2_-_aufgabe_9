/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef ARRAY_HELFER_H
#define ARRAY_HELFER_H

#include <string>

using namespace std;


void initialisieren_array(int* zu_initialisierendes_array, int laenge, int wert);
void initialisieren_array(int* zu_initialisierendes_array, int laenge);

void kopiere_array(int* zu_fuellendes_array, int* zu_kopierendes_array, int laenge_der_arrays);
void kopiere_array(string* zu_fuellendes_array, string* zu_kopierendes_array, int laenge_der_arrays);

#endif

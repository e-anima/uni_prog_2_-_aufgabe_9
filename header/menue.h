/*
 * menue.h
 *
 *  Author: Markus Paeschke (531524)
 */

#ifndef MENUE_H
#define MENUE_H

#include <vector>
#include "ausgabe.h"
#include "eingabe.h"

using namespace std;

int schreibe_menue(string menue[], int menue_laenge);
int schreibe_menue(vector<string> menue);
int schreibe_menue(vector<string> menue, string eingabeaufforderung);

#endif

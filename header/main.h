/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef MAIN_H
#define MAIN_H

using namespace std;

#include <vector>
#include "ausgabe.h"
#include "eingabe.h"
#include "menue.h"

vector<string> erzeuge_menue();
bool pruefe_argumente(int argc, char* argv[]);
void schreibe_hilfe();
void programmstart();
void programmende();

#endif

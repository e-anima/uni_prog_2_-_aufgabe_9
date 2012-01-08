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


bool ist_gerade_zahl(long zahl);
bool ist_gerade_zahl(int zahl);
bool ist_gerade_zahl(short zahl);

bool ist_primzahl(long zahl);
bool ist_primzahl(int zahl);
bool ist_primzahl(short zahl);

void vertausche(long& min, long& max);
void vertausche(int& min, int& max);
void vertausche(double& min, double& max);
void vertausche(float& min, float& max);

string zahl_zu_string(long zahl);
string zahl_zu_string(int zahl);
string zahl_zu_string(long double zahl);
string zahl_zu_string(double zahl);
string zahl_zu_string(float zahl);

void setze_schalter(ios_base::fmtflags format);

double zahl_in_prozent(long anzahl_werte, long wert_fuer_prozent);
double zahl_in_prozent(int anzahl_werte, int wert_fuer_prozent);
double zahl_in_prozent(short anzahl_werte, short wert_fuer_prozent);

#endif

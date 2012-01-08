/*
 * eingabe.h
 *
 *  Author: Markus Paeschke (531524)
 */

#ifndef EINGABE_H
#define EINGABE_H

#include <climits>
#include <iostream>
#include <sstream>
#include <string>
#include "helfer.h"

using namespace std;

long erfasse_long(long min, long max);
long erfasse_long();
long erfasse_long(string text);
long erfasse_long(string text, long min, long max);

int erfasse_int(int min, int max);
int erfasse_int();
int erfasse_int(string text);
int erfasse_int(string text, int min, int max);

double erfasse_double(double min, double max);
double erfasse_double(double min, double max);
double erfasse_double(string text);
double erfasse_double(string text, double min, double max);

float erfasse_float(float min, float max);
float erfasse_float();
float erfasse_float(string text);
float erfasse_float(string text, float min, float max);

int erfasse_gerade_zahl();
int erfasse_gerade_zahl(string text);
int erfasse_gerade_zahl(int min, int max);
int erfasse_gerade_zahl(string text, int min, int max);

bool erfasse_bool();

char erfasse_zeichen(string eingabeaufforderung, char zu_erfassendes_zeichen);
char erfasse_zeichen(string eingabeaufforderung, char zu_erfassendes_zeichen[], streamsize anzahl);
char erfasse_zeichen(string eingabeaufforderung);
char erfasse_zeichen();

void erfasse_zeichenkette(char eingabe[], streamsize anzahl);
void erfasse_zeichenkette_mit_leerzeichen(char eingabe[], streamsize anzahl);

string erfasse_string(string eingabeaufforderung, int anzahl_zeichen);

#endif

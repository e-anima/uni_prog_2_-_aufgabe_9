/*
 * ausgaben.h
 *
 *  Author: Markus Paeschke (531524)
 */

#ifndef AUSGABE_H
#define AUSGABE_H

#include <cstring>
#include <fstream>
#include <iostream>
#include <string>
#include "eingabe.h"

using namespace std;

void schreibe(int anzahl, char zeichen);
void schreibe(int anzahl, char zeichen, FILE *datei);

void schreibe(int zahl);
void schreibe(int zahl, int feldbreite);
void schreibe(int zahl, int feldbreite, FILE *datei);

void schreibe(double zahl);
void schreibe(double zahl, FILE *datei);

void schreibe(float zahl);
void schreibe(float zahl, FILE *datei);

void schreibe(const int array[], int laenge);
void schreibe(const int array[], int laenge, int feldbreite);
void schreibe(const int array[], int laenge, int feldbreite, const char *trenner);
void schreibe(const int array[], int laenge, int feldbreite, const char *trenner, bool am_ende);
void schreibe(const int array[], int laenge, int feldbreite, const char *trenner, bool am_ende, FILE *datei);

//short und long long

void schreibe(long zahl, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(long zahl, ios_base::fmtflags format);
void schreibe(long zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(long zahl, streamsize feldbreite, ios_base::fmtflags format);
void schreibe(long zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(long zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format);

void schreibe(int zahl, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(int zahl, ios_base::fmtflags format);
void schreibe(int zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(int zahl, streamsize feldbreite, ios_base::fmtflags format);
void schreibe(int zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(int zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format);

void schreibe(long double zahl, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(long double zahl, ios_base::fmtflags format);
void schreibe(long double zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(long double zahl, streamsize feldbreite, ios_base::fmtflags format);
void schreibe(long double zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(long double zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format);
void schreibe(streamsize praezision, long double zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(streamsize praezision, long double zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate);

void schreibe(double zahl, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(double zahl, ios_base::fmtflags format);
void schreibe(double zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(double zahl, streamsize feldbreite, ios_base::fmtflags format);
void schreibe(double zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(double zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format);
void schreibe(streamsize praezision, double zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(streamsize praezision, double zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate);

void schreibe(float zahl, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(float zahl, ios_base::fmtflags format);
void schreibe(float zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(float zahl, streamsize feldbreite, ios_base::fmtflags format);
void schreibe(float zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(float zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format);
void schreibe(streamsize praezision, float zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate);
void schreibe(streamsize praezision, float zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate);

void schreibe(string text, streamsize feldbreite, ios_base::fmtflags ausrichtung, char trenner);
void schreibe(string text, streamsize feldbreite, ios_base::fmtflags ausrichtung);
void schreibe(string text, streamsize feldbreite);
void schreibe(string text);

#endif

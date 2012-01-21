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

/**
 * Gibt eine Zahl, unter Verwendung von Schaltern, auf dem Bildschirm aus.
 *
 * @param  zahl            Die Zahl die geschrieben werden soll.
 * @param  format          Ein Array mit den Formaten.
 * @param  anzahl_formate  Die Anzahl der Formate im Array.
 */
template <typename T> void schreibe(T zahl, ios_base::fmtflags format[], int anzahl_formate)
{
  int schalter_zaehler = 0;
  for (schalter_zaehler = 0; schalter_zaehler < anzahl_formate; ++schalter_zaehler)
  {
    setze_schalter(format[schalter_zaehler]);
  }
  cout << zahl;
  for (schalter_zaehler = 0; schalter_zaehler < anzahl_formate; ++schalter_zaehler)
  {
    cout.unsetf(format[schalter_zaehler]);
  }
}

/**
 * Gibt eine Zahl, unter Verwendung von Schaltern, auf dem Bildschirm aus.
 *
 * @param  zahl    Die Zahl die geschrieben werden soll.
 * @param  format  Das Format, mitdem die Zahl geschrieben werden soll.
 */
template <typename T> void schreibe(T zahl, ios_base::fmtflags format)
{
  ios_base::fmtflags format_array[] = {format};
  schreibe<T>(zahl, format_array, 1);
}

/**
 * Gibt eine Zahl, unter Verwendung von Schaltern und einer Feldbreite, auf dem Bildschirm aus.
 *
 * @param  zahl            Die Zahl die geschrieben werden soll.
 * @param  feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param  format          Ein Array mit den Formaten.
 * @param  anzahl_formate  Die Anzahl der Formate im Array.
 */
template <typename T> void schreibe(T zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate)
{
  streamsize alte_feldbreite = cout.width();
  cout.width(feldbreite);
  schreibe<T>(zahl, format, anzahl_formate);
  cout.width(alte_feldbreite);
}

/**
 * Gibt eine Zahl, unter Verwendung von Schaltern und einer Feldbreite, auf dem Bildschirm aus.
 *
 * @param  zahl        Die Zahl die geschrieben werden soll.
 * @param  feldbreite  Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param  format      Das Format, mitdem die Zahl geschrieben werden soll.
 */
template <typename T> void schreibe(T zahl, streamsize feldbreite, ios_base::fmtflags format)
{
  ios_base::fmtflags format_array[] = {format};
  schreibe<T>(zahl, feldbreite, format_array, 1);
}

/**
 * Gibt eine Zahl, unter Verwendung von Schaltern und einer Feldbreite, auf dem Bildschirm aus.
 * Außerdem wird ein Fuellzeichen fuer die Leerstellen eingefuegt.
 *
 * @param  zahl            Die Zahl die geschrieben werden soll.
 * @param  feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param  fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param  format          Ein Array mit den Formaten.
 * @param  anzahl_formate  Die Anzahl der Formate im Array.
 */
template <typename T> void schreibe(T zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate)
{
  char altes_fuellzeichen = cout.fill();
  cout.fill(fuellzeichen);
  schreibe<T>(zahl, feldbreite, format, anzahl_formate);
  cout.fill(altes_fuellzeichen);
}

/**
 * Gibt eine Zahl, unter Verwendung von Schaltern und einer Feldbreite, auf dem Bildschirm aus.
 * Außerdem wird ein Fuellzeichen fuer die Leerstellen eingefuegt.
 *
 * @param  zahl            Die Zahl die geschrieben werden soll.
 * @param  feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param  fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param  format          Das Format, mitdem die Zahl geschrieben werden soll.
 */
template <typename T> void schreibe(T zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format)
{
  ios_base::fmtflags format_array[] = {format};
  schreibe<T>(zahl, feldbreite, fuellzeichen, format_array, 1);
}

/**
 * Gibt eine Zahl, unter Verwendung von Schaltern und einer Feldbreite, auf dem Bildschirm aus.
 * Außerdem wird ein Fuellzeichen fuer die Leerstellen eingefuegt.
 * Weiterhin kann die Praezision fuer die Nachkommastellen angegeben werden.
 *
 * @param  praezision      Die Praezision der Nachkommastellen.
 * @param  zahl            Die Zahl die geschrieben werden soll.
 * @param  feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param  fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param  format          Ein Array mit den Formaten.
 * @param  anzahl_formate  Die Anzahl der Formate im Array.
 */
template <typename T> void schreibe(streamsize praezision, T zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate)
{
  streamsize alte_praezision = cout.precision();
  cout.precision(praezision);
  schreibe<T>(zahl, feldbreite, fuellzeichen, format, anzahl_formate);
  cout.precision(alte_praezision);
}

/**
 * Gibt eine Zahl, unter Verwendung von Schaltern und einer Feldbreite, auf dem Bildschirm aus.
 * Weiterhin kann die Praezision fuer die Nachkommastellen angegeben werden.
 *
 * @param  praezision      Die Praezision der Nachkommastellen.
 * @param  zahl            Die Zahl die geschrieben werden soll.
 * @param  feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param  format          Ein Array mit den Formaten.
 * @param  anzahl_formate  Die Anzahl der Formate im Array.
 */
template <typename T> void schreibe(streamsize praezision, T zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate)
{
  streamsize alte_praezision = cout.precision();
  cout.precision(praezision);
  schreibe(zahl, feldbreite, format, anzahl_formate);
  cout.precision(alte_praezision);
}

void schreibe(string text, streamsize feldbreite, ios_base::fmtflags ausrichtung, char trenner);
void schreibe(string text, streamsize feldbreite, ios_base::fmtflags ausrichtung);
void schreibe(string text, streamsize feldbreite);
void schreibe(string text);

#endif

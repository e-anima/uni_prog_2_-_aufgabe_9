/*
 * eingabe.h
 *
 *  Author: Markus Paeschke (531524)
 */

#ifndef EINGABE_H
#define EINGABE_H

#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include "helfer.h"

using namespace std;

bool erfasse_bool();

char erfasse_zeichen(string eingabeaufforderung, char zu_erfassendes_zeichen);
char erfasse_zeichen(string eingabeaufforderung, char zu_erfassendes_zeichen[], streamsize anzahl);
char erfasse_zeichen(string eingabeaufforderung);
char erfasse_zeichen();

void erfasse_zeichenkette(char eingabe[], streamsize anzahl);
void erfasse_zeichenkette_mit_leerzeichen(char eingabe[], streamsize anzahl);

string erfasse_string(string eingabeaufforderung, int anzahl_zeichen);

/**
 * Erfaesst eine Zahl, die zwischen min und max liegen und vom Benutzer eingegeben werden muss.
 *
 * @param  min  Die minimale Zahl des Wertebereichs.
 * @param  max  Die maximale Zahl des Wertebereichs.
 *
 * @return      Die vom Benutzer eingegebene Zahl.
 */
template <typename T> T erfasse_zahl(T min, T max)
{
  vertausche<T>(min, max);
  T eingabe = 0;
  bool eingabe_ok = false;
  cin.clear();
  cin.unsetf(cin.skipws);
  do
  {
    cin >> eingabe;
    eingabe_ok = cin.good() && min <= eingabe  && eingabe <= max;
    cin.clear();
    cin.ignore(static_cast<streamsize>(LONG_MAX), '\n');
    if (!eingabe_ok)
    {
      cout << "Bitte eine ganze Zahl eingeben zwischen [" << min << "] und [" << max << "]:\t";
    }
  } while (!eingabe_ok);
  cin.setf(cin.skipws);
  return eingabe;
}

/**
 * Erfaesst eine Zahl, der vom Benutzer eingegeben werden muss.
 *
 * @return  Die, vom Benutzer eingegebenen, Zahl.
 */
template <typename T> T erfasse_zahl()
{
  return erfasse_zahl<T>(numeric_limits<T>::min(), numeric_limits<T>::max());
}

/**
 * Erfaesst eine Zahl, der vom Benutzer eingegeben werden muss. Zuvor wird ein Text ausgegeben. Optimalerweise eine Anweisung fuer den Benutzer.
 *
 * @param  text  Der Text, welcher vor der Erfassung der Zahl, auf dem Bildschirm ausgegeben werden soll.
 *
 * @return       Den vom Benutzer eingegebenen long Wert.
 */
template <typename T> T erfasse_zahl(string text)
{
  cout << text << ":\t";
  return erfasse_zahl<T>();
}

/**
 * Erfaesst eine Zahl, die zwischen min und max liegen und vom Benutzer eingegeben werden muss.
 * Zuvor wird ein Text ausgegeben.
 * Optimalerweise eine Anweisung fuer den Benutzer.
 *
 * @param  text  Der Text, welcher vor der Erfassung der Zahl, auf dem Bildschirm ausgegeben werden soll.
 * @param  min   Die minimale Zahl des Wertebereichs.
 * @param  max   Die maximale Zahl des Wertebereichs.
 *
 * @return Die vom Benutzer eingegebenen Zahl.
 */
template <typename T> T erfasse_zahl(string text, T min, T max)
{
  cout << text << ":\t";
  return erfasse_zahl<T>(min, max);
}

/**
 * Erfaesst einen geraden ganzzahligen Wert, der zwischen min und max liegen muss und der vom Benutzer eingegeben werden muss.
 * Zuvor wird ein Text ausgegeben.
 * Optimalerweise eine Anweisung fuer den Benutzer.
 *
 * @param  text  Der Text, welcher vor der Erfassung des geraden ganzzahligen Wertes, auf dem Bildschirm ausgegeben werden soll.
 * @param  min   Der minimale Wert des Wertebereichs.
 * @param  max   Der maximale Wert des Wertebereichs.
 *
 * @return       Einen geraden ganzzahligen Wert.
 */
template <typename T> T erfasse_gerade_zahl(string text, T min, T max)
{
  vertausche<T>(min, max);
  T dieZahl;
  do
  {
    dieZahl = erfasse_zahl<T>(text, min, max);
  } while (!ist_gerade_zahl(dieZahl));
  return dieZahl;
}

/**
 * Erfaesst einen geraden ganzzahligen Wert, der vom Benutzer eingegeben werden muss.
 *
 * @return Einen geraden ganzzahligen Wert.
 */
template <typename T> T erfasse_gerade_zahl()
{
  return erfasse_gerade_zahl<T>(1, numeric_limits<T>::max());
}

/**
 * Erfaesst einen geraden ganzzahligen Wert, der vom Benutzer eingegeben werden muss. Zuvor wird ein Text ausgegeben. Optimalerweise eine Anweisung fuer den Benutzer.
 *
 * @param  text Der Text, welcher vor der Erfassung des geraden ganzzahligen Wertes, auf dem Bildschirm ausgegeben werden soll.
 *
 * @return Einen geraden ganzzahligen Wert.
 */
template <typename T> T erfasse_gerade_zahl(string text)
{
  return erfasse_gerade_zahl<T>(text, 1, numeric_limits<T>::max());
}

/**
 * Erfaesst einen geraden ganzzahligen Wert, der zwischen min und max liegen muss und der vom Benutzer eingegeben werden muss.
 *
 * @param  min  Der minimale Wert des Wertebereichs.
 * @param  max  Der maximale Wert des Wertebereichs.
 *
 * @return Einen geraden ganzzahligen Wert.
 */
template <typename T> T erfasse_gerade_zahl(T min, T max)
{
  return erfasse_gerade_zahl<T>("\nBitte geben Sie eine gerade Zahl n > 2 ein:\t", min, max);
}

#endif

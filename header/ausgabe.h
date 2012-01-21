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

/**
 * Gibt ein Wert in einen Stream.
 *
 * @param  wert     Der Wert, welcher in einen Stream gegeben werden soll.
 * @param  ausgabe  Der Stream, in den der Wert gegeben werden soll. Default = std::cout.
 */
template <typename T> void schreibe(T wert, std::ostream& ausgabe = std::cout)
{
  cout << wert;
}

/**
 * Gibt ein Wert in einen Stream.
 *
 * @param  wert        Der Wert, welcher in einen Stream gegeben werden soll.
 * @param  feldbreite  Die Breite des Wertes der dargestellt werden soll.
 * @param  ausgabe     Der Stream, in den der Wert gegeben werden soll. Default = std::cout.
 */
template <typename T> void schreibe(T wert, int feldbreite, std::ostream& ausgabe = std::cout)
{
  streamsize alte_feldbreite = ausgabe.width();
  ausgabe.width(feldbreite);
  ausgabe << wert;
  ausgabe.width(alte_feldbreite);
}

/**
 * Gibt eine Zahl, unter Verwendung von Schaltern und einer Feldbreite, auf dem Bildschirm aus.
 *
 * @param  zahl        Die Zahl die geschrieben werden soll.
 * @param  feldbreite  Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param  format      Das Format, mitdem die Zahl geschrieben werden soll.
 * @param  ausgabe     Der Stream, in den der Wert gegeben werden soll. Default = std::cout.
 */
template <typename T> void schreibe(T wert, streamsize feldbreite, ios_base::fmtflags format, std::ostream& ausgabe = std::cout)
{
  ios_base::fmtflags format_array[] = {format};
  schreibe<T>(wert, feldbreite, format_array, 1, ausgabe);
}

/**
 * Gibt eine Zahl, unter Verwendung von Schaltern und einer Feldbreite, auf dem Bildschirm aus.
 *
 * @param  wert            Die Zahl die geschrieben werden soll.
 * @param  feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param  format          Ein Array mit den Formaten.
 * @param  anzahl_formate  Die Anzahl der Formate im Array.
 * @param  ausgabe         Der Stream, in den der Wert gegeben werden soll. Default = std::cout.
 */
template <typename T> void schreibe(T wert, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate, std::ostream& ausgabe = std::cout)
{
  streamsize alte_feldbreite = ausgabe.width();
  ausgabe.width(feldbreite);
  schreibe<T>(wert, format, anzahl_formate);
  ausgabe.width(alte_feldbreite);
}

/**
 * Gibt eine Zahl, unter Verwendung von Schaltern, auf dem Bildschirm aus.
 *
 * @param  wert     Die Zahl die geschrieben werden soll.
 * @param  format   Das Format, mitdem die Zahl geschrieben werden soll.
 * @param  ausgabe  Der Stream, in den der Wert gegeben werden soll. Default = std::cout.
 */
template <typename T> void schreibe(T wert, ios_base::fmtflags format, std::ostream& ausgabe = std::cout)
{
  ios_base::fmtflags format_array[] = {format};
  schreibe<T>(wert, format_array, 1);
}

/**
 * Gibt eine Zahl, unter Verwendung von Schaltern, auf dem Bildschirm aus.
 *
 * @param  wert            Die Zahl die geschrieben werden soll.
 * @param  format          Ein Array mit den Formaten.
 * @param  anzahl_formate  Die Anzahl der Formate im Array.
* @param  ausgabe          Der Stream, in den der Wert gegeben werden soll. Default = std::cout.
 */
template <typename T> void schreibe(T wert, ios_base::fmtflags format[], int anzahl_formate, std::ostream& ausgabe = std::cout)
{
  int schalter_zaehler = 0;
  for (schalter_zaehler = 0; schalter_zaehler < anzahl_formate; ++schalter_zaehler)
  {
    setze_schalter(format[schalter_zaehler], ausgabe);
  }
  ausgabe << wert;
  for (schalter_zaehler = 0; schalter_zaehler < anzahl_formate; ++schalter_zaehler)
  {
    ausgabe.unsetf(format[schalter_zaehler]);
  }
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
 * @param  ausgabe         Der Stream, in den der Wert gegeben werden soll. Default = std::cout.
 */
template <typename T> void schreibe(T wert, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate, std::ostream& ausgabe = std::cout)
{
  char altes_fuellzeichen = ausgabe.fill();
  ausgabe.fill(fuellzeichen);
  schreibe<T>(wert, feldbreite, format, anzahl_formate, ausgabe);
  ausgabe.fill(altes_fuellzeichen);
}

/**
 * Gibt eine Zahl, unter Verwendung von Schaltern und einer Feldbreite, auf dem Bildschirm aus.
 * Außerdem wird ein Fuellzeichen fuer die Leerstellen eingefuegt.
 *
 * @param  zahl          Die Zahl die geschrieben werden soll.
 * @param  feldbreite    Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param  fuellzeichen  Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param  format        Das Format, mitdem die Zahl geschrieben werden soll.
 * @param  ausgabe       Der Stream, in den der Wert gegeben werden soll. Default = std::cout.
 */
template <typename T> void schreibe(T wert, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format, std::ostream& ausgabe = std::cout)
{
  ios_base::fmtflags format_array[] = {format};
  schreibe<T>(wert, feldbreite, fuellzeichen, format_array, 1, ausgabe);
}



/**
 * Gibt eine Zahl, unter Verwendung von Schaltern und einer Feldbreite, auf dem Bildschirm aus.
 * Weiterhin kann die Praezision fuer die Nachkommastellen angegeben werden.
 *
 * @param  praezision      Die Praezision der Nachkommastellen.
 * @param  wert            Die Zahl die geschrieben werden soll.
 * @param  feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param  format          Ein Array mit den Formaten.
 * @param  anzahl_formate  Die Anzahl der Formate im Array.
 * @param  ausgabe         Der Stream, in den der Wert gegeben werden soll. Default = std::cout.
 */
template <typename T> void schreibe(streamsize praezision, T wert, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate, std::ostream& ausgabe = std::cout)
{
  streamsize alte_praezision = ausgabe.precision();
  ausgabe.precision(praezision);
  schreibe(wert, feldbreite, format, anzahl_formate, ausgabe);
  ausgabe.precision(alte_praezision);
}

/**
 * Gibt eine Zahl, unter Verwendung von Schaltern und einer Feldbreite, auf dem Bildschirm aus.
 * Außerdem wird ein Fuellzeichen fuer die Leerstellen eingefuegt.
 * Weiterhin kann die Praezision fuer die Nachkommastellen angegeben werden.
 *
 * @param  praezision      Die Praezision der Nachkommastellen.
 * @param  wert            Die Zahl die geschrieben werden soll.
 * @param  feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param  fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param  format          Ein Array mit den Formaten.
 * @param  anzahl_formate  Die Anzahl der Formate im Array.
 * @param  ausgabe         Der Stream, in den der Wert gegeben werden soll. Default = std::cout.
 */
template <typename T> void schreibe(streamsize praezision, T wert, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate, std::ostream& ausgabe = std::cout)
{
  streamsize alte_praezision = ausgabe.precision();
  ausgabe.precision(praezision);
  schreibe<T>(wert, feldbreite, fuellzeichen, format, anzahl_formate, ausgabe);
  ausgabe.precision(alte_praezision);
}

/**
 * Gbit einen Wert n mal in einen Stream.
 *
 * @param  wert     Der Wert, welcher in den Stream gegeben werden soll.
 * @param  anzahl   Die Anzahl, wie oft der Wert hintereinander geschrieben werden soll.
 * @param  ausgabe  Der Stream, in den der Wert gegeben werden soll. Default = std::cout.
 */
template <typename T, typename Indextyp> void schreibe_n_mal(T wert, Indextyp anzahl, std::ostream& ausgabe = std::cout)
{
  while (--anzahl > 0)
  {
    ausgabe << wert;
  }
}

#endif

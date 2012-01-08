#include "header/ausgabe.h"

/**
 * Gibt ein Zeichen einmal auf den Bildschirm aus.
 * 
 * @param  zeichen  Das Zeichen, welches auf dem Bildschirm ausgegeben werden soll.
 * @param  anzahl   Die Anzahl, wie oft das Zeichen auf dem Bildschirm ausgegeben werden soll.
 * @param  datei    Entweder der Bildschirm oder eine Datei, in die das Zeichen geschrieben werden soll.
 */
void schreibe(int anzahl, char zeichen, FILE *datei)
{
  while (anzahl-- > 0)
  {
    fputc(zeichen, datei);
  }
}

/**
 * Gibt ein Zeichen so oft aus auf den Bildschirm aus, wie es mit anzahl festegelegt wird.
 * 
 * @param  zeichen  Das Zeichen, welches auf dem Bildschirm ausgegeben werden soll.
 * @param  anzahl   Die Anzahl, wie oft das Zeichen auf dem Bildschirm ausgegeben werden soll.
 */
void schreibe(int anzahl, char zeichen)
{
  schreibe(anzahl, zeichen, stdout);
}

/**
 * Gibt eine Double Zahl auf den Bildschirm aus oder in eine Datei.
 * 
 * @param  zahl    Die Zahl, welche auf dem Bildschirm ausgegeben werden soll.
 * @param  feldbreite  Die breite, die die Zahl bei der Ausgabe einnehmen soll.
 * @param  datei   Entweder der Bildschirm oder eine Datei, in die die Zahl geschrieben werden soll.
 */
void schreibe(int zahl, int feldbreite, FILE *datei)
{
  fprintf(datei, "%*d", feldbreite, zahl);
}

/**
 * Gibt eine Ganzzahl auf den Bildschirm aus.
 * 
 * @param  zahl        Die Zahl, welche auf dem Bildschirm ausgegeben werden soll.
 * @param  feldbreite  Die Breite, die die Zahl bei der Ausgabe einnehmen soll.
 */
void schreibe(int zahl, int feldbreite)
{
  schreibe(zahl, feldbreite, stdout);
}

/**
 * Gibt eine Ganzzahl auf den Bildschirm aus.
 * 
 * @param  zahl    Die Zahl, welche auf dem Bildschirm ausgegeben werden soll.
 */
void schreibe(int zahl)
{
  schreibe(zahl, 0);
}

/**
 * Gibt eine Double Zahl auf den Bildschirm aus oder in eine Datei.
 * 
 * @param  zahl    Die Zahl, welche auf dem Bildschirm ausgegeben werden soll.
 * @param  datei   Entweder der Bildschirm oder eine Datei, in die die Zahl geschrieben werden soll.
 */
void schreibe(double zahl, FILE *datei)
{
  fprintf(datei, "%.2f", zahl);
}

/**
 * Gibt eine Double Zahl auf den Bildschirm aus.
 * 
 * @param  zahl  Die Zahl, welche auf dem Bildschirm ausgegeben werden soll.
 */
void schreibe(double zahl)
{
  schreibe(zahl, stdout);
}

/**
 * Gibt eine Floating Point Zahl auf den Bildschirm aus oder in eine Datei.
 * 
 * @param  zahl    Die Zahl, welche auf dem Bildschirm ausgegeben werden soll.
 * @param  datei   Entweder der Bildschirm oder eine Datei, in die die Zahl geschrieben werden soll.
 */
void schreibe(float zahl, FILE *datei)
{
  fprintf(datei, "%.2f", zahl);
}

/**
 * Gibt eine Floating Point Zahl auf den Bildschirm aus.
 * 
 * @param  zahl  Die Zahl, welche auf dem Bildschirm ausgegeben werden soll.
 */
void schreibe(float zahl)
{
  schreibe(zahl, stdout);
}

/**
 * Gibt ein int Array auf den Bildschirm aus.
 * 
 * @param  array       Das Array, welches auf den Bildschirm ausgegeben werden soll.
 * @param  laenge      Die Laenge des int Arrays.
 * @param  feldbreite  Die Breite, die ein Element des Arrays bei der Ausgabe einnehmen soll.
 * @param  trenner     Ein Trenner, der zwichen den einzelnen Elementen des Arrays, bei der Ausgabe, geschrieben werden soll.
 * @param  am_ende     Bestimmt, ob beim letzten Element des Arrays, der Trenner ebenfalls geschrieben werde soll.
 * @param  datei       Entweder der Bildschirm oder eine Datei, in die die Zahl geschrieben werden soll.
 */
void schreibe(const int array[], int laenge, int feldbreite, const char *trenner, bool am_ende, FILE *datei)
{
  for (int i = 0; i < laenge; i++)
  {
    fprintf(datei, "%*d%s", feldbreite, array[i], trenner);
  }
  fprintf(datei, "%*d%s", feldbreite, array[laenge - 1], am_ende ? trenner : "");
}

/**
 * Gibt ein int Array auf den Bildschirm aus.
 * 
 * @param  array       Das Array, welches auf den Bildschirm ausgegeben werden soll.
 * @param  laenge      Die Laenge des int Arrays.
 * @param  feldbreite  Die Breite, die ein Element des Arrays bei der Ausgabe einnehmen soll.
 * @param  trenner     Ein Trenner, der zwichen den einzelnen Elementen des Arrays, bei der Ausgabe, geschrieben werden soll.
 * @param  am_ende     Bestimmt, ob beim letzten Element des Arrays, der Trenner ebenfalls geschrieben werde soll.
 */
void schreibe(const int array[], int laenge, int feldbreite, const char *trenner, bool am_ende)
{
  schreibe(array, laenge, feldbreite, trenner, am_ende, stdout);
}

/**
 * Gibt ein int Array auf den Bildschirm aus.
 * 
 * @param  array       Das Array, welches auf den Bildschirm ausgegeben werden soll.
 * @param  laenge      Die Laenge des int Arrays.
 * @param  feldbreite  Die Breite, die ein Element des Arrays bei der Ausgabe einnehmen soll.
 * @param  trenner     Ein Trenner, der zwichen den einzelnen Elementen des Arrays, bei der Ausgabe, geschrieben werden soll.
 */
void schreibe(const int array[], int laenge, int feldbreite, const char *trenner)
{
  schreibe(array, laenge, feldbreite, trenner, false);
}

/**
 * Gibt ein int Array auf den Bildschirm aus.
 * 
 * @param  array  Das Array, welches auf den Bildschirm ausgegeben werden soll.
 * @param  laenge Die Laenge des int Arrays.
 * @param  feldbreite  Die Breite, die ein Element des Arrays bei der Ausgabe einnehmen soll.
 */
void schreibe(const int array[], int laenge, int feldbreite)
{
  schreibe(array, laenge, feldbreite, "", false);
}

/**
 * Gibt ein int Array auf den Bildschirm aus.
 * 
 * @param  array  Das Array, welches auf den Bildschirm ausgegeben werden soll.
 * @param  laenge Die Laenge des int Arrays.
 */
void schreibe(const int array[], int laenge)
{
  schreibe(array, laenge, 0, " ", false);
}

/**
 * Schreibt eine long Zahl unter Verwendung von Schaltern zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(long zahl, ios_base::fmtflags format[], int anzahl_formate)
{
  for (int i = 0; i < anzahl_formate; i++)
  {
    setze_schalter(format[i]);
  }
  cout << zahl;
  for (int i = 0; i < anzahl_formate; i++)
  {
    cout.unsetf(format[i]);
  }
}

/**
 * Schreibt eine long Zahl unter Verwendung von einem Schaltern zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param format          Das Format, mitdem die Zahl geschrieben werden soll.
 */
void schreibe(long zahl, ios_base::fmtflags format)
{
  ios_base::fmtflags format_array[] = {format};
  schreibe(zahl, format_array, 1);
}

/**
 * Schreibt eine long Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(long zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate)
{
  streamsize alte_feldbreite = cout.width();
  cout.width(feldbreite);
  schreibe(zahl, format, anzahl_formate);
  cout.width(alte_feldbreite);
}

/**
 * Schreibt eine long Zahl unter Verwendung von einem Schaltern und einer Feldbreite zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param format          Das Format, mitdem die Zahl geschrieben werden soll.
 */
void schreibe(long zahl, streamsize feldbreite, ios_base::fmtflags format)
{
  ios_base::fmtflags format_array[] = {format};
  schreibe(zahl, feldbreite, format_array, 1);
}

/**
 * Schreibt eine long Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * Außerdem wird ein Fuellzeichen fuer die Leerstellen eingefuegt.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(long zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate)
{
  char altes_fuellzeichen = cout.fill();
  cout.fill(fuellzeichen);
  schreibe(zahl, feldbreite, format, anzahl_formate);
  cout.fill(altes_fuellzeichen);
}

/**
 * Schreibt eine long Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * Außerdem wird ein Fuellzeichen fuer die Leerstellen eingefuegt.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param format          Das Format, mitdem die Zahl geschrieben werden soll.
 */
void schreibe(long zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format)
{
  ios_base::fmtflags format_array[] = {format};
  schreibe(zahl, feldbreite, fuellzeichen, format_array, 1);
}

/**
 * Schreibt eine int Zahl unter Verwendung von Schaltern zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(int zahl, ios_base::fmtflags format[], int anzahl_formate)
{
  schreibe(static_cast<long>(zahl), format, anzahl_formate);
}

/**
 * Schreibt eine int Zahl unter Verwendung von einem Schaltern zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param format          Das Format, mitdem die Zahl geschrieben werden soll.
 */
void schreibe(int zahl, ios_base::fmtflags format)
{
  schreibe(static_cast<long>(zahl), format);
}

/**
 * Schreibt eine int Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(int zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate)
{
  schreibe(static_cast<long>(zahl), feldbreite, format, anzahl_formate);
}

/**
 * Schreibt eine long Zahl unter Verwendung von einem Schaltern und einer Feldbreite zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param format          Das Format, mitdem die Zahl geschrieben werden soll.
 */
void schreibe(int zahl, streamsize feldbreite, ios_base::fmtflags format)
{
  schreibe(static_cast<long>(zahl), feldbreite, format);
}

/**
 * Schreibt eine int Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * Außerdem wird ein Fuellzeichen fuer die Leerstellen eingefuegt.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(int zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate)
{
  schreibe(static_cast<long>(zahl), feldbreite, fuellzeichen, format, anzahl_formate);
}

/**
 * Schreibt eine int Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * Außerdem wird ein Fuellzeichen fuer die Leerstellen eingefuegt.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param format          Das Format, mitdem die Zahl geschrieben werden soll.
 */
void schreibe(int zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format)
{
  schreibe(static_cast<long>(zahl), feldbreite, fuellzeichen, format);
}

/**
 * Schreibt eine long double Zahl unter Verwendung von Schaltern zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(long double zahl, ios_base::fmtflags format[], int anzahl_formate)
{
  for (int i = 0; i < anzahl_formate; i++)
  {
    setze_schalter(format[i]);
  }
  cout << zahl;
  for (int i = 0; i < anzahl_formate; i++)
  {
    cout.unsetf(format[i]);
  }
}

/**
 * Schreibt eine long double Zahl unter Verwendung von einem Schaltern zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param format          Das Format, mitdem die Zahl geschrieben werden soll.
 */
void schreibe(long double zahl, ios_base::fmtflags format)
{
  ios_base::fmtflags format_array[] = {format};
  schreibe(zahl, format_array, 1);
}

/**
 * Schreibt eine long double Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(long double zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate)
{
  streamsize alte_feldbreite = cout.width();
  cout.width(feldbreite);
  schreibe(zahl, format, anzahl_formate);
  cout.width(alte_feldbreite);
}

/**
 * Schreibt eine long double Zahl unter Verwendung von einem Schaltern und einer Feldbreite zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param format          Das Format, mitdem die Zahl geschrieben werden soll.
 */
void schreibe(long double zahl, streamsize feldbreite, ios_base::fmtflags format)
{
  ios_base::fmtflags format_array[] = {format};
  schreibe(zahl, feldbreite, format_array, 1);
}

/**
 * Schreibt eine long double Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * Außerdem wird ein Fuellzeichen fuer die Leerstellen eingefuegt.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(long double zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate)
{
  char altes_fuellzeichen = cout.fill();
  cout.fill(fuellzeichen);
  schreibe(zahl, feldbreite, format, anzahl_formate);
  cout.fill(altes_fuellzeichen);
}

/**
 * Schreibt eine long double Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * Außerdem wird ein Fuellzeichen fuer die Leerstellen eingefuegt.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param format          Das Format, mitdem die Zahl geschrieben werden soll.
 */
void schreibe(long double zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format)
{
  ios_base::fmtflags format_array[] = {format};
  schreibe(zahl, feldbreite, fuellzeichen, format_array, 1);
}

/**
 * Schreibt eine long double Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * Außerdem wird ein Fuellzeichen fuer die Leerstellen eingefuegt.
 * Weiterhin kann die Praezision fuer die Nachkommastellen angegeben werden.
 * 
 * @param praezision      Die Praezision der Nachkommastellen.
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(streamsize praezision, long double zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate)
{
  streamsize alte_praezision = cout.precision();
  cout.precision(praezision);
  schreibe(zahl, feldbreite, fuellzeichen, format, anzahl_formate);
  cout.precision(alte_praezision);
}

/**
 * Schreibt eine long double Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * Weiterhin kann die Praezision fuer die Nachkommastellen angegeben werden.
 * 
 * @param praezision      Die Praezision der Nachkommastellen.
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(streamsize praezision, long double zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate)
{
  streamsize alte_praezision = cout.precision();
  cout.precision(praezision);
  schreibe(zahl, feldbreite, format, anzahl_formate);
  cout.precision(alte_praezision);
}

/**
 * Schreibt eine double Zahl unter Verwendung von Schaltern zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(double zahl, ios_base::fmtflags format[], int anzahl_formate)
{
  schreibe(static_cast<long double>(zahl), format, anzahl_formate);
}

/**
 * Schreibt eine double Zahl unter Verwendung von einem Schaltern zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param format          Das Format, mitdem die Zahl geschrieben werden soll.
 */
void schreibe(double zahl, ios_base::fmtflags format)
{
  schreibe(static_cast<long double>(zahl), format);
}

/**
 * Schreibt eine double Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(double zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate)
{
  schreibe(static_cast<long double>(zahl), feldbreite, format, anzahl_formate);
}

/**
 * Schreibt eine double Zahl unter Verwendung von einem Schaltern und einer Feldbreite zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param format          Das Format, mitdem die Zahl geschrieben werden soll.
 */
void schreibe(double zahl, streamsize feldbreite, ios_base::fmtflags format)
{
  schreibe(static_cast<long double>(zahl), feldbreite, format);
}

/**
 * Schreibt eine double Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * Außerdem wird ein Fuellzeichen fuer die Leerstellen eingefuegt.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(double zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate)
{
  schreibe(static_cast<long double>(zahl), feldbreite, fuellzeichen, format, anzahl_formate);
}

/**
 * Schreibt eine double Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param format          Das Format, mitdem die Zahl geschrieben werden soll.
 */
void schreibe(double zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format)
{
  schreibe(static_cast<long double>(zahl), feldbreite, fuellzeichen, format);
}

/**
 * Schreibt eine double Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * Außerdem wird ein Fuellzeichen fuer die Leerstellen eingefuegt.
 * Weiterhin kann die Praezision fuer die Nachkommastellen angegeben werden.
 * 
 * @param praezision      Die Praezision der Nachkommastellen.
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(streamsize praezision, double zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate)
{
  schreibe(praezision, static_cast<long double>(zahl), feldbreite, fuellzeichen, format, anzahl_formate);
}

/**
 * Schreibt eine double Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * Weiterhin kann die Praezision fuer die Nachkommastellen angegeben werden.
 * 
 * @param praezision      Die Praezision der Nachkommastellen.
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(streamsize praezision, double zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate)
{
  schreibe(praezision, static_cast<long double>(zahl), feldbreite, format, anzahl_formate);
}

/**
 * Schreibt eine float Zahl unter Verwendung von Schaltern zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(float zahl, ios_base::fmtflags format[], int anzahl_formate)
{
  schreibe(static_cast<long double>(zahl), format, anzahl_formate);
}

/**
 * Schreibt eine float Zahl unter Verwendung von einem Schaltern zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param format          Das Format, mitdem die Zahl geschrieben werden soll.
 */
void schreibe(float zahl, ios_base::fmtflags format)
{
  schreibe(static_cast<long double>(zahl), format);
}

/**
 * Schreibt eine float Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(float zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate)
{
  schreibe(static_cast<long double>(zahl), feldbreite, format, anzahl_formate);
}

/**
 * Schreibt eine float Zahl unter Verwendung von einem Schaltern und einer Feldbreite zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param format          Das Format, mitdem die Zahl geschrieben werden soll.
 */
void schreibe(float zahl, streamsize feldbreite, ios_base::fmtflags format)
{
  schreibe(static_cast<long double>(zahl), feldbreite, format);
}

/**
 * Schreibt eine float Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * Außerdem wird ein Fuellzeichen fuer die Leerstellen eingefuegt.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(float zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate)
{
  schreibe(static_cast<long double>(zahl), feldbreite, fuellzeichen, format, anzahl_formate);
}

/**
 * Schreibt eine float Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * 
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param format          Das Format, mitdem die Zahl geschrieben werden soll.
 */
void schreibe(float zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format)
{
  schreibe(static_cast<long double>(zahl), feldbreite, fuellzeichen, format);
}

/**
 * Schreibt eine float Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * Außerdem wird ein Fuellzeichen fuer die Leerstellen eingefuegt.
 * Weiterhin kann die Praezision fuer die Nachkommastellen angegeben werden.
 * 
 * @param praezision      Die Praezision der Nachkommastellen.
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param fuellzeichen    Das Fuellzeichen, welches anstelle von Leerzeichen geschrieben werden soll.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(streamsize praezision, float zahl, streamsize feldbreite, char fuellzeichen, ios_base::fmtflags format[], int anzahl_formate)
{
  schreibe(praezision, static_cast<long double>(zahl), feldbreite, fuellzeichen, format, anzahl_formate);
}

/**
 * Schreibt eine float Zahl unter Verwendung von Schaltern und einer Felbreite zur Formatierung.
 * Weiterhin kann die Praezision fuer die Nachkommastellen angegeben werden.
 * 
 * @param praezision      Die Praezision der Nachkommastellen.
 * @param zahl            Die Zahl die geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben der Zahl veranschlagt wird.
 * @param format          Ein Array mit den Formaten.
 * @param anzahl_formate  Die Anzahl der Formate im Array.
 */
void schreibe(streamsize praezision, float zahl, streamsize feldbreite, ios_base::fmtflags format[], int anzahl_formate)
{
  schreibe(praezision, static_cast<long double>(zahl), feldbreite, format, anzahl_formate);
}

/**
 * Schreibt einen string unter Verwendung von einem Schaltern zur Ausrichtung des Textes und einer Felbreite.
 * 
 * @param text            Der String, welcher geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben des Textes veranschlagt wird.
 * @param ausrichtung     Die Ausrichtung des Textes.
 * @param trenner         Ein Trenner, der als Fuellzeichen geschrieben werden soll.
 */
void schreibe(string text, streamsize feldbreite, ios_base::fmtflags ausrichtung, char trenner)
{
  char fill = cout.fill();
  cout.fill(trenner);
  schreibe(text, feldbreite, ausrichtung);
  cout.fill(fill);
}

/**
 * Schreibt einen string unter Verwendung von einem Schaltern zur Ausrichtung des Textes und einer Felbreite.
 * 
 * @param text            Der String, welcher geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben des Textes veranschlagt wird.
 * @param ausrichtung     Die Ausrichtung des Textes.
 */
void schreibe(string text, streamsize feldbreite, ios_base::fmtflags ausrichtung)
{
  streamsize alte_feldbreite = cout.width();
  cout.width(feldbreite);
  cout.setf(ausrichtung);
  cout << text;
  cout.unsetf(ausrichtung);
  cout.width(alte_feldbreite);
}

/**
 * Schreibt einen string unter Verwendung einer Felbreite.
 * 
 * @param text            Der String, welcher geschrieben werden soll.
 * @param feldbreite      Die Breite, welche fuer das Schreiben des Textes veranschlagt wird.
 */
void schreibe(string text, streamsize feldbreite)
{
  schreibe(text, feldbreite, cout.left);
}

/**
 * Gibt einen string auf dem Bildschirm aus.
 * 
 * @param text            Der String, welcher geschrieben werden soll.
 */
void schreibe(string text)
{
  cout << text;
}

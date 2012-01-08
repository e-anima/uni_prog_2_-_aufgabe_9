#include "header/main.h"

/**
  *  - HTW Verwaltung -
  *
  *  @author Markus Paeschke (531524)
  *  @version 1.0
  */
int main(int argc, char **argv)
{
  if (pruefe_argumente(argc, argv))
  {
    programmstart();
    cout << endl;
    schreibe(80, '-');
    programmende();
  }
  return 0;
}

/**
  * Prueft die beim Programmstart uebergebenen Parameter auf Richtigkeit.
  * Bei Fehleingaben wird der Benutzer darauf hingewiesen, indem eine Hilfe auf dem Bildschirm ausgegeben wird.
  *
  * @param  argc       Die Anzahl der Parameter die uebergeben werden.
  * @param  argv       Die Parameter die uebergebn wurden.
  *
  * @return            Ein boolscher Wert, ob die pruefung erfolgreich war (true) oder ob ein Fehler aufgetreten ist (false);
  */
bool pruefe_argumente(int argc, char* argv[])
{
  bool ist_gueltig = false;
  if (argc == 1)
  {
    ist_gueltig = true;
  }
  if (!ist_gueltig)
  {
    cout << argv[0];
    schreibe_hilfe();
  }
  return ist_gueltig;
}

/** Gibt die Hilfe fuer das Programm auf dem Bildschirm aus. */
void schreibe_hilfe()
{
  cout << endl << "Fehler, bitte folgendermassen benutzen:" << endl
       << "magisches_quadrat <Ordnung des Quadrats>" << endl << endl
       << "<Ordnung des Quadrats>" << endl
       << "\tDie Kantenlaenge des Quadrats." << endl
       << "\tDiese muss >= 1 und ungerade sein." << endl
       << "\tWird beispielsweise eine 5 eingegeben, wird ein magisches Quadrat mit 5 x 5 Feldern erzeugt." << endl << endl;
}

/** Gibt den Begruessungstext, beim Starten des Programms, auf dem Bildschirm aus. */
void programmstart()
{
  cout << endl << endl << "- HTW Verwaltung -" << endl << endl;
}

/** Gibt den Text, beim Beenden des Programms, auf dem Bildschirm aus. */
void programmende()
{
  cout << endl << "Das Programm wird beendet." << endl << endl;
}

#include "header/telefonnummer_suite.h"

void telefonnummer_test()
{
  cout << endl << endl << "-------------------- Telefonnummer Test Start ----------------" << endl << endl;

  telefonnummer_grundfunktionen();
  telefonnummer_vergleiche();

  cout << endl << endl << "-------------------- Telefonnummer Test Ende ----------------" << endl << endl;
}

void telefonnummer_grundfunktionen()
{
  cout << endl << "------- Telefonnummer Grundfunktionen -------" << endl;
  Telefonnummer die_telefonnummer1 = Telefonnummer();
  Telefonnummer die_telefonnummer2 = Telefonnummer("3256894", "62", "+23");
  Telefonnummer die_telefonnummer3 = Telefonnummer("778965", "08");
  Telefonnummer die_telefonnummer4 = Telefonnummer("666999");
  Telefonnummer tele_kopie = die_telefonnummer2;

  cout << endl
       << die_telefonnummer1 << endl
       << die_telefonnummer2 << endl
       << die_telefonnummer3 << endl
       << die_telefonnummer4 << endl
       << tele_kopie << endl << endl;

  die_telefonnummer2.setze_landesvorwahl("+55");
  cout << die_telefonnummer2 << endl;
  die_telefonnummer2.setze_ortsvorwahl("40");
  cout << die_telefonnummer2 << endl;
  die_telefonnummer2.setze_teilnehmerkennung("371964");
  cout << die_telefonnummer2 << endl << endl;

  cout << die_telefonnummer3.liefere_landesvorwahl() << endl
       << die_telefonnummer3.liefere_ortsvorwahl() << endl
       << die_telefonnummer3.liefere_teilnehmerkennung() << endl
       << die_telefonnummer3.liefere_gesamte_nummer() << endl;

  Telefonnummer tele_eingeben;
  cin >> tele_eingeben;
  cout << tele_eingeben << endl << endl;
}

void telefonnummer_vergleiche()
{
  cout << endl << "------- Telefonnummervergleiche -------" << endl;
}

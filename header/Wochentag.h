/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef WOCHENTAG_H
#define WOCHENTAG_H

#include <string>

using namespace std;


class Wochentag
{
  private:
    string wochentag;

  public:
    Wochentag();
    Wochentag(string der_wochentag);
    Wochentag(int der_index);

    virtual ~Wochentag();

    void setze_wochentag(string der_wochentag);

    string liefere_wochentag();
    string liefere_wochentag_kuerzel();

  private:
    bool ist_gueltiger_wochentag(string der_wochentag);
};

#endif

/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#ifndef BESCHREIBBAR_H
#define BESCHREIBBAR_H

#include <string>

using std::string;

class Beschreibbar
{
  public:
    virtual ~Beschreibbar();

    /**
     * Liefert die Beschreibung eines Objekts als Text.
     *
     * @return  Die Beschreiung eines Objekts als Text.
     */
    virtual string liefere_beschreibung() const = 0;
};

#endif

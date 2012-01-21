/**
 *
 *  @author Markus Paeschke (s0531524)
 */

#include "header/helfer.h"

/**
 * Setzt einen Schalter im Ausgabestream.
 *
 * @param format  Der Schalter, welche gesetzt werden soll.
 */
void setze_schalter(ios_base::fmtflags format, std::ostream& ausgabe = std::cout)
{
  if (format == ausgabe.dec || format == ausgabe.oct || format == ausgabe.hex)
  {
    ausgabe.setf(format, ios_base::basefield);
  }
  else
  {
    if (format == ausgabe.left || format == ausgabe.right || format == ausgabe.internal)
    {
      ausgabe.setf(format, ios_base::adjustfield);
    }
    else if (format == ausgabe.scientific || format == ausgabe.fixed)
    {
      ausgabe.setf(format, ios_base::floatfield);
    }
    else
    {
      ausgabe.setf(format);
    }
  }
}

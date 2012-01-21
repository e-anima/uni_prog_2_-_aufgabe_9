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
void setze_schalter(ios_base::fmtflags format)
{
  if (format == cout.dec || format == cout.oct || format == cout.hex)
  {
    cout.setf(format, ios_base::basefield);
  }
  else
  {
    if (format == cout.left || format == cout.right || format == cout.internal)
    {
      cout.setf(format, ios_base::adjustfield);
    }
    else if (format == cout.scientific || format == cout.fixed)
    {
      cout.setf(format, ios_base::floatfield);
    }
    else
    {
      cout.setf(format);
    }
  }
}

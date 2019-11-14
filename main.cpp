#include <string.h>

#include "curses.h"
#include "dominios.h"
#include "interfaces.h"
#include "controladoras.h"
using namespace std;

int main()
{
    //Estado estado("df");

    Controladora_Geral cntrGeral;
    cntrGeral.rodar();

                                                                // Finaliza curses.

    return 0;
}

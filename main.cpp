#include <iostream>
#include "curses.h"

using namespace std;

int main()
{
    initscr();
    printw("Ola mundo");
    getch();
    refresh();
    endwin();
    return 0;
}

#include "curses.h"
#include "telas.h"


void Telas::print_menu_inicial(){
    printw("MENU INCIAL : SELECIONE A OPCAO DESEJADA\n");
    printw("1 - CONSULTAR CARONAS\n");
    printw("2 - CADASTRAR NOVO USUARIO\n");
    printw("3 - AUTENTICAR USUARIO\n");
    printw("4 - SAIR\n");
    printw("SELECAO: ");

}

void Telas::print_menu_carona(){
    printw("MENU DE CARONA : SELECIONE A OPCAO DESEJADA\n");
    printw("1 - CADASTRAR CARONA\n");
    printw("2 - DESCADASTRAR CARONA\n");
}

void Telas::print_menu_reserva(){
    printw("MENU DE RESERVA : SELECIONE A OPCAO DESEJADA\n");
    printw("1 - RESERVAR CARONA\n");
    printw("2 - CANCELAR RESERVA\n");
}

void Telas::print_menu_usuario(){
    printw("MENU DO USUARIO : SELECIONE A OPCAO DESEJADA\n");
    printw("1 - MENU DE CARONA\n");
    printw("2 - MENU DE RESERVA\n");
    printw("3 - DESCADASTRAR USUARIO\n");
    printw("SELECAO: ");
}

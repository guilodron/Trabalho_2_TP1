#include "controladoras.h"
#include "curses.h"
#include "telas.h"
#include <stdlib.h>
using namespace std;

bool Controladora_IAA::executar()throw(runtime_error){
    clear();
    bool run{true};
    char str[30];
    bool resultado = false;
    Email email;
    Senha senha;
    while(run){
        printw("AUTENTICAR USUARIO\n");
        while(run){
            mvprintw(2, 5, "Digite o email: ");
            getstr(str);
            try{
                email.set_email(str);
                run = false;
            }catch(invalid_argument e){
                mvprintw(2, 50, e.what());
            }
        }
        run = true;

        while(run){
            mvprintw(3, 5, "Digite a senha: ");
            getstr(str);
            try{
                senha.set_senha(str);
                run = false;
            }catch(invalid_argument e){
                mvprintw(3, 50, e.what());
            }
        }
        printw("USUARIO AUTENTICADO. PRESSIONE ENTER PARA ENTRAR\n");
        resultado =  true;
        this->autenticado = true;
        getch();
        run = false;

    }

    return resultado;
}

//-----------------------------------------------------------------------------------

int Controladora_IUA::executar()throw(runtime_error){
    int selecao;
    char dado[1];
    bool run{true};
    while(run){
        clear();
        this->tela.print_menu_usuario();
        getstr(dado);
        switch(atoi(dado)){
            case 1:
                return 1;
                break;
            case 2:
                return 2;
                break;
            case 3:
                printw("USUARIO APAGADO. APERTE ENTER PARA RETORNAR\n");
                getch();
                break;
            case 4:
                return 4;
                break;
            default:
                printw("VALOR INVALIDO, RETORNANDO AO MENU INCIAL\n");
                getch();
                break;
        }
    }


    return 4;

}

void Controladora_IUA::executa_menu_cadastro(){

    clear();
    bool run{true};
    Usuario user;
    Conta conta;
    char str[30];

    while(run){
        printw("MENU CADASTRO\n");
        while(run){
            mvprintw(2, 5, "Digite o nome: ");
            getstr(str);
            try{
                user.set_nome(str);
                run = false;
            }catch(invalid_argument e){
                mvprintw(2, 50, e.what());
            }
        }
        run = true;

        while(run){
            mvprintw(3, 5, "Digite o telefone: ");
            getstr(str);
            try{
                user.set_telefone(str);
                run = false;
            }catch(invalid_argument e){
                mvprintw(3, 50, e.what());
            }
        }
        run = true;

        while(run){
            mvprintw(4, 5, "Digite o email: ");
            getstr(str);
            try{
                user.set_email(str);
                run = false;
            }catch(invalid_argument e){
                mvprintw(4, 50, e.what());
            }
        }
        run = true;

        while(run){
            mvprintw(5, 5, "Digite a senha: ");
            getstr(str);
            try{
                user.set_senha(str);
                run = false;
            }catch(invalid_argument e){
                mvprintw(5, 50, e.what());
            }
        }
        run = true;

        while(run){
            mvprintw(6, 5, "Digite o CPF: ");
            getstr(str);
            try{
                user.set_cpf(str);
                run = false;
            }catch(invalid_argument e){
                mvprintw(6, 50, e.what());
            }
        }
        run = true;

        clear();
        printw("Deseja cadastrar 1 ou 2 contas?: ");
        getstr(str);
        int a = atoi(str);
        for(int i{0}; i < a; i++){
            clear();
            printw("Conta %d\n", i+1);
            while(run){
                mvprintw(2, 5, "Digite o Codigo de Banco: ");
                getstr(str);
                try{
                    conta.set_codigo_de_banco(str);
                    run = false;
                }catch(invalid_argument e){
                    mvprintw(2, 50, e.what());
                }
            }
            run  = true;

            while(run){
                mvprintw(3, 5, "Digite o Numero de Agencia: ");
                getstr(str);
                try{
                    conta.set_numero_de_agencia(str);
                    run = false;
                }catch(invalid_argument e){
                    mvprintw(3, 50, e.what());
                }
            }
            run  = true;

            while(run){
                mvprintw(4, 5, "Digite o Numero de Conta: ");
                getstr(str);
                try{
                    conta.set_numero_de_conta(str);
                    run = false;
                }catch(invalid_argument e){
                    mvprintw(4, 50, e.what());
                }
            }
            run  = true;
        }
        clear();

        mvprintw(8, 5, "Usuario Cadastradp\n");
        mvprintw(9, 5, "Deseja realizar nova busca? s/n: ");
        getstr(str);
        if(str[0] == 'n' || str[0] == 'n'){
            run = false;
            clear();
        }else clear();
    }
}

//-----------------------------------------------------------------------------------

bool Controladora_ICA::executar()throw(runtime_error){

    char dado[1];
    tela.print_menu_carona();
    getstr(dado);
    clear();
    printw("Valor informado %s\n", dado);
    getch();
    clear();
    endwin();

    return true;
}

void Controladora_ICA::executa_menu_consulta(){
    clear();
    Cidade  cidade_origem, cidade_destino;
    Estado estado_origem, estado_destino;
    Data data;
    bool run{true};
    char string[10];
    char data_str[9];

    while(run){
        printw("CONSULTA DE CARONA\N");
        while(run){
            mvprintw(2, 5, "Digite a cidade de origem: ");
            getstr(string);
            try{
                cidade_origem.set_nome_cidade(string);
                run = false;
            }catch(invalid_argument e){
                mvprintw(2, 50, e.what());
            }
        }
        run = true;

        while(run){
            mvprintw(3, 5, "Digite a sigla(maiuscula) do estado de origem: ");
            getstr(string);
            try{
                estado_origem.set_estado(string);
                run = false;
            }catch(invalid_argument e){
                mvprintw(3, 50, e.what());
            }
        }
        run = true;

        while(run){
            mvprintw(4, 5, "Digite a cidade de destino: ");
            getstr(string);
            try{
                cidade_destino.set_nome_cidade(string);
                run = false;
            }catch(invalid_argument e){
                mvprintw(4, 50, e.what());
            }
        }
        run = true;

        while(run){
            mvprintw(5, 5, "Digite a sigla(maiuscula) do estado de destino: ");
            getstr(string);
            try{
                estado_destino.set_estado(string);
                run = false;
            }catch(invalid_argument e){
                mvprintw(5, 50, e.what());
            }
        }
        run = true;

        while(run){
            mvprintw(6, 5, "Digite a data de partida: ");
            getstr(data_str);
            try{
                data.set_data(data_str);
                run = false;
            }catch(invalid_argument e){
                mvprintw(6, 50, e.what());
            }
        }
        run = true;

        mvprintw(8, 5, "Carona Nao Encontrada\n");
        mvprintw(9, 5, "Deseja realizar nova busca? s/n: ");
        getstr(string);
        if(string[0] == 'n' || string[0] == 'n'){
            run = false;
            clear();
        }else clear();
    }



}

//-----------------------------------------------------------------------------------

bool Controladora_IRA::executar()throw(runtime_error){

    char dado[1];
    tela.print_menu_reserva();
    getstr(dado);
    clear();
    printw("Valor informado %s\n", dado);
    getch();
    clear();
    endwin();

    return true;
}

//-----------------------------------------------------------------------------------

void Controladora_Geral::rodar(){
    char dado[1];
    this->is_running = true;
    initscr();
    while(is_running){
        clear();
        this->tela.print_menu_inicial();
        getstr(dado);
        switch(atoi(dado)){
            case 1:
                this->controladora_ICA.executa_menu_consulta();
                break;
            case 2:
                this->controladora_IUA.executa_menu_cadastro();
                break;
            case 3:
                if(this->controladora_IAA.executar()){
                    int retorno_IUA = this->controladora_IUA.executar();
                    if(retorno_IUA == 1){
                        this->controladora_ICA.executar();
                    }else if(retorno_IUA == 2){
                        this->controladora_IRA.executar();
                    }
                }
                break;
            case 4:
                is_running = false;
        }
    }

}

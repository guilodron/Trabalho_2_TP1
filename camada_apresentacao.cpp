#include "camada_apresentacao.h"
#include <iostream>

bool executar(){
       bool rodar{true};
       int escolha;
       while(rodar){
           cout << "Escolha uma opcao:" << endl;
           cout << "1 - lixo" << endl;
           cout << "2 - sair" << endl;
           cin >> escolha;
           if(escolha == 2){
               rodar = false;
           }else{
            cout << "opcao boa" << endl;
        }
    }
    return true;
}

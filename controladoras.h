
#ifndef CONTROLADORAS_H
#define CONTROLADORAS_H

#include "interfaces.h"
#include "telas.h"

class Controladora_Geral;
class Controladora_IAA;
class Controladora_ICA;
class Controladora_IRA;
class Controladora_IUA;

class Controladora_IAA:public IAA{

private:
    bool autenticado{false};
    IAS* controladora_IAS;
    Telas tela;

public:

    bool is_autenticado(){return this->autenticado;}

    bool executar()throw(runtime_error);

    void set_controladora_IAS(IAS*);
};

void inline Controladora_IAA::set_controladora_IAS(IAS* controladora_IAS){
    this->controladora_IAS = controladora_IAS;
}

//-----------------------------------------------------------------------------------

class Controladora_IUA:public IUA{

private:
    IUS* controladora_IUS;
    Telas tela;

public:

    int executar()throw(runtime_error);

    void executa_menu_cadastro();

    void set_controladora_IUS(IUS*);
};

void inline Controladora_IUA::set_controladora_IUS(IUS* controladora_IUS){
    this->controladora_IUS = controladora_IUS;
}

//-----------------------------------------------------------------------------------

class Controladora_ICA:public ICA{

private:
    ICS* controladora_ICS;
    Telas tela;

public:

    void executa_menu_consulta();

    bool executar()throw(runtime_error);

    void set_controladora_ICS(ICS*);
};

void inline Controladora_ICA::set_controladora_ICS(ICS* controladora_ICS){
    this->controladora_ICS = controladora_ICS;
}

//-----------------------------------------------------------------------------------

class Controladora_IRA:public IRA{

private:
    IRS* controladora_IRS;
    Telas tela;

public:

    bool executar()throw(runtime_error);

    void set_controladora_IRS(IRS*);
};

void inline Controladora_IRA::set_controladora_IRS(IRS* controladora_IRS){
    this->controladora_IRS = controladora_IRS;
}

//-----------------------------------------------------------------------------------

class Controladora_Geral{
private:
    Controladora_IAA controladora_IAA;
    Controladora_ICA controladora_ICA;
    Controladora_IRA controladora_IRA;
    Controladora_IUA controladora_IUA;
    bool is_running{false};
    Telas tela;

public:
    void rodar();

};

























#endif // CONTROLADORAS_H

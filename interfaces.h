#ifndef INTERFACES_H
#define INTERFACES_H

#include "dominios.h"
#include "entidades.h"
#include <stdexcept>

using namespace std;

class IAA;
class IAS;

class IUA;
class IUS;

class ICA;
class ICS;

class IRA;
class IRS;

class IAA{
public:

    virtual bool executar()throw(runtime_error) = 0;

    virtual void set_controladora_IAS(IAS*) = 0;

    virtual ~IAA(){}
};

class IAS{

    virtual bool autenticar(Email&, Senha&)throw(runtime_error) = 0;

    virtual ~IAS(){}
};

//-----------------------------------------------------------------------------------

class IUA{
public:

    virtual int executar()throw(runtime_error) = 0;

    virtual void set_controladora_IUS(IUS*) = 0;

    virtual ~IUA(){}
};

class IUS{
public:

    virtual void cadastrar(Usuario&)throw(runtime_error) = 0;

    virtual bool descadastrar(Usuario&)throw(runtime_error) = 0;

    virtual ~IUS(){}
};

//-----------------------------------------------------------------------------------

class ICA{
public:

    virtual bool executar()throw(runtime_error) = 0;

    virtual void executa_menu_consulta() = 0;

    virtual void set_controladora_ICS(ICS*) = 0;

    virtual ~ICA(){}

};

class ICS{
public:
    virtual void consultar_carona(Cidade&, Estado&, Cidade&, Estado&, Data&)throw(runtime_error) = 0;

    virtual bool cadastrar_carona(Carona&)throw(runtime_error) = 0;

    virtual bool descadastrar_carona(Carona&)throw(runtime_error) = 0;

    virtual ~ICS(){}
};

//-----------------------------------------------------------------------------------

class IRA{
public:

    virtual bool executar()throw(runtime_error) = 0;

    virtual void set_controladora_IRS(IRS*) = 0;

    virtual ~IRA(){}
};

class IRS{
public:
    virtual void listar_reserva(Codigo_de_Carona&)throw(runtime_error) = 0;

    virtual bool reservar(Reserva&)throw(runtime_error) = 0;

    virtual bool cancelar_reserva(Reserva&)throw(runtime_error) = 0;
};





#endif

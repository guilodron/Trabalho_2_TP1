#ifndef INTERFACES_H
#define INTERFACES_H

#include "dominios.h"
#include "entidades.h"

class presentation_interface;
class IAA;
class IUA;
class ICA;
class IRA

class IAS;
class IUS;
class ICS;
class IRS;

class presentation_interface{
  public:

  // Método para solicitar serviço
  virtual bool executar() throw(runtime_error) = 0;
};

class IAA : public presentation_interface {
public:

  // Destrutor
  virtual ~IAA(){;
};

class IUA : public presentation_interface{
public:
  // Destrutor
  virtual ~IUA(){}
};

class ICA : public presentation_interface{
public:
  // Destrutor
  virtual ~IUA(){}
};

class IRA : public presentation_interface{
public:
  // Destrutor
  virtual ~IUA(){}
};

class IAS{
public:
  // Executa serviço de autenticação
  virtual bool autenticar(Email email, Senha senha);
  // Destrutor
  virtual ~IAS(){}

}

class IUS{
public:
  // Executa serviço de cadastramento
  virtual void cadastrar(Usuario usuario);
  // Executa serviço de descadastramento
  virtual void descadastrar(Usuario usuario);
  // Destrutor
  virtual ~IUS(){}

}

class ICS{
public:
  // Executa serviço de consulta de carona
  virtual void consultar_carona(Cidade cidade_origem, Estado estado_origem,
                                Cidade cidade_destino, Estado estado_destino, Data data);
  // Executa serviço de cadastro de carona
  virtual bool cadastrar_carona(Carona carona);

  // Executa serviço de descadastramento de carona
  virtual bool descadastrar_carona(Codigo_de_Carona codigo);


  // Destrutor
  virtual ~ICS(){}

}

class IRS{
public:
  // Executa serviço de listar reserva
  virtual void listar_reserva(Codigo_de_Carona codigo);

  // Executa serviço para efetuar a reserva
  virtual bool reservar(Reserva reserva);

  // Execeuta serviço para cancelar carona
  virtual bool cancela_reserva(Reserva reserva);
};


#endif // INTERFACES_H

#include "entidades.h"

// Usuario.

/// @brief Contrutor da Classe Usuario
///
/// Recebe nome, telefone, email, senha e cpf, e caso
/// sejam validos cria retorna um objeto da classe
Usuario::Usuario(std::string nome, std::string telefone, std::string email, std::string senha, std::string cpf)
{
	this->nome.set_nome(nome);
	this->telefone.set_telefone(telefone);
	this->email.set_email(email);
	this->senha.set_senha(senha);
	this->cpf.set_cpf(cpf);
}

/// @brief set_nome
///
/// Usar o valor recebido para setar
/// o atributo de classe nome
void Usuario::set_nome(std::string nome)
{
	this->nome.set_nome(nome);
}

/// @brief set_telefone
///
/// Usar o valor recebido para setar
/// o atributo de classe telefone
void Usuario::set_telefone(std::string telefone)
{
	this->telefone.set_telefone(telefone);
}

/// @brief set_email
///
/// Usar o valor recebido para setar
/// o atributo de classe email
void Usuario::set_email(std::string email)
{
	this->email.set_email(email);
}

/// @brief set_senha
///
/// Usar o valor recebido para setar
/// o atributo de classe senha
void Usuario::set_senha(std::string senha)
{
	this->senha.set_senha(senha);
}

/// @brief set_cpf
///
/// Usar o valor recebido para setar
/// o atributo de classe cpf
void Usuario::set_cpf(std::string cpf)
{
	this->cpf.set_cpf(cpf);
}

/// @brief get_nome
///
/// Retorna o valor da contido
/// na classe nome
std::string Usuario::get_nome()
{
	return this->nome.get_nome();
}

/// @brief get_telefone
///
/// Retorna o valor da contido
/// na classe telefone
std::string Usuario::get_telefone()
{
	return this->telefone.get_telefone();
}

/// @brief get_email
///
/// Retorna o valor da contido
/// na classe email
std::string Usuario::get_email()
{
	return this->email.get_email();
}

/// @brief get_senha
///
/// Retorna o valor da contido
/// na classe senha
std::string Usuario::get_senha()
{
	return this->senha.get_senha();
}

/// @brief get_cpf
///
/// Retorna o valor da contido
/// na classe cpf
std::string Usuario::get_cpf()
{
	return this->cpf.get_cpf();
}

// Reserva.

/// @brief Contrutor da Classe Reserva
///
/// Recebe codigo, assento e bagagem e caso
/// sejam validos cria retorna um objeto da classe
Reserva::Reserva(std::string codigo_de_reserva, char assento, int bagagem)
{
	set_codigo_de_reserva(codigo_de_reserva);
	set_assento(assento);
	set_bagagem(bagagem);

}

/// @brief set_codigo_de_reserva
///
/// Usar o valor recebido para setar
/// o atributo de classe codigo_de_reserva
void Reserva::set_codigo_de_reserva(std::string codigo_de_reserva)
{
	this->codigo_de_reserva.set_codigo(codigo_de_reserva);
}

/// @brief set_assento
///
/// Usar o valor recebido para setar
/// o atributo de classe assento
void Reserva::set_assento(char assento)
{
	this->assento.set_tipo_de_assento(assento);
}

/// @brief set_bagagem
///
/// Usar o valor recebido para setar
/// o atributo de classe bagagem
void Reserva::set_bagagem(int bagagem)
{
	this->bagagem.set_numero_de_bagagem(bagagem);
}

/// @brief get_codigo_de_reserva
///
/// Retorna o valor da contido
/// na classe codigo_de_reserva
std::string Reserva::get_codigo_de_reserva()
{
	return this->codigo_de_reserva.get_codigo();
}

/// @brief get_assento
///
/// Retorna o valor da contido
/// na classe assento
char Reserva::get_assento()
{
	return this->assento.get_tipo_de_assento();
}

/// @brief get_bagagem
///
/// Retorna o valor da contido
/// na classe bagagem
int Reserva::get_bagagem()
{
	return this->bagagem.get_numero_de_bagagem();
}

// Carona.

/// @brief Contrutor da Classe Usuario
///
/// Recebe codigo, cidade e estado de origem e destino,
/// data, duracao, numero de vagas e preco e caso
/// sejam validos cria retorna um objeto da classe
Carona::Carona(std::string codigo_de_carona, std::string cidade_de_origem, std::string estado_de_origem,std::string cidade_de_destino, std::string estado_de_destino, std::string data, int duracao, int vagas, float preco)
{
	set_codigo_de_carona(codigo_de_carona);
	set_cidade_de_origem(cidade_de_origem);
	set_estado_de_origem(estado_de_origem);
	set_cidade_de_destino(cidade_de_destino);
	set_estado_de_destino(estado_de_destino);
	set_data(data);
	set_duracao(duracao);
	set_vagas(vagas);
	set_preco(preco);
}

/// @brief set_codigo_de_carona
///
/// Usar o valor recebido para setar
/// o atributo de classe codigo_de_carona
void Carona::set_codigo_de_carona(std::string codigo_de_carona)
{
	this->codigo_de_carona.set_codigo(codigo_de_carona);
}

/// @brief set_cidade
///
/// Usar o valor recebido para setar
/// o atributo de classe cidade
void Carona::set_cidade_de_origem(std::string cidade_de_origem)
{
	this->cidade_de_origem.set_nome_cidade(cidade_de_origem);
}

/// @brief set_estado
///
/// Usar o valor recebido para setar
/// o atributo de classe estado
void Carona::set_estado_de_origem(std::string estado_de_origem)
{
	this->estado_de_origem.set_estado(estado_de_origem);
}

/// @brief set_cidade
///
/// Usar o valor recebido para setar
/// o atributo de classe cidade
void Carona::set_cidade_de_destino(std::string cidade_de_destino)
{
	this->cidade_de_destino.set_nome_cidade(cidade_de_destino);
}

/// @brief set_estado
///
/// Usar o valor recebido para setar
/// o atributo de classe estado
void Carona::set_estado_de_destino(std::string estado_de_destino)
{
	this->estado_de_destino.set_estado(estado_de_destino);
}

/// @brief set_data
///
/// Usar o valor recebido para setar
/// o atributo de classe data
void Carona::set_data(std::string data)
{
	this->data.set_data(data);
}

/// @brief set_duracao
///
/// Usar o valor recebido para setar
/// o atributo de classe duracao
void Carona::set_duracao(int duracao)
{
	this->duracao.set_duracao(duracao);
}

/// @brief set_vagas
///
/// Usar o valor recebido para setar
/// o atributo de classe vagas
void Carona::set_vagas(int vagas)
{
	this->vagas.set_vagas(vagas);
}

/// @brief set_preco
///
/// Usar o valor recebido para setar
/// o atributo de classe preco
void Carona::set_preco(float preco)
{
	this->preco.set_preco(preco);
}

/// @brief get_codigo_de_carona
///
/// Retorna o valor da contido
/// na classe codigo_de_carona
std::string Carona::get_codigo_de_carona()
{
	return this->codigo_de_carona.get_codigo();
}

/// @brief get_cidade_de_origem
///
/// Retorna o valor da contido
/// na classe cidade_de_origem
std::string Carona::get_cidade_de_origem()
{
	return this->cidade_de_origem.get_nome_cidade();
}

/// @brief get_estado_de_origem
///
/// Retorna o valor da contido
/// na classe estado_de_origem
std::string Carona::get_estado_de_origem()
{
	return this->estado_de_origem.get_estado();
}

/// @brief get_cidade_de_destino
///
/// Retorna o valor da contido
/// na classe cidade_de_destino
std::string Carona::get_cidade_de_destino()
{
	return this->cidade_de_destino.get_nome_cidade();
}

/// @brief get_estado_de_destino
///
/// Retorna o valor da contido
/// na classe estado_de_destino
std::string Carona::get_estado_de_destino()
{
	return this->estado_de_destino.get_estado();
}

/// @brief get_data
///
/// Retorna o valor da contido
/// na classe data
std::string Carona::get_data()
{
	return this->data.get_data();
}

/// @brief get_duracao
///
/// Retorna o valor da contido
/// na classe duracao
int Carona::get_duracao()
{
	return this->duracao.get_duracao();
}

/// @brief get_vagas
///
/// Retorna o valor da contido
/// na classe vagas
int Carona::get_vagas()
{
	return this->vagas.get_vagas();
}

/// @brief get_preco
///
/// Retorna o valor da contido
/// na classe preco
float Carona::get_preco()
{
	return this->preco.get_preco();
}

// Conta.

/// @brief Contrutor da Classe Conta
///
/// Recebe codigo, numero de agencia e de conta e caso
/// sejam validos cria retorna um objeto da classe
Conta::Conta(std::string codigo_de_banco, std::string numero_de_agencia, std::string numero_de_conta)
{
	set_codigo_de_banco(codigo_de_banco);
	set_numero_de_agencia(numero_de_agencia);
	set_numero_de_conta(numero_de_conta);
}

/// @brief set_codigo_de_banco
///
/// Usar o valor recebido para setar
/// o atributo de classe codigo_de_banco
void Conta::set_codigo_de_banco(std::string codigo_de_banco)
{
	this->codigo_de_banco.set_codigo(codigo_de_banco);
}

/// @brief set_numero_de_agencia
///
/// Usar o valor recebido para setar
/// o atributo de classe numero_de_agencia
void Conta::set_numero_de_agencia(std::string numero_de_agencia)
{
	this->numero_de_agencia.set_numero_de_agencia(numero_de_agencia);
}

/// @brief set_numero_de_conta
///
/// Usar o valor recebido para setar
/// o atributo de classe numero_de_conta
void Conta::set_numero_de_conta(std::string numero_de_conta)
{
	this->numero_de_conta.set_numero_de_conta(numero_de_conta);
}

/// @brief get_codigo_de_banco
///
/// Retorna o valor da contido
/// na classe codigo_de_banco
std::string Conta::get_codigo_de_banco()
{
	return this->codigo_de_banco.get_codigo();
}

/// @brief get_numero_de_agencia
///
/// Retorna o valor da contido
/// na classe numero_de_agencia
std::string Conta::get_numero_de_agencia()
{
	return this->numero_de_agencia.get_numero_de_agencia();
}

/// @brief get_numero_de_conta
///
/// Retorna o valor da contido
/// na classe numero_de_conta
std::string Conta::get_numero_de_conta()
{
	return this->numero_de_conta.get_numero_de_conta();
}

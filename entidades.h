#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"

/// @brief Entidade Usuario
///
/// Representa o usuario da aplicacao,
/// que possui nome, telefone, email,
/// senha e CPF
class Usuario{
private:
    Nome nome;
    Telefone telefone;
    Email email;
    Senha senha;
    Cpf cpf;
public:
	Usuario() {};
    Usuario(std::string nome, std::string telefone, std::string email, std::string senha, std::string cpf);
	void set_nome(std::string nome);
	void set_telefone(std::string telefone);
	void set_email(std::string email);
	void set_senha(std::string senha);
	void set_cpf(std::string cpf);
	std::string get_nome();
	std::string get_telefone();
	std::string get_email();
	std::string get_senha();
	std::string get_cpf();
};

/// @brief Entidade Reserva
///
/// Representa a reserva feita por um usuario.
/// Possui um codigo, assento e bagagem
class Reserva {
private:
	Codigo_de_Reserva codigo_de_reserva;
	Assento assento;
	Bagagem bagagem;
public:
	Reserva() {};
	Reserva(std::string codigo_de_reserva, char assento, int bagagem);
	void set_codigo_de_reserva(std::string codigo_de_reserva);
	void set_assento(char assento);
	void set_bagagem(int bagagem);
	std::string get_codigo_de_reserva();
	char get_assento();
	int get_bagagem();
};

/// @brief Entidade Carona
///
/// Representa a carona feita por um usuario.
/// Possui um codigo, cidade e estado de origem
/// e destino, data, duracao, numero de vagas e seu preco
class Carona {
private:
	Codigo_de_Carona codigo_de_carona;
	Cidade cidade_de_origem;
	Estado estado_de_origem;
	Cidade cidade_de_destino;
	Estado estado_de_destino;
	Data data;
	Duracao duracao;
	Vagas vagas;
	Preco preco;

public:
	Carona() {};
	Carona(std::string codigo_de_carona, std::string cidade_de_origem, std::string estado_de_origem,std::string cidade_de_destino, std::string estado_de_destino, std::string data, int duracao, int vagas, float preco);
	void set_codigo_de_carona(std::string codigo_de_carona);
	void set_cidade_de_origem(std::string cidade_de_origem);
	void set_estado_de_origem(std::string estado_de_origem);
	void set_cidade_de_destino(std::string cidade_de_destino);
	void set_estado_de_destino(std::string estado_de_destino);
	void set_data(std::string data);
	void set_duracao(int duracao);
	void set_vagas(int vagas);
	void set_preco(float preco);
	std::string get_codigo_de_carona();
	std::string get_cidade_de_origem();
	std::string get_estado_de_origem();
	std::string get_cidade_de_destino();
	std::string get_estado_de_destino();
	std::string get_data();
	int get_duracao();
	int get_vagas();
	float get_preco();

};

/// @brief Entidade Conta
///
/// Reprensta a conta bancaria do usuario.
/// Possui um codigo, numero de agencia e
/// numero de conta
class Conta {
private:
	Codigo_de_Banco codigo_de_banco;
	Numero_de_Agencia numero_de_agencia;
	Numero_de_Conta numero_de_conta;
public:
	Conta() {};
	Conta(std::string codigo_de_banco, std::string numero_de_agencia, std::string numero_de_conta);
	void set_codigo_de_banco(std::string codigo_de_banco);
	void set_numero_de_agencia(std::string numero_de_agencia);
	void set_numero_de_conta(std::string numero_de_conta);
	std::string get_codigo_de_banco();
	std::string get_numero_de_agencia();
	std::string get_numero_de_conta();
};

#endif // ENTIDADES_H

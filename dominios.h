#ifndef DOMINIOS_H
#define DOMINIOS_H

#include <string>

/// @brief Dominio Assento
///
/// Representa o assento e pode receber 2 valores
/// 'D' ou 'T'
class Assento{
private:
	char tipo_de_assento;
    void valida(char tipo);
public:
    void set_tipo_de_assento(char tipo);
	char get_tipo_de_assento();
    Assento(char tipo);
	Assento() {};
};

/// @brief Dominio Bagagem
///
/// Representa a bagagem e pode receber valores entre
/// 1 e 4
class Bagagem{
private:
	const int max_bagagem = 4;
	const int min_bagagem = 1;
    int numero_de_bagagem;
    void valida(int num);
public:
    Bagagem(int num);
	Bagagem() {};
    void set_numero_de_bagagem(int num);
    int get_numero_de_bagagem();
};

///@brief Dominio Codigo de Banco
///
/// Representa o codigo do banco, que deve ter formato
/// XXX, onde X e digito de 0-9
class Codigo_de_Banco{
private:
	const size_t tamanho = 3;
    void valida(std::string codigo);
    std::string codigo;

public:
	Codigo_de_Banco() {};
    Codigo_de_Banco(std::string codigo);
    void set_codigo(std::string codigo);
    std::string get_codigo();
};

///@brief Dominio Codigo de Carona
///
/// Representa o codigo do carona, que deve ter formato
/// XXXX, onde X e digito de 0-9
class Codigo_de_Carona{
private:
	const size_t tamanho = 4;
    void valida(std::string codigo);
    std::string codigo;

public:
    void set_codigo(std::string codigo);
    std::string get_codigo();
    Codigo_de_Carona(std::string codigo);
	Codigo_de_Carona() {};
};

///@brief Dominio Codigo de Reserva
///
/// Representa o codigo do banco, que deve ter formato
/// XXXXX, onde X e digito de 0-9
class Codigo_de_Reserva{
private:
	const size_t tamanho = 5;
    void valida(std::string codigo);
    std::string codigo;

public:
    void set_codigo(std::string codigo);
    std::string get_codigo();
    Codigo_de_Reserva(std::string codigo);
	Codigo_de_Reserva() {};
};

///@brief Dominio Cidade
///
/// Representa a cidade, que deve possuir de 1 a 10
/// caracteres, onde cada caracter pode ser letra, ponto ou espaco.
/// pelo menos um caracter e letra, antes de ponto deve haver letra e
/// nao ha espacos em sequencia
class Cidade{
private:
    std::string nome_cidade;
    void valida_nome_cidade(std::string nome);
public:
    Cidade(std::string nome);
	Cidade() {};
    void set_nome_cidade(std::string nome);
    std::string get_nome_cidade();
    };

///@brief Dominio Cpf
///
/// Representa o cpf, que deve ter formato
/// XXX.XXX.XXX-XX onde X e digito 0-9, com a presenca de
/// digitos verificadores
class Cpf{
private:
    std::string cpf;
    void valida_cpf(std::string cpf);

public:
    void set_cpf(std::string cpf);
    std::string get_cpf();
    Cpf(std::string cpf);
	Cpf() {};
};

///@brief Dominio Data
///
/// Representa a data que deve ter formato
/// DD/MM/AAAA. DD e numero de 1-31. MM e numero de 1-12
/// AAAA e numero de 2000-2099
class Data{
private:
	const size_t tamanho = 10;
    std::string data;
    void valida_data(std::string data);
    bool valida_dia(std::string data);
    bool valida_mes(std::string data);
    bool valida_ano(std::string data);
    bool ano_bissexto(std::string data);
public:
    Data(std::string data);
	Data() {};
    void set_data(std::string data);
    std::string get_data();

};

///@brief Dominio Duracao
///
/// Representa a duracao, que deve variar entre 1-48(horas)
class Duracao{
private:
	const int duracao_max = 48;
	const int duracao_min = 1;
    int duracao;
    void valida_duracao(int duracao);
public:
    Duracao(int duracao);
	Duracao() {};
    void set_duracao(int duracao);
	int get_duracao();
};

///@brief Dominio Estado
///
/// Representa a sigla de estado, que deve ser um dos
/// estados do Brasil
class Estado{
private:
    std::string estado;
    void valida_estado(std::string estado);
public:
    Estado(std::string estado);
	Estado() {};
    void set_estado(std::string estado);
    std::string get_estado();
};

///@brief Dominio Email
///
/// Representa o email e possui formato local@dominio. Local
/// possui ate 20 caracteres(ponto ou letra) e nao pode ser iniciado ou terminado
/// por ponto. Dominio possui ate 20 caracteres(ponto ou letra), e nao pode ser iniciado por ponto
/// ou possuir pontos em sequencia
class Email{
private:
    std::string email;
	void valida_email(std::string email);
public:
	Email() {};
    Email(std::string email);
    void set_email(std::string email);
    std::string get_email();
};

///@brief Dominio Nome
///
/// Representa o nome, e possui de 1-20 caracteres(letra, ponto, espaco).
/// Pelo menos um caracter e letra e nao existem espacos em sequencia
class Nome{
private:
	const size_t tamanho_max = 20;
	const size_t tamanho_min = 1;
    std::string nome;
    void valida_nome(std::string nome);
public:
	Nome() {};
    Nome(std::string nome);
    void set_nome(std::string nome);
    std::string get_nome();
};

///@brief Dominio Numero de Agencia
///
/// Representa o numero de agencia, que tem formato XXXX-Y
/// onde X e digito 0-9 e Y digito verificador vide algoritmo de Luhn
class Numero_de_Agencia{
private:
	const size_t tamanho = 6;
    std::string numero_de_agencia;
    void valida_numero_de_agencia(std::string numero_de_agencia);
public:
	Numero_de_Agencia() {};
    Numero_de_Agencia(std::string numero_de_agencia);
    void set_numero_de_agencia(std::string numero_de_agencia);
    std::string get_numero_de_agencia();
};

///@brief Dominio Numero de Conta
///
/// Representa o numero de agencia, que tem formato XXXXXX-Y
/// onde X e digito 0-9 e Y digito verificador vide algoritmo de Luhn
class Numero_de_Conta {
private:
	const size_t tamanho = 8;
	std::string numero_de_conta;
	void valida_numero_de_conta(std::string numero_de_conta);
public:
	Numero_de_Conta() {};
	Numero_de_Conta(std::string numero_de_conta);
	void set_numero_de_conta(std::string numero_de_conta);
	std::string get_numero_de_conta();
};

///@brief Dominio Preco
///
/// Representa o preco e varia entre 1,00 a 5.000,00
class Preco {
private:
	const float preco_max = 5000.00;
	const float preco_min = 1.00;
	float preco;
	void valida_preco(float preco);
	float formata_preco(float preco);
public:
	Preco() {};
	Preco(float preco);
	void set_preco(float preco);
	float get_preco();
};

///@brief Dominio Telefone
///
/// Representa o telefone, que possui formato XX-YY-ZZZZZZZZZ,
/// onde X, Y e Z sao digitos de 0-9. O valor de XX nao pode ser 00.
/// O valor de ZZZZZZZZZ nao pode ser 000000000
class Telefone {
private:
	const size_t tamanho = 15;
	std::string telefone;
	void valida_telefone(std::string telefone);
public:
	Telefone() {};
	Telefone(std::string telefone);
	void set_telefone(std::string telefone);
    std::string get_telefone();
};

///@brief Dominio Senha
///
/// Representa senha e possui formato XXXXX, onde X pode
/// ser letra(maiuscula ou minuscula), digito(0-9), #, $, % ou &.
/// Nao podem haver caracteres repetidos
class Senha{
private:
	bool possui_invalido(std::string senha);
	bool checa_repeticao(std::string senha);
	const size_t tamanho = 5;
	std::string senha;
	void valida_senha(std::string senha);
public:
	Senha() {};
	Senha(std::string senha);
	void set_senha(std::string senha);
    std::string get_senha();
};

///@brief Dominio Vagas
///
/// Representa a quantidade de vagas e pode variar entre 0 - 4
class Vagas{
private:
    int vagas;
    void valida_vagas(int vagas);
public:
	Vagas() {};
    Vagas(int vagas);
    void set_vagas(int vagas);
    int get_vagas();
};

#endif // DOMINIOS_H

//  Copyright 2019 <Guilherme Rodrigues e Marcos Blandim>

#include "dominios.h"
#include <ctype.h>
#include <stdlib.h>
#include <iostream>
#include <cctype>
#include <string>
#include <regex>
#include <exception>


//////////////////////////////////////////////////////// Assento

/// @brief Construtor da classe Assento
///
/// Recebe um valor de assento e, caso seja valido
/// atribui esse valor ao tipo de assento
/// @param tipo representa o tipo de assento
Assento::Assento(char tipo) {
    set_tipo_de_assento(tipo);
}

/// @brief Retorna tipo de assento
char Assento::get_tipo_de_assento() {
    return this->tipo_de_assento;
}


/// @brief Atribui valor do tipo de assento
///
/// Seta o valor de assento caso seja um valor válido
/// @param tipo representa o tipo de assento
void Assento::set_tipo_de_assento(char tipo) {
    valida(tipo);
    this->tipo_de_assento = tipo;
}

/// @brief Valida o assento fornecido pelo usuario
///
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param tipo representa o tipo de assento
void Assento::valida(char tipo) {
    tipo = toupper(tipo);
    if (tipo != 'D' && tipo != 'T') {
        throw std::invalid_argument("Tipo de Assento Invalido");
    }
}

//////////////////////////////////////////////////////// Bagagem

/// @brief Atribui valor do numero de bagagem
///
/// Seta o valor do numero de bagagem, caso seja um valor válido
/// @param tipo representa o numero de bagagem
void Bagagem::set_numero_de_bagagem(int num) {
    valida(num);
    this->numero_de_bagagem = num;
}

/// @brief Valida o numero de bagaem inserido pelo usuario
///
/// Caso receba um valor que nao esteja entre o minimo e o maximo
/// lanca uma excecao do tipo invalid_argument
/// @param num representa a quantidade de bagagem
void Bagagem::valida(int num) {
    if (num <= min_bagagem || num > max_bagagem) {
        throw std::invalid_argument("Numero de Bagagem Inválido!!");
    }
}

/// @brief Retorna o valor contido em numero de bagagem
int Bagagem::get_numero_de_bagagem() {
    return this->numero_de_bagagem;
}

/// @brief Construtor da classe Bagagem
///
/// Recebe um valor de bagagem e, caso seja valido,
/// atribui esse valor ao numero de bagagem
/// @param num representa a quantidade de bagagem
Bagagem::Bagagem(int num) {
    set_numero_de_bagagem(num);
}

////////////////////////////////////////////////////// Codigo de Banco

/// @brief Atribui o codigo do banco
///
/// Seta o valor do codigo caso seja válido
/// @param codigo representa o codigo a ser armazenado
void Codigo_de_Banco::set_codigo(std::string codigo) {
    valida(codigo);
    this->codigo = codigo;
}

/// @brief Valida o codigo de banco fornecido
///
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param codigo representa o codigo a ser validado
void Codigo_de_Banco::valida(std::string codigo) {
    std::regex padrao("[0-9]+");
    if (!std::regex_match(codigo, padrao) || codigo.length() != tamanho) {
        throw std::invalid_argument("Codigo de Banco Inválido");
    }
}

///@brief retorna o codigo armazenado
std::string Codigo_de_Banco::get_codigo() {
    return this->codigo;
}

/// @brief Construtor da classe Codigo_de_Banco
///
/// Recebe uma string com um codigo de banco, caso seja valido
/// atribui esse valor ao codigo
/// @param codigo representa o codigo a ser definido
Codigo_de_Banco::Codigo_de_Banco(std::string codigo) {
    set_codigo(codigo);
}

////////////////////////////////////////////////////// Codigo de Carona

/// @brief Atribui o codigo de carona
///
/// Seta o valor do codigo caso seja válido
/// @param codigo representa o codigo a ser armazenado
void Codigo_de_Carona::set_codigo(std::string codigo) {
    valida(codigo);
    this->codigo = codigo;
}

/// @brief Valida o codigo fornecido pelo usuario
///
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param codigo representa o codigo a ser validado
void Codigo_de_Carona::valida(std::string codigo) {
    std::regex padrao("[0-9]+");
    if (!std::regex_match(codigo, padrao) || codigo.length() != tamanho) {
        throw std::invalid_argument("Codigo de Carona Inválido");
    }
}

/// @brief Retorna o valor do codigo de carona
std::string Codigo_de_Carona::get_codigo() {
    return this->codigo;
}

/// @brief Construtor da classe Codigo_de_Carona
///
/// Recebe uma string com um codigo de carona, caso seja valido
/// atribui esse valor ao codigo
/// @param codigo representa o codigo a ser definido
Codigo_de_Carona::Codigo_de_Carona(std::string codigo) {
    set_codigo(codigo);
}

////////////////////////////////////////////////////// Codigo de Reserva

/// @brief Atribui o codigo de reserva
///
/// Seta o valor do codigo caso seja válido
/// @param codigo representa o codigo a ser armazenado
void Codigo_de_Reserva::set_codigo(std::string codigo) {
    valida(codigo);
    this->codigo = codigo;
}


/// @brief Valida o codigo fornecido pelo usuario
///
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param codigo representa o codigo a ser validado
void Codigo_de_Reserva::valida(std::string codigo) {
    std::regex padrao("[0-9]+");
    if (!std::regex_match(codigo, padrao) || codigo.length() != tamanho) {
        throw std::invalid_argument("Codigo de Reserva Inválido");
    }
}

/// @brief Retorna o valor contido no codigo de reserva
std::string Codigo_de_Reserva::get_codigo() {
    return this->codigo;
}

/// @brief Construtor da classe Codigo_de_Reserva
///
/// Recebe uma string com um codigo de reserva, caso seja valido
/// atribui esse valor ao codigo
/// @param codigo representa o codigo a ser definido
Codigo_de_Reserva::Codigo_de_Reserva(std::string codigo) {
    set_codigo(codigo);
}

////////////////////////////////////////////////////// Cidade

/// @brief Retorna o nome da cidade
std::string Cidade::get_nome_cidade(){
    return this->nome_cidade;
}

/// @brief Atribui o nome da cidade
///
/// Seta o nome da cidade caso seja válido
/// @param nome representa o nome da cidade a ser armazenado
void Cidade::set_nome_cidade(std::string nome) {
    valida_nome_cidade(nome);
    this->nome_cidade = nome;
}

/// @brief Valida o nome de cidade fornecido
///
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param tipo representa o nome da cidade
void Cidade::valida_nome_cidade(std::string nome) {
    /// Verifica tamanho.
    if (nome.length() < 1 || nome.length() > 10) {
        throw std::invalid_argument("Nome de cidade Inválido!!");
    }
    /// Verifica se tem apenas caracteres validos, sem espaços seguidos e com letra antes de ponto.
    for(size_t i = 0; i < nome.length(); i++) {
        if (!(isalpha(nome[i]) || nome[i] == ' ' || nome[i] == '.')||(i && ((nome[i] == ' ' && nome[i-1] == ' ')||(nome[i] == '.' && !isalpha(nome[i]))))){
            throw std::invalid_argument("Nome de cidade Inválido!!");
        }
    }
    /// Verifica se ha ao menos uma letra.
    int cont = 0;
    for(size_t i = 0; i < nome.length(); i++) {
        if (isalpha(nome[i])){
            cont++;
        }
    }
    if(!cont)
        throw std::invalid_argument("Nome de cidade Inválido!!");
}

/// @brief Construtor da classe Cidade
///
/// Recebe uma string com um nome, caso seja valido
/// atribui esse valor ao nome da cidade
/// @param nome representa o nome da cidade a ser definida
Cidade::Cidade(std::string nome) {
    set_nome_cidade(nome);
}

////////////////////////////////////////////////////// CPF

/// @brief Construtor da classe Cpf
///
/// Recebe uma string com um numero de cpf, caso seja valido
/// atribui esse valor ao cpf
/// @param cpf representa o cpf a ser definido
Cpf::Cpf(std::string cpf) {
	set_cpf(cpf);
}

/// @brief Valida o cpf fornecido pelo usuario
///
/// Para a validacao, e utilizado o calculo de digito verificador
/// encontrado em https://pt.wikipedia.org/wiki/D%C3%ADgito_verificador
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param tipo representa o tipo de assento
void Cpf::valida_cpf(std::string cpf) {
    bool valido{true};
    int cpf_numerico[11]{0};
    if (cpf.length() != 14 || cpf[3] != '.' || cpf[7] != '.' || cpf[11] != '-') {
        valido = false;
    }
    if (valido) {
        for(int i{0}, j{0}; i < 14; i++, j++) {
            if(i == 3 || i == 7 || i == 11)
                i++;
            cpf_numerico[j] = (int)cpf[i] - 48;
        }
        int soma{0};
        for(int i{0}, j{10}; i < 9; i++, j--) {
            soma += cpf_numerico[i]*j;
        }
        if ((soma*10)%11 != cpf_numerico[9]) {
            valido = false;
        }
        soma = 0;
        for(int i{0}, j{11}; i < 10; i++, j--) {
            soma += cpf_numerico[i]*j;
        }
        if ((soma*10)%11 != cpf_numerico[10]) {
            valido = false;
        }
    }
    if (!valido) {
        throw std::invalid_argument("CPF Inválido!");
    };
}

/// @brief Atribui o cpf
///
/// Seta o valor do cpf caso seja válido
/// @param cpf representa o cpf a ser armazenado
void Cpf::set_cpf(std::string cpf) {
    valida_cpf(cpf);
    this->cpf = cpf;

}

///@brief retorna o valor contido em cpf
std::string Cpf::get_cpf() {
    return this->cpf;
}


//////////////////////////////////////////////////////Data

/// @brief Atribui a data
///
/// Seta o valor de data caso seja válido
/// @param data representa a data a ser armazenada
void Data::set_data(std::string data) {
    valida_data(data);
    this->data = data;
}

/// @brief retorna o valor contido em data
std::string Data::get_data() {
    return this->data;
}

/// @brief Valida a data fornecida pelo usuario
///
/// Leva em consideracao os dias de cada mes e anos bissextos
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param data representa a data fornecida
void Data::valida_data(std::string data) {
    bool valido = true;
    std::regex padrao("[0-9, /]+");
    if (data.length() != tamanho || data[2] != '/' || data[5] != '/' || !std::regex_match(data, padrao)) {
        valido = false;
    }
    if (valido) {
        if (!valida_ano(data) || !valida_mes(data) || !valida_dia(data))
            valido = false;
    }

    if (!valido) {
        throw std::invalid_argument("Data Inválida!!");
    }
}

/// @brief Verifica se o ano fornecido e bissexto
///
/// Caso seja bissexto retorna verdadeiro
bool Data::ano_bissexto(std::string data) {
    int ano = stoi(data.substr(6, 4));
    if (ano%4 == 0) {
        if (ano % 100 == 0) {
            if (ano % 400 == 0) {
                return true;
            }else {
                return false;
            }
        }else {
            return true;
        }
    }else {
        return false;
    }
}

/// @brief Verifica se o ano esta dentro do limite considerado
bool Data::valida_ano(std::string data) {
    int ano = stoi(data.substr(6, 4));
    //cout << "ano na funcao" <<ano;
    if (ano >= 2000 && ano < 2099) {
        return true;
    }else {
        return false;
    }
}

/// @brief Verifica se o mes esta dentro do limite considerado
bool Data::valida_mes(std::string data) {
    if (stoi(data.substr(3, 2)) < 13 && stoi(data.substr(3, 2)) > 0) {
        return true;
    }else
        return false;
}

/// @brief Verifica se o dia esta correto
///
/// Leva em consideracao o mes e o caso de ano bissexto
bool Data::valida_dia(std::string data) {
    int mes = stoi(data.substr(3,2));
    int dia = stoi(data.substr(0,2));
    if (mes < 8) {
        if (mes == 2) {
            if (ano_bissexto(data)) {
                if (dia > 29 || dia < 0) {
                    return false;
                }
            }else {
                if (dia >28 || dia < 0) {
                    return false;
                }
            }
        }
        else if (mes%2 == 0) {
            if (dia > 30 || dia < 0)
                    return false;
        }else
            if (dia > 31 || dia < 0)
				return false;
    }else {
        if (mes%2 == 0){
			if (dia > 31 || dia < 0)
                return false;
        }else
            if(dia > 30 || dia < 0)
                return false;
    }
    return true;
}

/// @brief Construtor da classe Data
///
/// Recebe uma string com uma data, caso seja valido
/// atribui esse valor a data
/// @param data representa a data a ser definida
Data::Data(std::string data) {
    set_data(data);
}

//////////////////////////////////////////////////////Duracao


/// @brief Retorna o valor contido em duracao
int Duracao::get_duracao() {
    return this->duracao;
}


/// @brief Atribui a duracao
///
/// Seta o valor de duracao caso seja válido
/// @param duracao representa a duracao a ser armazenada
void Duracao::set_duracao(int duracao){
    valida_duracao(duracao);
    this->duracao = duracao;
}

/// @brief Valida a duracao fornecida pelo usuario
///
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param duracao representa o tipo de assento
void Duracao::valida_duracao(int duracao){
    if(duracao < duracao_min || duracao > duracao_max){
        throw std::invalid_argument("Duração Inválida!!");
    }
}

/// @brief Construtor da classe Duracao
///
/// Recebe um int com um numero, caso seja valido
/// atribui esse valor a duracao
/// @param duracao representa a duracao a ser definida
Duracao::Duracao(int duracao){
    set_duracao(duracao);
}

//////////////////////////////////////////////////////Estado

/// @brief Atribui estado
///
/// Seta o valor de estado caso seja válido
/// @param estado representa a sigla do estado a ser armazenado
void Estado::set_estado(std::string estado){
    valida_estado(estado);
    this->estado = estado;
}


/// @brief Valida a sigla de estado fornecida pelo usuario
///
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param estado representa a sigla do estado
void Estado::valida_estado(std::string estado){
    std::string estados("AC-AL-AP-AM-BA-CE-DF-ES-GO-MA-MT-MS-MG-PA-PB-PR-PE-PI-RJ-RN-RS-RO-RR-SC-SP-SE-TO");
    if(!(estados.find(estado)!= std::string::npos && estado.find('-') == std::string::npos && estado.length() == 2)){
        throw std::invalid_argument("Sigla de Estado Inválida!!!");
    }
}

/// @brief retorna o valor contido em estado
std::string Estado::get_estado(){
    return this->estado;
}

/// @brief Construtor da classe Estado
///
/// Recebe uma string para estado, caso seja valido
/// atribui esse valor ao estado
/// @param estado representa o estado a ser definido
Estado::Estado(std::string estado){
    set_estado(estado);
}

//////////////////////////////////////////////////////Email

/// @brief Valida o email fornecido pelo usuario
///
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param email representa email a ser valido
void Email::valida_email(std::string email){
    int cont = 0;
    if (email.length() < 1 || email.length() > 20)
        throw std::invalid_argument("Email Inválido!0");
    for(size_t i = 0; i < email.length(); i++){
        if(isalpha(email[i]))
            cont++;
        if(!isalpha(email[i]) && email[i] != '.' && email[i] != ' ' && email[i] != '@') // Letras, pontos ou espaços.
            throw std::invalid_argument("Email Inválido!1");
        if(i > 0 && email[i] == '.' && !isalpha(email[i-1])) // Letra antes de ponto.
            throw std::invalid_argument("Email Inválido!2");
        if(i > 0 && email[i] == ' ' && email[i-1] == ' ') // Sem espaços duplos.
            throw std::invalid_argument("Email Inválido!3");
    }
    if(!cont) // Ao menos uma letra.
        throw std::invalid_argument("Email Inválido!4");
}

/// @brief Atribui o email
///
/// Seta o valor do endereco de email caso seja válido
/// @param email representa o endereco de email a ser armazenado
void Email::set_email(std::string email){
    valida_email(email);
    this->email = email;
}

/// @brief Construtor da classe Email
///
/// Recebe uma string com um email, caso seja valido
/// atribui esse valor ao email
/// @param email representa o email a ser definido
Email::Email(std::string email){
    set_email(email);
}

/// @brief retorna o valor armazenado em email
std::string Email::get_email(){
    return this->email;
}

//////////////////////////////////////////////////////Nome


/// @brief Valida o nome fornecido pelo usuario
///
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param nome representa o nome a ser validado
void Nome::valida_nome(std::string nome){
    bool possui_alfabetico{false};
    if(nome.length() >= tamanho_min && nome.length() <= tamanho_max && nome.find("  ") == std::string::npos && nome[0] != '.'){
        for(size_t i{1}; i < nome.length(); i++){
            if(isalpha(nome[i])){
                possui_alfabetico = true;
            }
            else if(nome[i] == '.'){
                if(!isalpha(nome[i-1]))
                    throw std::invalid_argument("Nome Inválido!");
            }
        }
    }else{
        throw std::invalid_argument("Nome Inválido!");
    }
    if(!possui_alfabetico){
        throw std::invalid_argument("Nome Inválido!");
    }
}

/// @brief Atribui o nome
///
/// Seta o valor de nome caso seja válido
/// @param nome representa o nome a ser armazenado
void Nome::set_nome(std::string nome){
    valida_nome(nome);
    this->nome = nome;
}

/// @brief retorna o valor armazenado em nome
std::string Nome::get_nome(){
    return this->nome;
}

/// @brief Construtor da classe Nome
///
/// Recebe uma string com um nome, caso seja valido
/// atribui esse valor ao nome
/// @param nome representa o nome a ser definido
Nome::Nome(std::string nome){
    set_nome(nome);
}

//////////////////////////////////////////////////////Numero de Agencia

/// @brief Valida o numero de agencia fornecido pelo usuario
///
/// Utiliza o algoritmo de Luhn para calcular o digito verificador.
/// Pode ser encontrado em https://en.wikipedia.org/wiki/Luhn_algorithm
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param tipo representa o numero de agencia a ser validado
void Numero_de_Agencia::valida_numero_de_agencia(std::string numero_de_agencia){
    int soma{0};
    if(numero_de_agencia.length() == tamanho && numero_de_agencia[tamanho - 2] == '-'){
        for(size_t i{0}; i < (tamanho - 2); i++){
            if(i%2 != 0 ){
                int duplicado = int(numero_de_agencia[i] - 48)*2;
                if(duplicado >= 10){
                    soma += duplicado-9;
                }else{
                    soma += duplicado;
                }
            }else{
                soma +=int(numero_de_agencia[i] - 48);
            }

        }
        if((soma*9)%10 != numero_de_agencia[tamanho - 1] - 48){
            throw std::invalid_argument("Número De Agência Inválido!!");
        }
	}
	else {
		throw std::invalid_argument("Número De Agência Inválido!!");
	}

}

/// @brief Atribui o numero de agencia
///
/// Seta o valor do numero de agencia caso seja válido
/// @param numero_de_agencia representa o numero de agencia a ser armazenado
void Numero_de_Agencia::set_numero_de_agencia(std::string numero_de_agencia){
    valida_numero_de_agencia(numero_de_agencia);
    this->numero_de_agencia = numero_de_agencia;
}

/// @brief retorna o valor armazenado em numero de agencia
std::string Numero_de_Agencia::get_numero_de_agencia(){
    return this->numero_de_agencia;
}

/// @brief Construtor da classe Numero_de_Agencia
///
/// Recebe uma string com um numero de agencia, caso seja valido
/// atribui esse valor ao numero da agencia
/// @param numero_de_agencia representa o numero de agencia a ser definido
Numero_de_Agencia::Numero_de_Agencia(std::string numero_de_agencia){
    set_numero_de_agencia(numero_de_agencia);
}

//////////////////////////////////////////////////////Numero de Conta

/// @brief Valida o numero de conta fornecido pelo usuario
///
/// Utiliza o algoritmo de Luhn para calcular o digito verificador.
/// Pode ser encontrado em https://en.wikipedia.org/wiki/Luhn_algorithm
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param tipo representa o numero de conta a ser validado
void Numero_de_Conta::valida_numero_de_conta(std::string numero_de_conta)
{
	int soma{ 0 };
	if (numero_de_conta.length() == tamanho && numero_de_conta[tamanho - 2] == '-') {
		for (size_t i{ 0 }; i < (tamanho - 2); i++) {
			if (i % 2 != 0) {
				int duplicado = int(numero_de_conta[i] - 48) * 2;
				if (duplicado >= 10) {
					soma += duplicado - 9;
				}
				else {
					soma += duplicado;
				}
			}
			else {
				soma += int(numero_de_conta[i] - 48);
			}

		}
		if ((soma * 9) % 10 != numero_de_conta[tamanho - 1] - 48) {
			throw std::invalid_argument("Número De Conta Inválido!!");
		}
	}
	else {
		throw std::invalid_argument("Número De Conta Inválido!!");
	}
}

/// @brief Atribui o numero de conta
///
/// Seta o valor do numero de conta caso seja válido
/// @param numero_de_conta representa o numero de conta a ser armazenado
void Numero_de_Conta::set_numero_de_conta(std::string numero_de_conta)
{
	valida_numero_de_conta(numero_de_conta);
	this->numero_de_conta = numero_de_conta;
}

/// @brief retorna o valor armazenado em numero de conta
std::string Numero_de_Conta::get_numero_de_conta()
{
	return this->numero_de_conta;
}

/// @brief Construtor da classe Numero_de_Conta
///
/// Recebe uma string com um numero de conta, caso seja valido
/// atribui esse valor ao numero da conta
/// @param numero_de_conta representa o numero de conta a ser definido
Numero_de_Conta::Numero_de_Conta(std::string numero_de_conta)
{
	set_numero_de_conta(numero_de_conta);
}

//////////////////////////////////////////////////////Preco

/// @brief Valida o preco fornecido pelo usuario
///
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param preco representa o preco a ser validado
void Preco::valida_preco(float preco)
{
	preco = formata_preco(preco);
	if (preco > preco_max || preco < preco_min) {
		throw std::invalid_argument("Preço Inválido!!");
	}
}

/// @brief Trunca preco
///
/// Elimina casas decimais para adequar ao padrao utilizado em reais e
/// facilitar operacoes
float Preco::formata_preco(float preco)
{

	int aux = (int)(preco * 100);
	preco = ((float)aux) / 100;
	return preco;
}

/// @brief Atribui o preco
///
/// Seta o valor do preco caso seja válido
/// @param preco representa o preco a ser armazenado
void Preco::set_preco(float preco)
{
	valida_preco(preco);
	this->preco = formata_preco(preco);
}

/// @brief retorna o valor armazenado em preco
float Preco::get_preco()
{
	return this->preco;
}

/// @brief Construtor da classe Preco
///
/// Recebe um float com um numero de preco, caso seja valido
/// atribui esse valor ao preco
/// @param preco representa o preco a ser definido
Preco::Preco(float preco)
{
	set_preco(preco);
}

//////////////////////////////////////////////////////Telefone

/// @brief Valida o telefone fornecido pelo usuario
///
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param telefone representa o telefone a ser validado
void Telefone::valida_telefone(std::string telefone) {
	if (telefone.length() == tamanho && telefone.substr(0, 2) != "00" && telefone.substr(3, 2) != "00" && telefone.substr(6, 9) != "000000000"
		&& telefone[2] == '-' && telefone[5] == '-') {
		std::regex padrao("[0-9, -]+");
		if (!regex_match(telefone, padrao)) {
			throw std::invalid_argument("Telefone Inálido!");
		}
	}
	else {
		throw std::invalid_argument("Telefone Inválido!");
	}
}

/// @brief Atribui o telefone
///
/// Seta o valor do telefone caso seja válido
/// @param telefone representa o telefone a ser armazenado
void Telefone::set_telefone(std::string telefone) {
	valida_telefone(telefone);
	this->telefone = telefone;
}

/// @brief Construtor da classe Telefone
///
/// Recebe uma string com um numero de telefone, caso seja valido
/// atribui esse valor ao telefone
/// @param telefone representa o numero de telefone a ser definido
Telefone::Telefone(std::string telefone) {
	set_telefone(telefone);
}

/// @brief retorna o valor armazenado em telefone
std::string Telefone::get_telefone() {
	return this->telefone;
}

//////////////////////////////////////////////////////Senha

/// @brief Valida a senha fornecida pelo usuario
///
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param senha representa oa senha a ser validada
void Senha::valida_senha(std::string senha){
	if (senha.length() == tamanho) {
		if (checa_repeticao(senha) || possui_invalido(senha)) {
			throw std::invalid_argument("Senha Inválida!");
		}
	}
	else {
		throw std::invalid_argument("Senha Inválida!");
	}


}

/// @brief verifica se a senha possui caracteres invalidos
///
/// @param senha representa a senha a ser verificada
bool Senha::possui_invalido(std::string senha) {
	for (size_t i{ 0 }; i < senha.length(); i++) {
		if (senha[i] != '#' && senha[i] != '$' && senha[i] != '%' && senha[i] != '&'
			&& !isalpha(senha[i]) && !isdigit(senha[i])) {
			return 1;
		}
	}
	return 0;
}

/// @brief verifica se a senha possui caracteres repetidos
///
/// @param senha representa a senha a ser verificada
bool Senha::checa_repeticao(std::string senha) {
	for (size_t i{0}; i < senha.length(); i++) {
		for (size_t j{ 0 }; j < senha.length(); j++) {
			if (i != j && senha[i] == senha[j]) {
				return 1;
			}
		}
	}
	return 0;
}

/// @brief Atribui a senha
///
/// Seta o valor da senha caso seja válido
/// @param senha representa a senha a ser armazenada
void Senha::set_senha(std::string senha){
    valida_senha(senha);
    this->senha = senha;
}

/// @brief Construtor da classe Senha
///
/// Recebe uma string com uma senha, caso seja valido
/// atribui esse valor a senha
/// @param senha representa a senha a ser definida
Senha::Senha(std::string senha){
    set_senha(senha);
}

/// @brief retorna o valor contido em senha
std::string Senha::get_senha(){
    return this->senha;
}

//////////////////////////////////////////////////////Vagas

/// @brief Valida o numero de vagas
///
/// Caso receba um valor inválido, lança uma excecao
/// de invalid_argument
/// @param vagas representa o numero de vagas a ser validado
void Vagas::valida_vagas(int vagas){
    	if (vagas > 4 || vagas < 0) {
		throw std::invalid_argument("Número de vagas inválido!!");
	}
}

/// @brief Atribui o numero de vagas
///
/// Seta o valor do numero de vagas caso seja válido
/// @param vagas representa o numero de vagas
void Vagas::set_vagas(int vagas){
    valida_vagas(vagas);
    this->vagas = vagas;
}

/// @brief retorna o valor contido em vagas
int Vagas::get_vagas(){
    return this->vagas;
}

/// @brief Construtor da classe Vagas
///
/// Recebe uma inteiro com um numero de vagas, caso seja valido
/// atribui esse valor a vagas
/// @param vagas representa o numero de vagas a ser definido
Vagas::Vagas(int vagas){
    set_vagas(vagas);
}

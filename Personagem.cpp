#include "Personagem.h"
#include <string>
#include <iostream>
#include "Elfo.h"
#include "Goblin.h"
#include "Mago.h"

using namespace std;
//getters
short int Personagem::get_Ataque()
{
    return ataque;
}
std::string Personagem::get_Classe()
{
    return classe_personagem;
}
short int Personagem::get_Defesa()
{
    return defesa;
}
short int Personagem::get_Hp()
{
    return hp;
}
std::string Personagem::get_Nome()
{
    return nome_jogador;
}
//setters
void Personagem::set_Hp(short int Hp_parametro)
{
    hp = Hp_parametro;
}
void Personagem::set_Ataque(short int Ataque_parametro)
{
    ataque = Ataque_parametro;
}
void Personagem::set_Defesa(short int Defesa_parametro)
{
    defesa = Defesa_parametro;
}
//altera o hp
void Personagem::muda_Hp(short int dif, bool ganha)
{
    if(ganha == true)
    {
        hp = hp + dif;
    }
    else
    {
        hp = hp - dif;
    }
}
//altera a defesa
void Personagem::muda_Defesa(short int dif, bool ganha)
{
    if(ganha == true)
    {
        defesa = defesa + dif;
    }
    else
    {
        defesa = defesa - dif;
    }    
}
//altera o ataque
void Personagem::muda_Ataque(short int dif, bool ganha)
{
    if(ganha == true)
    {
        ataque = ataque + dif;
    }
    else
    {
        ataque = ataque - dif;
    } 
}
//construtor com parametros
Personagem::Personagem(string nome_parametro, string classe_parametro)
{
    nome_jogador = nome_parametro;
    classe_personagem = classe_parametro;
}
//construtor sem parametros
Personagem::Personagem()
{
    
    
}
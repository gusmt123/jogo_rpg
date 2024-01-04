#include "Personagem.h"
#include <string>
#include <iostream>

using namespace std;

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
void Personagem::muda_Hp(int dif, bool ganha)
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
void Personagem::muda_Defesa(int dif, bool ganha)
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
void Personagem::muda_Ataque(int dif, bool ganha)
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
Personagem::Personagem(string nome_parametro, string classe_parametro)
{
    nome_jogador = nome_parametro;
    classe_personagem = classe_parametro;
}
Personagem::Personagem()
{

};
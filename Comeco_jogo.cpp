#include "Comeco_jogo.h"
#include "Personagem.h"
#include <iostream>
#include <string>

using namespace std;

comeco_jogo::comeco_jogo(Personagem jogador)
{
    //cria o jogador
    usuario = jogador;
    //cria os adversarios
    for(int i = 0;i < 5;i++)
    {
        goblins_adversarios[i] = Goblin();
    }
    for(int i = 0; i<8 ; i++)
    {
        elfos_adversarios[i] = Elfo();
    }
    for(int i = 0; i < 3; i++)
    {
        magos_adversarios[i] = Mago();
    }
};
//getters
Personagem comeco_jogo::get_usuario()
{
    return usuario;
}
Goblin comeco_jogo::get_goblins_adversarios(short int num)
{
    return goblins_adversarios[num];
}
Elfo comeco_jogo::get_elfos_adversarios(short int num)
{
    return elfos_adversarios[num];
}
Mago comeco_jogo::get_magos_adversarios(short int num)
{
    return magos_adversarios[num];
}
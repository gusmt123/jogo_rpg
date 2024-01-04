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
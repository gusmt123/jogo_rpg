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
        goblins_adversarios[i].set_Ataque((short)4);
        goblins_adversarios[i].set_Hp((short)7);
        goblins_adversarios[i].set_Defesa((short)2);
    }
    for(int i = 0; i<8 ; i++)
    {
        elfos_adversarios[i] = Elfo();
        elfos_adversarios[i].set_Ataque((short)1);
        elfos_adversarios[i].set_Hp((short)1);
        elfos_adversarios[i].set_Defesa((short)1);
    }
    for(int i = 0; i < 3; i++)
    {
        magos_adversarios[i] = Mago();
        magos_adversarios[i].set_Ataque((short)1);
        magos_adversarios[i].set_Defesa((short)3);
        magos_adversarios[i].set_Hp((short)2);
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
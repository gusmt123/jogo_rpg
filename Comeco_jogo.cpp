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
//inicia o jogo
void comeco_jogo::inicia_jogo()
{
    std::cout << "Bem vindo ao jogo: " + usuario.get_Nome() + "voce e um: " + usuario.get_Classe() << std::endl;
    std::cout << "Voce esta enfentando uma serie de criaturas um total de 3 Magos, 8 elfos e 5 goblins " << std::endl;
    std::cout << "Deseja entrar em combate com qual tipo de criatura?" << std::endl;
    std::cout << "1.Goblin" << std::endl;
    std::cout << "2.Elfo" << std::endl;
    std::cout << "3.Mago" << std::endl;
    char classe_atacada;
    
    //pega apenas o primeiro caracter do input do usuario
    std::cin >> classe_atacada;
    

    //segue com o jogo explicando sobre os adversarios
    if(classe_atacada == '1')
    {
        std::cout << "Existem 5 Goblins te atacando digite um numero de 1 a 5 para dizer qual deles voce quer atacar" << std::endl;
    }
    else if(classe_atacada == '2')
    {
        std::cout << "Existem 8 Elfos te atacando digite um numero de 1 a 8 para dizer qual elfo voce quer atacar" << std::endl;
    }
    else if(classe_atacada == '3')
    {
        std::cout << "Existem 3 Magos te atacando digite um numero de um a 3 para dizer mago voce esta atacando" << std::endl;
    }
    //verifica se o usuario digiou um comando invalido
    else
    {
        inicia_jogo();
    }

}
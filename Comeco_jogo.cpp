#include "Comeco_jogo.h"
#include "Personagem.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

comeco_jogo::comeco_jogo(Personagem jogador)
{
    //executa os setters do jogador
    jogador.set_Hp(20);
    jogador.set_Defesa(2);
    jogador.set_Ataque(4);
    //inicializa o objeto classe_atacada para que o loop da funcao inicia_jogo pode funcionar
    classe_atacada = '0';
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
    //repete ate o usuario colocar uma repsosta valida
    while(classe_atacada!= '1' && classe_atacada!= '2' && classe_atacada != '3')
    {
        //limpa o terminal
        system("cls");

        //cria menu para o usuario poder escolher a quem atacar
        std::cout << "Bem vindo ao jogo: " + usuario.get_Nome() + "voce e um: " + usuario.get_Classe() << std::endl;
        std::cout << "Voce esta enfentando uma serie de criaturas um total de 3 Magos, 8 elfos e 5 goblins " << std::endl;
        std::cout << "Deseja entrar em combate com qual tipo de criatura?" << std::endl;
        std::cout << "1.Goblin" << std::endl;
        std::cout << "2.Elfo" << std::endl;
        std::cout << "3.Mago" << std::endl;
        
        
        //pega apenas o primeiro caracter do input do usuario
        std::cin.get(classe_atacada);
        int num_adversario = 0;
        //segue com o jogo explicando sobre os adversarios
        if(classe_atacada == '1')
        {
           
            //fez com que o sistema so aceite respostas validas
            while(num_adversario < 1 || num_adversario > 5)
            {
                //limpa o terminal
                system("cls");
                std::cout << "Existem 5 Goblins te atacando digite um numero de 1 a 5 para dizer qual deles voce quer atacar" << std::endl;
                std::cin >> num_adversario;
                if(!isdigit(num_adversario))
                {
                    num_adversario = 0;
                }
            }
            //ataca o adversario
            goblins_adversarios[num_adversario].muda_Hp(usuario.get_Ataque() - goblins_adversarios[num_adversario].get_Defesa(), false);
            std::cout << "Agora o Goblin : " << num_adversario << " tem o hp de " << to_string(goblins_adversarios[num_adversario].get_Hp()) << std::endl;
        }
        else if(classe_atacada == '2')
        {
           
            //fez com que o sistema so aceite respostas validas
            while(num_adversario < 1 || num_adversario > 8)
            {
            //limpa o terminal
            system("cls");
            //o jogadorpode escolher qual adversario atacar
            std::cout << "Existem 8 Elfos te atacando digite um numero de 1 a 8 para dizer qual elfo voce quer atacar" << std::endl;
            std::cin >> num_adversario;
            if(!isdigit(num_adversario))
            {
                    num_adversario = 0;
            }
            }
            //ataca o adversario
            elfos_adversarios[num_adversario].muda_Hp((short)usuario.get_Ataque() - elfos_adversarios[num_adversario].get_Defesa(), false);
            std::cout << "Agora o Elfo : " << num_adversario << " tem o hp de " << to_string(elfos_adversarios[num_adversario].get_Hp()) << std::endl;

        }
        else if(classe_atacada == '3')
        {
            
            
            
            //fez com que o sistema so aceite respostas validas
            while(num_adversario < 1 || num_adversario > 3)
            {
            //limpa o terminal
            system("cls");
            //o jogadorpode escolher qual adversario atacar
            std::cout << "Existem 3 Magos te atacando digite um numero de um a 3 para dizer mago voce esta atacando" << std::endl;
            std::cin >> num_adversario;
            if(!isdigit(num_adversario))
            {
                    num_adversario = 0;
            }
            }

            //ataca o adversario
            magos_adversarios[num_adversario].muda_Hp((short)usuario.get_Ataque() - magos_adversarios[num_adversario].get_Defesa(), false);
            std::cout << "Agora o Mago : " << num_adversario << " tem o hp de " << to_string(magos_adversarios[num_adversario].get_Hp()) << std::endl;
        }
    }    


    
    

}

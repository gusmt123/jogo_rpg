#include "Comeco_jogo.h"
#include "Personagem.h"
#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

comeco_jogo::comeco_jogo(Personagem jogador)
{

    //executa os setters do jogador
    if(jogador.get_Classe() == "Goblin")
    {
        jogador.set_Hp(20);
        jogador.set_Defesa(2);
        jogador.set_Ataque(4);
    }
    else if(jogador.get_Classe() == "Elfo")
    {
        jogador.set_Hp(18);
        jogador.set_Defesa(2);
        jogador.set_Ataque(2);        
    }
    else
    {
        jogador.set_Hp(21);
        jogador.set_Defesa(3);
        jogador.set_Ataque(22);
    }
    //cria o jogador
    usuario = jogador;
    //cria os adversarios
    for(int i = 0;i < 5;i++)
    {
        goblins_adversarios[i] = Goblin();
        goblins_adversarios[i].set_Ataque((short)1);
        goblins_adversarios[i].set_Hp((short)1);
        goblins_adversarios[i].set_Defesa((short)1);
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
    //inicializa o objeto classe_atacada para que o loop da funcao inicia_jogo pode funcionar
    char classe_atacada = '0';
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
        //inicializa a variavel que define a criayura atacada
        char num_adversario = '0';
        //segue com o jogo explicando sobre os adversarios
        if(classe_atacada == '1')
        {
            //permite o usuario atacar varias vezes o adversario
            while(verifica_se_o_jogador_venceu_todos_adversarios(classe_atacada) == false)
            {
                
                //fez com que o sistema so aceite respostas validas
                while(num_adversario != '1' && num_adversario != '2'  && num_adversario != '3' && num_adversario != '4' && num_adversario != '5')
                {   
    
                    //limpa o terminal
                    system("cls"); 
                    //o jogadorpode escolher qual adversario atacar
                    std::cout << "Existem 5 Goblins te atacando digite um numero de 1 a 5 para dizer qual deles voce quer atacar" << std::endl;
                    std::cin.get(num_adversario);
                    if(num_adversario == '1' || num_adversario == '2'  || num_adversario == '3' || num_adversario == '4' || num_adversario == '5' )
                    {
                        //cria variavel que converte char em int
                        int posicao_adversario = num_adversario - '0';
                        //anuncia o hp
                        std::cout << "o hp do goblin " << num_adversario << " e "  << goblins_adversarios[posicao_adversario-1].get_Hp();
                        //ataca o adversario
                        goblins_adversarios[posicao_adversario-1].muda_Hp(usuario.get_Ataque() - goblins_adversarios[posicao_adversario-1].get_Defesa(), false);
                        std::cout << "Agora o Goblin : " << num_adversario << " tem o hp de " << goblins_adversarios[posicao_adversario-1].get_Hp() << std::endl;
                        num_adversario = '0';
                        if(verifica_se_o_jogador_venceu_todos_adversarios(classe_atacada) == true)
                        {
                            system("cls");
                            std::cout << "voce ganhou o jogo" << std::endl;
                            num_adversario = '9';
                        }
                        system("pause");   
                    }
                    
                }
                       

            }

            
        }
        else if(classe_atacada == '2')
        {
           
            //fez com que o sistema so aceite respostas validas
            while(num_adversario != '1' && num_adversario != '2'  && num_adversario != '3' && num_adversario != '4' && num_adversario != '5' && num_adversario != '6' && num_adversario != '7' && num_adversario != '8')
            {
            //limpa o terminal
            system("cls");
            //o jogadorpode escolher qual adversario atacar
            std::cout << "Existem 8 Elfos te atacando digite um numero de 1 a 8 para dizer qual elfo voce quer atacar" << std::endl;
            std::cin.get(num_adversario);

            }
            //cria variavel que converte char em int
            int posicao_adversario = num_adversario - '1';
            //anuncia o hp
            std::cout << "o hp do elfo " << num_adversario << " e "  << elfos_adversarios[posicao_adversario].get_Hp();
            //ataca o adversario
            elfos_adversarios[posicao_adversario].muda_Hp(usuario.get_Ataque() - elfos_adversarios[posicao_adversario].get_Defesa(), false);
            std::cout << "Agora o Elfo : " << num_adversario << " tem o hp de " << to_string(elfos_adversarios[posicao_adversario].get_Hp()) << std::endl;
            system("pause");
        }
        else if(classe_atacada == '3')
        {
            
            
            //repete ate todos os adversarios dessa classe estiverem mortos
            
            //fez com que o sistema so aceite respostas validas
            while(num_adversario != '1' && num_adversario != '2'  && num_adversario != '3')
            {
            //limpa o console
            system("cls");  
            //o jogadorpode escolher qual adversario atacar
            std::cout << "Existem 3 Magos te atacando digite um numero de um a 3 para dizer mago voce esta atacando" << std::endl;
            std::cin.get(num_adversario);
            
            }
            //cria variavel que converte char em int
            int posicao_adversario = num_adversario - '0';
            //anuncia o hp
            std::cout << "o hp do elfo " << num_adversario << " e "  << magos_adversarios[posicao_adversario].get_Hp();
            //ataca o adversario
            magos_adversarios[posicao_adversario].muda_Hp(usuario.get_Ataque() - magos_adversarios[posicao_adversario].get_Defesa(), false);
            std::cout << "Agora o Mago : " << num_adversario << " tem o hp de " << to_string(magos_adversarios[posicao_adversario].get_Hp()) << std::endl;
            system("pause");
        }
    }    


    
    

}
bool comeco_jogo::verifica_se_o_jogador_venceu_todos_adversarios(char classe)
{
    int count = 0;
    switch (classe)
    {
        case '1':
            count = 0;
            for(int i = 0; i < 5;i++)
            {
                if (goblins_adversarios[i].get_Hp() <= 0)
                {
                    count++;
                }
            }
            if(count >= 4)
            {
                return true;
            }
            else
            {
                return false;
            }
        break;
        case '2':
            for(int i = 0; i < 8;i++)
            {
                if(elfos_adversarios[i].get_Hp() > 0)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
        break;
        case '3':
            for(int i = 0; i < 3;i++)
            {
                if(magos_adversarios[i].get_Hp() > 0)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
        break;
    }
};
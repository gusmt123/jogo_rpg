#include <iostream>
#include <string>
#include <fstream>
#include "stdio.h"
#include "string.h"
#include "Comeco_jogo.h"

using namespace std;

//variaveis usadas tanto pela funcao main quanto pela funcao define_classes
Personagem jogador;
string nome_jogador;
string classe;


//define de qual classe e o personagem
void define_classes(string nome_jogador, string classe)
{
        Mago mago_jogador(nome_jogador);
        Elfo elfo_jogador(nome_jogador);
        Goblin goblin_jogador(nome_jogador);
        if(classe == "Mago")
        {
            jogador = mago_jogador;
        }
        else if(classe == "Elfo")
        {
            jogador = elfo_jogador;
        }
        else if(classe == "Goblin")
        {
            jogador = goblin_jogador;
        }
        
}
void inicia_jogo()
{
    comeco_jogo inicio = comeco_jogo(jogador);
    inicio.inicia_jogo();
}
//inicio do programa
int main()
{

    std::cout << "Quando voce chegar a 0 de vida você perde o jogo" << std::endl;
    JOGO_SALVO_GOTO: std::cout << "Voce ja salvou o jogo alguma vez? "<< std::endl;
    std::cout << "1.Sim" << std::endl;
    std::cout << "2.Nao" << std::endl;
    char jogo_salvo;
    std::cin >> jogo_salvo;
    //verifica se o usuario digitou multiplos caracteres
    if(jogo_salvo != '1' and jogo_salvo != '2')
    {
        jogo_salvo = '2';
    }
    //abre arquivo de save e segue com o jogo
    if(jogo_salvo == '1')
    {
        
       fstream Arquivo;
       Arquivo.open("save_jogo.txt", ios::in);
       for(short int i = 0 ; i < 2; i++)
       {
            if(i == 0)
            {
                std::getline(Arquivo, nome_jogador);
            }
            else if(i == 1)
            {
                std::getline(Arquivo, classe);
            } 
       }
       delete &Arquivo;
       define_classes(nome_jogador,classe);
       inicia_jogo();
    }
    //comeca jogo novo e segue
    else if(jogo_salvo == '2')
    {
        std::cout << "Digite o seu nome" << std::endl;
        std::cin >> nome_jogador;
        ESCOLHER_PERSONAGEM: std::cout << "Escolha uma classe de personagem:" << std::endl;
        std::cout <<  "Mago" << std::endl;
        std::cout <<  "Elfo" << std::endl;
        std::cout <<  "Goblin" << std::endl;
        std::cin >> classe;
        if(classe != "Mago" && classe != "Elfo" && classe != "Goblin")
        {
            goto ESCOLHER_PERSONAGEM;
        }
        std::cout << "Voce quer salvar os seus dados?" << std::endl;
        std::cout << "1.Sim" << std::endl;
        std::cout << "2.Nao" << std::endl;  
        int salvar_dados;
        std::cin >> salvar_dados;
        //Salva dados
        if(salvar_dados == 1)
        {
            ofstream Arquivo;
            Arquivo.open("save_jogo.txt");
            Arquivo << nome_jogador << endl << classe << endl;
            delete &Arquivo;
        }
        delete &salvar_dados;
        define_classes(nome_jogador,classe);
        inicia_jogo();
       
        

    }
    //verifica se o usuario digitou algo imcompatives com as opcoes
    else
    {
        goto JOGO_SALVO_GOTO;
    }
}




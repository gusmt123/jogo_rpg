#ifndef HEADERFILE_H
#define HEADERFILE_H


#include <string>
#include <iostream>

using namespace std;

class Personagem
{
    private:
        string classe_personagem;
        string nome_jogador;
        short int hp;
        short int ataque;
        short int defesa;
    public:
        Personagem();    
        Personagem(std::string nome_parametro, std::string classe_parametro);
        short int get_Hp();
        short int get_Ataque();
        short int get_Defesa();
        void muda_Hp(int dif, bool ganha);
        void muda_Ataque(int dif, bool ganha);
        void muda_Defesa(int di, bool ganha);
        void set_Hp(int Hp_parametro);
        void set_Ataque(int Ataque_parametro);
        void set_Defesa(int Defesa_parametro);
        string get_Nome();
        string get_Classe();
    
};

#endif

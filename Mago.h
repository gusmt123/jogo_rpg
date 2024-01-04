#include "Personagem.h"
#include <iostream>
#include <string>



using namespace std;

class Mago: public Personagem
{
    public:
        Mago();
        Mago(std::string nome_mago);
        using Personagem::Personagem;      
};

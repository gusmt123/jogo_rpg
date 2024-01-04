#include "Personagem.h"
#include <iostream>
#include <string>

using namespace std;

class Mago: public Personagem
{
    public:
        Mago(std::string nome_mago);
        using Personagem::Personagem;      
};
#include "Personagem.h"
#include <string>
#include <iostream>

using namespace std;

class Goblin: public Personagem
{
    public:
        Goblin(std::string nome_goblin);
        using Personagem::Personagem;
};

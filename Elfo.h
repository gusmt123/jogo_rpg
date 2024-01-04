#include "Personagem.h"
#include <iostream>
#include <string>




using namespace std;

class Elfo: public Personagem
{
   
    public:
    Elfo();
    Elfo(std::string nomeelfo);
    using Personagem::Personagem;

};

#include "Personagem.h"
#include "Goblin.h"
#include "Mago.h"
#include "Elfo.h"


//cria os adversarios no jogo
class comeco_jogo
{

    private:
    Goblin goblins_adversarios[5];
    Mago magos_adversarios[3];
    Elfo elfos_adversarios[8];
    Personagem usuario;
    public:
    comeco_jogo(Personagem jogador);
    Goblin get_goblins_adversarios;
    Mago get_magos_adversarios;
    Elfo get_elfos_adversarios;
    Personagem get_usuario;

};
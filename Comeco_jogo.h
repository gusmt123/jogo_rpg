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
    char classe_atacada;
    public:
    comeco_jogo(Personagem jogador);
    Personagem get_usuario();
    Goblin get_goblins_adversarios(short int num);
    Mago get_magos_adversarios(short int num);
    Elfo get_elfos_adversarios(short int num);
    void inicia_jogo();
    char retorna_opcao_valida();
};
README.md

Descrição do Projeto

Este projeto é um jogo em C++ onde um jogador enfrenta adversários de diferentes classes (Goblin, Elfo e Mago). O jogador pode selecionar um adversário para combater e deve derrotar todos os adversários da classe escolhida.

Arquivos do Projeto

Comeco_jogo.h / Comeco_jogo.cpp: Define a classe comeco_jogo responsável por iniciar o jogo, configurar os adversários e gerenciar a batalha. A classe inicializa um jogador e adversários, e inclui métodos para iniciar o jogo e verificar se o jogador venceu todos os adversários.

Elfo.h / Elfo.cpp: Define a classe Elfo, que herda da classe Personagem. Inclui construtores para criar instâncias de Elfo.

Goblin.h / Goblin.cpp: Define a classe Goblin, que também herda da classe Personagem. Inclui construtores para criar instâncias de Goblin.

Mago.h / Mago.cpp: Define a classe Mago, que herda da classe Personagem. Inclui construtores para criar instâncias de Mago.

Personagem.h / Personagem.cpp: Define a classe base Personagem, que contém atributos e métodos comuns a todos os tipos de personagens (nome, classe, hp, ataque e defesa). Inclui métodos para acessar e modificar atributos, além de métodos para alterar os valores de hp, ataque e defesa.

Jogador.h / Jogador.cpp: Define a classe Jogador, que parece ser uma variação da classe Personagem, mas não é utilizada diretamente no código fornecido.

jogo.cpp: O ponto de entrada principal do programa. Gerencia a inicialização do jogo, a escolha de personagem, e a opção de carregar um jogo salvo. Também contém a lógica para salvar e carregar o progresso do jogo.

Compilação

Para compilar o código, use o script compila_progama_g++.bat. Este script limpa os arquivos binários antigos, compila os arquivos fonte e executa o programa resultante.

Execução

Após a compilação, o programa será executado. O jogador será guiado através da escolha de um adversário e batalhas, com a opção de salvar o progresso do jogo.
#ifndef JOGO_DA_VELHA_H
#define JOGO_DA_VELHA_H

typedef struct{
    int qtdPartidas, vitorias, derrotas;
    int errosNaPartida, partidasJogadas;
}tJogo;

tJogo* criaJogo(int qtdPartidas);
tJogo* leJogo();
void iniciaPartida(tJogo* jogo);
int rodaPartida(tJogo* jogo);
void rodaJogo(tJogo* jogo);
void liberaJogo(tJogo* jogo);

#endif
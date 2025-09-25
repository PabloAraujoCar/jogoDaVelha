#include <stdio.h>
#include <stdlib.h>
#include "palavras.h"
#include "jogoDaVelha.h"

tJogo* criaJogo(int qtdPartidas){
    tJogo* jogo;
    jogo->qtdPartidas = qtdPartidas;

    jogo->grupo = malloc(sizeof(int) * qtdPartidas);
    jogo->palavra = malloc(sizeof(int) *  qtdPartidas);

    jogo->partidasJogadas = 0;
    jogo->derrotas = 0;
    jogo->vitorias = 0;
    jogo->errosNaPartida = 0;

    return jogo;
}

tJogo* leJogo(){
    int qtd = 0;

    printf("Digite quantas partidas deseja jogar \n");
    scanf("%d", &qtd);

    return criaJogo(qtd);
}


void iniciaPartida(tJogo* jogo){

}

//reorna 1 caso a partida tenha acabado e 0 se ainda estiver continuando
//a partida acaba quando a pessoa erra 5 vezes ou quando acerta a palvra
int rodaPartida(tJogo* jogo){
    
}

void rodaJogo(tJogo* jogo){

}

void liberaJogo(tJogo* jogo){
    free(jogo->grupo);
    free(jogo->palavra);

    free(jogo);
}
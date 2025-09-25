#ifndef PARTIDA_H
#define PARTIDA_H

#define MAX_VIDAS 5

typedef struct{
    int resultado; //0  = perdeu; 1 = ganhou;
    int grupoDaPalavra, palavra;
    int erros;
}tPartida;

tPartida* criaPartida();

void rodaPartida(tPartida* partida);

int getResultadoPartida(tPartida* partida);

int getGrupoDaPalavraDaPartida(tPartida* partida);

int getPalavraDaPartida(tPartida* partida);

int getQtdErrosDaPartida(tPartida* partida);

void liberaPartida(tPartida* partida);

#endif
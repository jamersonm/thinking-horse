#ifndef CAVALO_H
#define CAVALO_H
#include "Tabuleiro.h"

class Cavalo
{
private:
    int lin, col, cmon, tmon, random_seq[8], posicao[2];
    Tabuleiro t;
public:
    Cavalo(int lin, int col);
    ~Cavalo(){}
    int get_col(){return col;}
    int get_lin(){return lin;}

    void movimentar();

    void get_random();

    Tabuleiro &get_tab(){return t;};

    void zerar_tmon(){tmon = 0;}
    void acr_tmon(){tmon++;}
    int get_tmon(){return tmon;}
    void zerar_cmon(){cmon = 0;}
    void acr_cmon(){cmon++;}
    int get_cmon(){return cmon;}

    void comparar_pesos(bool);
    void set_posicao(int, int);
    bool verificarposicao(int, int);

    void exibir();
};

#endif

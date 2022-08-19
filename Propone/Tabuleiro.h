#ifndef TABULEIRO_H
#define TABULEIRO_H

#define LIN 8
#define COL 8

class Tabuleiro
{
private:
    int tab[LIN][COL], pesos[LIN][COL];
public:
    Tabuleiro();
    ~Tabuleiro(){}
    void zerar();

    void marcar_posicao(int, int);
    void set_posicao_tab(int, int, int);
    int get_posicao_tab(int a, int b){return tab[a-1][b-1];}

    int get_peso(int a, int b){return pesos[a-1][b-1];}

    bool verificar_tabuleiro();

    void exibir_tab();
    void exibir_pesos();
};


#endif

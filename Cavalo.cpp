#include <iostream>
#include <cstdlib>
#include "Cavalo.h"

using namespace std;

Cavalo::Cavalo(int lin, int col)
{
    cmon = -1;
    zerar_tmon();
    set_posicao(lin, col);
    srand(time(NULL));
}

bool Cavalo::verificarposicao(int a, int b)
{
    if (a >= 1 && a <= 8)
    {
        if (b >= 1 && b <= 8)
        {
            return true;
        } 
    }
    return false;
}
void Cavalo::comparar_pesos()
{
    int mcol = 0, mlin = 0;
    struct Maior
    {
        int linha, coluna;
    };
    Maior m;
    m.linha = 0;
    m.coluna = 0;
    mlin = lin-1;
    mcol = col-2;
    if(verificarposicao(mlin, mcol) == true)
        {
            m.linha = mlin;
            m.coluna = mcol;
        }
    mlin = 0;
    mcol = 0;

    mlin = lin-1;
    mcol = col+2;
    if (verificarposicao(mlin, mcol) == true)
    {
        if (t.get_peso(m.linha, m.coluna) <= t.get_peso(mlin, mcol))
            {
                m.linha = mlin;
                m.coluna = mcol;
            }
    }
    mlin = 0;
    mcol = 0;

    mlin = lin-2;
    mcol = col-1;
    if (verificarposicao(mlin, mcol) == true)
    {
        if (t.get_peso(m.linha, m.coluna) <= t.get_peso(mlin, mcol))
            {
                m.linha = mlin;
                m.coluna = mcol;
            }
    }
    mlin = 0;
    mcol = 0;

    mlin = lin-2;
    mcol = col+1;
    if (verificarposicao(mlin, mcol) == true)
    {
        if (t.get_peso(m.linha, m.coluna) <= t.get_peso(mlin, mcol))
            {
                m.linha = mlin;
                m.coluna = mcol;
            }
    }
    mlin = 0;
    mcol = 0;

    mlin = lin+1;
    mcol = col-2;
    if (verificarposicao(mlin, mcol) == true)
    {
        if (t.get_peso(m.linha, m.coluna) <= t.get_peso(mlin, mcol))
            {
                m.linha = mlin;
                m.coluna = mcol;
            }
    }
    mlin = 0;
    mcol = 0;

    mlin = lin+1;
    mcol = col+2;
    if (verificarposicao(mlin, mcol) == true)
    {
        if (t.get_peso(m.linha, m.coluna) <= t.get_peso(mlin, mcol))
            {
                m.linha = mlin;
                m.coluna = mcol;
            }
    }
    mlin = 0;
    mcol = 0;

    mlin = lin+2;
    mcol = col-1;
    if (verificarposicao(mlin, mcol) == true)
    {
        if (t.get_peso(m.linha, m.coluna) <= t.get_peso(mlin, mcol))
            {
                m.linha = mlin;
                m.coluna = mcol;
            }
    }
    mlin = 0;
    mcol = 0;

    mlin = lin+2;
    mcol = col+1;
    if (verificarposicao(mlin, mcol) == true)
    {
        if (t.get_peso(m.linha, m.coluna) <= t.get_peso(mlin, mcol))
            {
                m.linha = mlin;
                m.coluna = mcol;
            }
    }
    mlin = 0;
    mcol = 0;
    set_posicao(m.linha, m.coluna);
}
void Cavalo::set_posicao(int lin, int col)
{
    this->col = col;
    this->lin = lin;
    t.marcar_posicao(lin, col);
    acr_cmon();
}

void Cavalo::get_random()
{   
    random_seq[0] = rand()%7;
    int aux=1;
    for (int i = 1; i < random_seq[0]; i++)
    {
        random_seq[i] = random_seq[0]-i;
    }
    for (int j = random_seq[0]+1; j <= 7; j++)
    {
        random_seq[j] = random_seq[0]+aux;
        aux++;
    }
}


void Cavalo::exibir()
{
    cout << endl;
    cout << "Posição: " << get_lin() << ";" << get_col() << endl;
    cout << "Movimentos: " << get_cmon() << endl;
    cout << "Tentativas de movimentos: " << get_tmon() << endl;
    cout << endl;
}

bool Cavalo::movimentar()
{
    if (t.verificar_tabuleiro() == true)
        return false;
    comparar_pesos();
    return true;
}
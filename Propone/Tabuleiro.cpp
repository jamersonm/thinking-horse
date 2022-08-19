#include <iostream>
#include "Tabuleiro.h"

using namespace std;

Tabuleiro::Tabuleiro()
{
    zerar();
    for (int i = 0; i < LIN; i++)
        for(int j = 0; j < COL; j++)
            pesos[i][j] = 6;
    pesos[0][0] = 8;
    pesos[0][7] = 8;
    pesos[7][0] = 8;
    pesos[7][7] = 8;
    pesos[0][1] = 7;
    pesos[1][0] = 7;
    pesos[0][6] = 7;
    pesos[6][0] = 7;
    pesos[1][7] = 7;
    pesos[7][1] = 7;
    pesos[6][7] = 7;
    pesos[7][6] = 7;
    for (int i = 1; i < LIN-1; i++)
        for(int j = 1; j < COL-1; j++)
            pesos[i][j] = 4;
    for (int i = 2; i < LIN-2; i++)
        for(int j = 2; j < COL-2; j++)
            pesos[i][j] = 2;
    pesos[1][1] = 6;
    pesos[6][6] = 6;
    pesos[1][6] = 6;
    pesos[6][1] = 6;
}

void Tabuleiro::zerar()
{
    for (int i = 0; i < LIN; i++)
        for (int j = 0; j < COL; j++)
        {
            tab[i][j] = 0;
        }
}

void Tabuleiro::marcar_posicao(int a, int b)
{
    tab[a-1][b-1]++;
}

void Tabuleiro::set_posicao_tab(int a, int b, int c)
{
    tab[a-1][b-1] = c;
}

void Tabuleiro::exibir_tab()
{
    cout << "========   TABULEIRO   ========" << endl;
    for (int i = 0; i < LIN; i++)
    {
        cout << "        ";
        for (int j = 0; j < COL; j++)
        {
            cout << tab[i][j] << " ";
        }
        cout << " " << endl;
    }
}
void Tabuleiro::exibir_pesos()
{
    cout << "========   PESOS   ========" << endl;
    for (int i = 0; i < LIN; i++)
    {
        cout << "        ";
        for (int j = 0; j < COL; j++)
        {
            cout << pesos[i][j] << " ";
        }
        cout << " " << endl;
    }
}

bool Tabuleiro::verificar_tabuleiro()
{
    int cont = 0;
    for (int i = 0; i < LIN; i++)
        for (int j = 0; j < COL; j++)
        {
            if (tab[i][j] >= 1)
            {
                cont++;
            }
        }
    if (cont == 64)
    {
        return true;
    }
    return false;
}

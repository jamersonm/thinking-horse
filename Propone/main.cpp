#include <iostream>
#include "Cavalo.h"
#include "Tabuleiro.h"

using namespace std;

int main()
{
    Cavalo c(4,4);
    c.movimentar();
    c.get_tab().exibir_tab();
    c.get_tab().exibir_pesos();
    c.exibir();
    
    return 0;
}

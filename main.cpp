#include <iostream>
using std::cout;
#include "console.h"
#include "Data.h"
#include <string>
using std::string;

int main()
{
Console videogame("Sony");

videogame.ligar();
videogame.mostraMarca();

Console videogame2(videogame);

videogame2.mostraMarca();
videogame.abrirBandeja();
videogame2.abrirBandeja();
videogame.fecharBandeja();
videogame2.fecharBandeja();

videogame.mostraDataDefabricacao();

Console::atualizarFirmware(3);
Console::mostraVersaoFirmware();

}

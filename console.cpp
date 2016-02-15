#include "console.h"
#include <string>
using std::string;
#include <iostream>
using std::cout;

int Console::numeroDeSerie=20150203;

Console::Console()
{
    ligado=false;
    marca='Desconhecida';
    volume=20;
    bandejaAberta=false;
}

Console::Console(string marca)
{
    ligado=false;
    this->marca=marca;
    volume=20;
    bandejaAberta=false;
    
}

Console::Console(const Console &console)
{
ligado=console.ligado;
marca=console.marca;
volume=console.volume;
bandejaAberta=console.bandejaAberta;

   
}

Console::~Console()
{
}


void Console::upVolume(int up)
{
    volume=volume+up;
}
    
void Console::downVolume(int down)
{
    volume=volume+down;
}


void Console::ligar()
{
    if ( !ligado )
    {
        ligado = true;
        cout << "O Console foi ligado\n";
    }
    else
        cout << "Console esta ligado" << '\n';    
}

void Console::mostraMarca()
{
    cout << marca <<"\n";
}


void Console::abrirBandeja(){
if (bandejaAberta)
    cout << "\nBandeja ja esta aberta";
    else
    {
    bandejaAberta=true;
    cout << "\nBandeja foi aberta";
    }
    
}
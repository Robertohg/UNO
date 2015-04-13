#include "cartabase.h"
#include "headers.h"

cartabase::cartabase()
{
	this->s_color = new std::string("");
	this->i_numTotalDeCartas = new int(0);
}
void cartabase::setColor(std::string color){
	this->s_color = new std::string (color);
}
void cartabase::setNum(int Numero){
	this->i_numTotalDeCartas = new int(Numero);
}
cartabase::~cartabase()
{
	delete s_color;
	delete i_numTotalDeCartas;
}

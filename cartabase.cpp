#include "cartabase.h"
#include "headers.h"

cartabase::cartabase()
{
	this->s_color = new std::string("");
	this->i_numTotalDeCartas = new int(0);
}

cartabase::cartabase(std::string *s_color = new std::string(""), int *i_numTotalDeCartas = new int(0))
{
	this->s_color = new std::string(&s_color);
	this->i_numTotalDeCartas = i_numTotalDeCartas = new int(&i_numTotalDeCartas);
}
cartabase::~cartabase()
{
	delete s_color;
	delete i_numTotalDeCartas;
}

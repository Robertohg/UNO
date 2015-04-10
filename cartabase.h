#include "headers.h"

class cartabase{
public:
	std::string *s_color;
	int *i_numTotalDeCartas;

	cartabase();
	cartabase(std::string&, int&);
	~cartabase();
};


#include "headers.h"

class cartabase{
public:
	std::string *s_color;
	int *i_numTotalDeCartas;

	cartabase();
	void setColor(std::string);
	void setNum(int);
	~cartabase();
};


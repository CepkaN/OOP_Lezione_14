#pragma once
#include"IPadresse.h"

class Maschera {
	int _n1;
	int _n2;
	int _n3;
	int _n4;
public:
	Maschera();

	Maschera(int n1, int n2, int n3, int n4);

	Maschera operator>>(Maschera& masc);

	bool Appart(IPadresse& ad);

	IPadresse RetSetAd(IPadresse& ad);

	int NodSet();

	void MostraMasch();

};

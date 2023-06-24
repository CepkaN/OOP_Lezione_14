#include<iostream>
#include"Maschera.h"

Maschera::Maschera() :_n1(0), _n2(0), _n3(0), _n4(0) {}

Maschera::Maschera(int n1, int n2, int n3, int n4):_n1(n1),_n2(n2),_n3(n3),_n4(n4){}

Maschera Maschera::operator>>(Maschera& masc) {
	int n1, n2, n3, n4;
	std::cin >> n1; std::cin >> n2; std::cin >> n3; std::cin >> n4;
	masc._n1 = n1; masc._n2 = n2; masc._n3 = n3; masc._n4 = n4;
	return masc;
}

bool Maschera::Appart(IPadresse& ad) {
	if (ad.GetName1() < _n1 && ad.GetName2() < _n2 && ad.GetName3() < _n3 && ad.GetName4() < _n4)
		return true;
	return false;
}

IPadresse Maschera::RetSetAd(IPadresse& ad) {
	if (_n4 < 128) {
		IPadresse res(ad.GetName1(), ad.GetName2(), ad.GetName3(), 0);
		return res;
	}
	IPadresse res(ad.GetName1(), ad.GetName2(), ad.GetName3(), 1);
	return res;
}

int Maschera::NodSet() {
	int x1 = 256 - _n1;
	int x2 = 256 - _n2;
	int x3 = 256 - _n3;
	int x4 = 256 - _n4;
	int x = x1 * x2 * x3 * x4 - 2;
	return x;
}

void Maschera::MostraMasch() {
	std::cout << "Маска : " << _n1 << '.' << _n2 << '.' << _n3 << '.' << _n4 << ".\n";
}
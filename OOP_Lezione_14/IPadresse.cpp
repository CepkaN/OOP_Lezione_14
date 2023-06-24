#include<iostream>
#include"IPadresse.h"

IPadresse::IPadresse(int name1, int name2, int name3, int name4) :_name1(name1), _name2(name2), _name3(name3), _name4(name4) {}

IPadresse::IPadresse() :_name1(0), _name2(0), _name3(0), _name4(0) {}

IPadresse::IPadresse(IPadresse& ad) :_name1(ad._name1), _name2(ad._name2), _name3(ad._name3), _name4(ad._name4) {}

IPadresse IPadresse::operator >> (IPadresse& adr) {
	int name1, name2, name3, name4;
	std::cin >> name1; std::cin >> name2; std::cin >> name3; std::cin >> name4;
	adr._name1 = name1; adr._name2 = name2; adr._name3 = name3; adr._name4 = name4;
	return adr;
}

bool IPadresse::Valide(IPadresse& adr) {
	if ((adr._name1 > 255 || adr._name1 < 0) || (adr._name2 > 255 || adr._name2 < 0) || (adr._name3 > 255 || adr._name3 < 0) || (adr._name4 > 255 || adr._name4 < 0))
		return false;
	return true;
}

void IPadresse::MostraIPadresse() {
	std::cout << "Adresse : " << _name1 <<'.' << _name2 << '.' << _name3 << '.' << _name4 << "\n";
}

void IPadresse::operator ==(IPadresse& ad) {
	if (_name1 != ad._name1 || _name2 != ad._name2 || _name3 != ad._name3 || _name4 != ad._name4) {
		std::cout << "Адреса не равны\n";
		return;
	}
	std::cout << "Адреса равны.\n";
}

IPadresse IPadresse::operator<(IPadresse& ad) {	
	if (_name1 > ad._name1) { IPadresse ress(ad); return ress; }
	if (_name2 > ad._name2) { IPadresse ress(ad); return ress; }
	if (_name3 > ad._name3) { IPadresse ress(ad); return ress; }
	if (_name4 > ad._name4) { IPadresse ress(ad); return ress; }
	IPadresse ress(*this); return ress;
}



int IPadresse::GetName1() {
	return _name1;
}

int IPadresse::GetName2() {
	return _name2;
}

int IPadresse::GetName3() {
	return _name3;
}

int IPadresse::GetName4() {
	return _name4;
}

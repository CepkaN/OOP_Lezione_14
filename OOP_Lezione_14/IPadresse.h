#pragma once

class IPadresse {
private:
	int _name1;
	int _name2;
	int _name3;
	int _name4;
public:
	IPadresse();

	IPadresse(IPadresse&ad);

	IPadresse(int name1, int name2, int name3, int name4);

	int GetName1();

	int GetName2();

	int GetName3();

	int GetName4();


	IPadresse operator >> (IPadresse& adr);

	bool Valide(IPadresse& adr);

	void MostraIPadresse();

	void operator ==(IPadresse& ad);

	IPadresse operator<(IPadresse& ad);
};
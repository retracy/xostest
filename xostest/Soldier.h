#pragma once
#include "Citizen.h"
class Soldier :
	public Citizen
{
public:
	Soldier(string first, string last, int id, string rank) : Citizen(first, last, id), rank(rank)
	{
	}
	virtual ~Soldier()
	{
	}

	virtual string Information()
	{
		return string(Citizen::Information() + " " + rank);
	}

private:
	string rank;
};


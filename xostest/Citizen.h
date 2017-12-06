#pragma once

#include <string>
using namespace std;

class Citizen
{
public:
	Citizen(string first, string last, int id) : first(first), last(last), id(id)
	{
	}
	virtual ~Citizen()
	{
	}

	virtual string Information()
	{
		return string(first + " " + last + " " + to_string(id));
	}

	int Id() { return id; }

private:
	string first;
	string last;
	int id;
};


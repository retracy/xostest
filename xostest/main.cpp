#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include "Citizen.h"
using namespace std;

int main()
{
	cout << "hello again from xostest!" << endl;

	vector<shared_ptr<Citizen>> citizens{
		make_shared<Citizen>("Bob", "Tracy", 10),
		make_shared<Citizen>("Nemo", "Nobody", 2)
	};

	sort(begin(citizens), end(citizens),
		[](shared_ptr<Citizen> c1, shared_ptr<Citizen> c2) { return c1->Id() < c2->Id(); });

	for (auto citizen : citizens)
	{
		cout << citizen->Information() << endl;
	}

    return 0;
}
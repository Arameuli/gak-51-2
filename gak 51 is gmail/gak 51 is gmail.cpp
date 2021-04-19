#include <iostream>
#include<string>
#include<fstream>
#include<vector>
#include"E_Mail.h"
using namespace std;
int main()
{
	ifstream fin("users.txt");
	string fm, lm, gml, passw;
	fin >> fm >> lm >> gml >> passw;
	E_Mail t;
	vector<E_Mail> b;
	cin >> t.fname >> t.lname >> t.gmail >> t.password;
	b.push_back(t);
	cout << endl;
	if (t.gmail == gml) {
		cout << "aseti ukve arsebobs:" << endl;
	}
	else {
		t.print();
	}
}


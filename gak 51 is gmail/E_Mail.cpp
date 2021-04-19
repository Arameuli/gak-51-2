#include "E_Mail.h"
using namespace std;
E_Mail:: E_Mail() {
}
E_Mail:: E_Mail(string fname, string lname, string gmail, string password) {
	this->fname = fname;
	this->lname = lname;
	this->gmail = gmail;
	this->password = password;
}
void E_Mail:: print() {
	cout << endl << "You are registered successfully!" << endl;
	cout << "saxeli: " << fname << endl << "gvari: " << lname << endl << "gmail: " << gmail << endl << "password: " << password << endl;
}

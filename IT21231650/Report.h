#include <iostream>
#include <cstring>
#include "Administrator.h"
using namespace std;

class Report {
	private :
		Administrator *Administrator;
		char reportID[8];
		char reporttime[30];
		char reportdate[10];

	public :
	    Report();
	    Report(char rID[],char rtime[],char rDate[],Administrator *aid;);
	    void Generatereport();
};
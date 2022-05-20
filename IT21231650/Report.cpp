#include <iostream>
#include <cstring>
#include "Report.h"
#include "Administrator.h"
using namespace std;

Report::Report()
{
   cout<<"Report default"<<endl; 
}
Report::Report(char rID[],char rtime[],char rDate[],Administrator *aid;)
{
  	strcpy(reportID,rID);
  	strcpy(reporttime,rtime);
	  strcpy(reportdate,rDate);
  	cout<<"Report Overloaded constructor succsessful " <<endl;
}
void Report::Generatereport()
{
   cout<<"Generate report method succsessful " <<endl;
}

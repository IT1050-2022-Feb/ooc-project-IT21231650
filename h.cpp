class Administor {
	private :
      User*us;
      Manager*mgr;
      Report*rep;
      char adminid[10];

		
	public :
      Administrator();
  		void update_menu();
	    void Delete_menu();
	    void Manage_users();

};
Administrator::Administrator(char aid[])
{
  strcpy(adminid,aid);
	cout<<"Administor default constructor"<<endl;
}
void Administor::update_menu()
{
  cout<<"Administor update menu method successful" <<endl;
}
void Administor::Delete_menu()
{
  cout<<"Administor Delete menu method successful" <<endl;
}
void Administrator::Manage_users()
{
  cout<<"Administor Manage users method successful" <<endl;
}

//-----------------------------------------------------
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

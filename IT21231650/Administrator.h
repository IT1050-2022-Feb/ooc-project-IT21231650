#include <iostream>
#include <cstring>  
#include "User.h"
#include "Manager.h"
#include "Report.h"


class Administrator : public User {
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

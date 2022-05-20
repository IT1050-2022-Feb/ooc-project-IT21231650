#include "Administrator.h"
#include <iostream>
using namespace std;

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
// Vas kod ovdje
//
#include "User.hpp"
#include <iostream>

User::User(std::istream& w){
  std::cout<<"First name: ";
  w>>F_Name;
  std::cout<<"\nLast name: ";
  w>>L_Name;
  std::cout<<"\nUser ID: ";
  w>>User_ID;
}

void User::op(std::ostream& o){
  std::cout<<"First name: ";
  o<<F_Name;
  std::cout<<"\nLast name: ";
  o<<L_Name;
  std::cout<<"\nUser ID: ";
  o<<User_ID<<"\n";
}

const int& User::get_id() const{
return User_ID;
};

// const std::string& User::get_name() const{
// return F_Name;
// };
//
// const std::string& User::get_Lname() const{
// return L_Name;
// };

User::User(const User& o)
  : F_Name {o.F_Name}, L_Name{o.L_Name}, User_ID{o.User_ID}
{};

User::User(User&& o)
: F_Name {o.F_Name}, L_Name{o.L_Name}, User_ID{o.User_ID}
{};

User& User::operator=(const User& o){
F_Name = o.F_Name;
L_Name = o.L_Name;
User_ID = o.User_ID;
return *this;
};

User& User::operator=(User&& o){
F_Name = o.F_Name;
L_Name = o.L_Name;
User_ID = o.User_ID;
return *this;
};

 void User::set_borrow(){
 is_borrowed = true;
 return;
 };

  void User::reset_borrow(){
    is_borrowed = false;
  return;
  };

 bool User::get_borrow() const{
 return is_borrowed;
};


// Vas kod ovdje

#pragma once
#include <string>

class User{
  public:
  
  User() = default;
  User(std::istream&);
  User(const User&);
  User(User&&);
  User& operator=(const User&);
  User& operator=(User&&);
  ~User() = default;

  void op(std::ostream&);
  const int& get_id() const; 
  // const std::string& get_name() const;
  // const std::string& get_Fname() const;
  void set_borrow();
  void reset_borrow();
  bool get_borrow() const;

  private:
  std::string F_Name;
  std::string L_Name;
  int User_ID;
  bool is_borrowed;
};

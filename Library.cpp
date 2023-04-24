// Vas kod ovdje

#include "Library.hpp"



void Library::add_user(){
User newUser(std::cin);
for(int i=0; i<users.size() ; i++){
if( users[i].get_id() == newUser.get_id()){
  std::cout<< "Existing user ID!"<<std::endl;
  return;
};
};
users.push_back(newUser);
std::cout<<"Succesfully added!"<<std::endl;
}

void Library::add_book(){
Book newBook(std::cin);
books.push_back(newBook);
std::cout<<"Succesfully added!"<<std::endl;
}

void Library::borrow(){
  std::string tmp;
  int id;
  std::cout<< "Enter User ID: "<< std::endl;
  std::cin>>id;
  for(int i=0; i < users.size(); i++){
  if(id == users[i].get_id()){
  if(users[i].get_borrow() == true){
    std::cout<<"Korisnik ima posudjenu gradju!" << std::endl;
  return;
  }else{
  users[i].set_borrow();
  };
  };
  };
  std::cout<< "Enter Book title: " <<std::endl;
  std::cin>>tmp;
  for(int i = 0; i<books.size(); i++){
  if(tmp == books[i].get_title()){
  books[i].dec_num();
  };
  };
  std::cout<<"Succesfully borrowed"<<std::endl;
}

void Library::ret(){
  std::string tmp;
  int id;
  std::cout<< "Enter User ID: "<< std::endl;
  std::cin>>id;
  for(int i=0; i < users.size(); i++){
  if(id == users[i].get_id()){
  if(users[i].get_borrow() == true){
   users[i].reset_borrow(); 
  }else{
    std::cout<<"Korisnik nema posudjene gradje!" <<std::endl;
  return;
  };
  };
  };
  std::cout<< "Enter Book title: " <<std::endl;
  std::cin>>tmp;
  for(int i = 0; i<books.size(); i++){
  if(tmp == books[i].get_title()){
  books[i].add_num();
  };
  };
std::cout<<"Succcesfully returned"<<std::endl;
}

void Library::findTitle()const{
  std::cout<<"Title: " <<std::endl;
  std::string title;
  std::cin>>title;
  auto tmp = books.begin();
  while(tmp != books.end()){
  if(tmp->get_title() == title){
    std::cout<<*tmp;
  };
  tmp++;
  }
};

void Library::findAuthor()const{
  std::cout<<"Author: " <<std::endl;
  std::string author;
  std::cin>> author;
  auto tmp = books.begin();
  while(tmp != books.end()){
  if(tmp->get_author() == author){
    std::cout<<*tmp;
  };
  tmp++;
  }
};

void Library::findPublisher()const{
  std::cout<<"Publisher: " <<std::endl;
  std::string publisher;
  std::cin>> publisher;
  auto tmp = books.begin();
  while(tmp != books.end()){
  if(tmp->get_publisher() == publisher){
    std::cout<<*tmp;
  };
tmp++;
  };
};
void Library::findYear() const{
  std::cout<<"Year: " <<std::endl;
  int year;
  std::cin>> year;
  auto tmp = books.begin();
  while(tmp != books.end()){
  if(tmp->get_year() == year){
    std::cout<<*tmp;
  };
  tmp++;
  };
};


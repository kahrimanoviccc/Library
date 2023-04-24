// Vas kod ovdje
#include <iostream>
#include "MojVektor.hpp"
#include "User.hpp"
#include "Book.hpp"
#include "Library.hpp"

void commandList(){

  std::cout<< "CreateUser\nAddBook\nBorrowBook\nReturnBook\nFindByTitle\nFindByAuthor\nFindByYear\nFindByPublisher\nhelp\nexit"<<std::endl;

}

int main(){
Library myLib;
std::cout<<"Please enter command: "<<std::endl;
commandList();
std::string cmd;
while(std::cin >> cmd){
if(cmd == "CreateUser"){
myLib.add_user();
std::cout<<"Please enter command: "<<std::endl;

}else if(cmd == "AddBook"){
myLib.add_book();
std::cout<<"Please enter command: "<<std::endl;

}else if(cmd == "BorrowBook"){
myLib.borrow();
std::cout<<"Please enter command: "<<std::endl;

}else if(cmd == "ReturnBook"){
myLib.ret();
std::cout<<"Please enter command: "<<std::endl;

}else if(cmd == "FindByTitle"){
myLib.findTitle();
std::cout<<"Please enter command: "<<std::endl;

}else if(cmd == "FindByAuthor"){
myLib.findAuthor();
std::cout<<"Please enter command: "<<std::endl;

}else if(cmd == "FindByPublisher"){
myLib.findPublisher();
std::cout<<"Please enter command: "<<std::endl;

}else if(cmd == "FindByYear"){
myLib.findYear();
std::cout<<"Please enter command: "<<std::endl;

}else if(cmd == "exit"){
break;
}else if(cmd == "help"){
commandList();
std::cout<<"Please enter command: "<<std::endl;

}else{
  std::cout<<"Invalid command. Please try again!"<<std::endl;
};
};
}


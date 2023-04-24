// Vas kod ovdje
#include "Book.hpp"
#include <string>

Book::Book(std::istream& w){
  std::cout<<"Title: ";
  w>>Title;
  std::cout<<"\nAuthor: ";
  w>>Author;
  std::cout<<"\nPublisher: ";
  w>>Publisher;
  std::cout<<"\nPublishing year: ";
  w>>Year;
  std::cout<<"\nNumber of examples: ";
  w>>Num_Examples;
}

Book::Book(const Book& o)
: Title{o.Title}, Author{o.Author}, Publisher{o.Publisher}, Year{o.Year}, Num_Examples{o.Num_Examples}
{};
Book::Book(Book&& o)
  :  Title{o.Title}, Author{o.Author}, Publisher{o.Publisher}, Year{o.Year}, Num_Examples{o.Num_Examples}
{};
  
Book& Book::operator=(const Book& o){
Title = o.Title;
Author = o.Author;
Publisher = o.Publisher;
Year = o.Year;
Num_Examples = o.Num_Examples;
 return *this; 
  };

  Book& Book::operator=(Book&& o){
Title = o.Title;
Author = o.Author;
Publisher = o.Publisher;
Year = o.Year;
Num_Examples = o.Num_Examples;
 return *this;
  };

  void Book::dec_num(){
  Num_Examples--;
  };

  void Book::add_num(){
  Num_Examples++;
  };

  const std::string& Book::get_title() const{
  return Title;
  };
  const std::string& Book::get_author() const{
  return Author;
  };
  const std::string& Book::get_publisher() const{
  return Publisher;
  };
  const int& Book::get_year() const{
  return Year;
  };


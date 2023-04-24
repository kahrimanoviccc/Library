// Vas kod ovdje
#pragma once
#include <string>
#include <iostream>

class Book {
  public:
  Book() = default;
  Book(std::istream&);
  Book(const Book&);
  Book(Book&&);
  Book& operator=(const Book&);
  Book& operator=(Book&&);
  ~Book() = default;

  const std::string& get_title() const;
  const std::string& get_author() const;
  const std::string& get_publisher() const;
  const int& get_year() const;
  void add_num();
  void dec_num();

  friend std::ostream& operator<<(std::ostream& out, const Book& o){
  out<<"Title: "<<o.Title<<"\nAuthor: "<<o.Author<<"\nPublisher: "<<o.Publisher<<"\nPublish year: "<<o.Year<<"\nNumber of examples: "<<o.Num_Examples<<std::endl;
  return out;
  }

  private:
  std::string Title;
  std::string Author;
  std::string Publisher;
  int Year;
  int Num_Examples;

};

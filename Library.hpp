// Vas kod ovdj
#pragma once
#include "MojVektor.hpp"
#include "User.hpp"
#include "Book.hpp"
#include <iostream>

class Library {
  public:

void add_user();
void add_book();
void borrow();
void ret();
void findTitle() const;
void findAuthor() const;
void findPublisher() const;
void findYear() const;
  private:

MojVektor<User> users;
MojVektor<Book> books;
};

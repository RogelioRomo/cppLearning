#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
  friend Mystring operator-(const Mystring &rhs);
  friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
  friend Mystring &operator+=(Mystring &lhs, const Mystring &rhs);
  friend Mystring &operator++(Mystring &rhs);
  friend Mystring operator++(Mystring &rhs, int);
  friend Mystring operator*(const Mystring &lhs, int n);
  friend Mystring &operator*=(Mystring &lhs, int n);
  friend bool operator==(const Mystring &lhs, const Mystring &rhs);
  friend bool operator!=(const Mystring &lhs, const Mystring &rhs);
  friend bool operator>(const Mystring &lhs, const Mystring &rhs);
  friend bool operator<(const Mystring &lhs, const Mystring &rhs);
  friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
  friend std::istream &operator>>(std::istream &in, const Mystring &rhs);

private:
  char *str; //pointer to a char[] that holds a C-style string
public:
  Mystring(); //no-args constructor
  Mystring(const char *s); //overloaded constructor
  Mystring(const Mystring &source); //copy constructor
  Mystring(Mystring &&source); //Move constructor
  ~Mystring(); //Destructor

  Mystring &operator=(const Mystring &rhs); //copy assignment
  Mystring &operator=(Mystring &&rhs); //move assignment

  void display() const;

  int get_length() const; //getters
  const char *get_str() const;
};

#endif // !_MYSTRING_H_

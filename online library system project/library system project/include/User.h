#ifndef USER_H
#define USER_H
#include<string.h>
#include<iostream>
using namespace std;

class User
{
private:
    string name;
    int age;
    int id;
    string password;
    string email;
public:
    static int count;
    User();
    User(string, int, string, string  );
    User(const User& );
    bool operator==(const User&  );
    void setName(string );
    string getName() const;
    void setPassword(string );
    string getPassword()const;
    void setEmail(string );
    string getEmail()const ;
    void setAge(int );
    int getAge() const;
    void setId(int );
    int getId() const;
    void Display ();
    //void operator=(const User &);
    friend ostream &operator<<(ostream &, const User &);
    friend istream &operator>>( istream &, User &);
};


#endif // USER_H

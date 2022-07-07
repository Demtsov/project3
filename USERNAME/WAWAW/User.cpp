#include "User.h"
#include <iomanip>

using namespace std;
User::User() : name(0) {};
User::User(const User& empty) : name(empty.name), rights(empty.rights) {};
User::User(string name, string rights) {
    this->name = name;
    this->rights = rights;

}

User::~User() {};

string User::g_name() const { return name; }
string User::g_rights() const { return rights; }

void User::s_name(string name_s) { name = name_s; }
void User::s_rights(string rights_s) { rights = rights_s; }

#pragma once
#include <iostream>
#include <string>

class User {

private:

    std::string name;
    std::string rights;

public:
    User();
    User(const User& empty);
    User( std::string name, std::string rights);
    ~User();

    // Геттеры
   std::string g_name()const;
    std::string g_rights()const;

    //Сеттеры
    void s_name(std::string name_s);
    void s_rights(std::string rights_s);

    void show() const;
};

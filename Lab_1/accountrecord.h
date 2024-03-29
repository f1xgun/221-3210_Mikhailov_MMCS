#ifndef ACCOUNTRECORD_H
#define ACCOUNTRECORD_H

#include <string>

class AccountRecord
{
    std::string site_name;
    std::string login;
    std::string password;
public:
    AccountRecord();

    AccountRecord(std::string site_name, std::string login, std::string password);

    std::string get_site_name();

    std::string get_login();

    std::string get_password();

    void set_login(std::string &login);

    void set_password(std::string &password);
};

#endif // ACCOUNTRECORD_H

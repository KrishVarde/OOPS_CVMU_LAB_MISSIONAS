#include<iostream>
#include<string>
class Bank
{
private:
    char name[15];
    char acc_type[10];
    int acc_num;
    int balance;
    //extra not in the question
    std::string password[8];
public:
    void bal(void);
    bool login(std::string& in);


};

bool Bank::login(std:: string & in){
if (in == password) {
        std::cout << "Login successful!" << std::endl;
        return true;
    } else {
        std::cout << "Login failed. Incorrect password." << std::endl;
        return false;
    }
}

void Bank::bal(void){
    int check=0;

    std::cout<<""<<name;
}
int main(){
    return 0;
}
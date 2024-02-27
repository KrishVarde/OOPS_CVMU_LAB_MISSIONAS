#include<iostream>
#include<string>
class Bank{
    private:
    std::string name;
    std::string type;
    int bal=0;
    public:
    int info(void);
    int add_acc(void);
    int deposit(void);
    int widraw(void);
};

int Bank::deposit(){
    int fleg=0;
    std::cout<<std::endl<<"please enter the diposital amount: ";
    std::cin>>fleg;
    bal+=fleg;
    std::cout<<std::endl<<"Your current Bank belance is ";
    std::cout<<bal;
    return 1;
}


int Bank::add_acc(void){
    std::cout << std::endl<<"Please enter your name: ";
    std::getline(std::cin, name);  // Use std::getline to read the full name
    std::cout <<std::endl<< "Please add account type: ";
    std::getline(std::cin,type);
    std::cout <<std::endl<< "Account added successfully!" << std::endl;

}

int Bank::widraw(void){
    int fleg=0;
    std::cout<<std::endl<<"Please enter the Widrawal amount: ";
    std::cin>>fleg;
    if (fleg>bal)
    {
        std::cout<<"You don't have such balence!";
        exit(404);
    }
    
    bal-=fleg;
    std::cout<<std::endl<<"Your current Bank belance is ";
    std::cout<<bal;
    return 1;
}


int Bank::info(void){
    std::cout<<"customer name: ";
    std::cout<<name;
    std::cout<<std::endl<<"Bank Balence: ";
    std::cout<<bal;
    std::cout<<std::endl<<"Bank Account type: ";
    std::cout<<type;
    return 1;
}

int main(){
    Bank c1;
    c1.add_acc();
    c1.info();
    c1.deposit();
    c1.widraw();
    return 0;
}
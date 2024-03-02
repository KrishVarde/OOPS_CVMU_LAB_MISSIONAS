#include<iostream>

class Distance{
    private:

    double sum(){
        return n1+n2;
    }

    double inch(double x){
        double inch=x*39.37;
        return inch;
    }
    
    double feet(double y){
        double feet=3.37*y;
        return feet;
    }
    double n1=0,n2=0;

    public:

    double input(){
        std::cout<<"pleas enter your two distances in meters";
        std::cin>>n1>>n2;
    }

    void output(){
        std::string s1;
        std::cout<<"please enter the output unit (inches or feet)";
        std::cin>>s1;
        if (s1=="inches")
        {
            std::cout<<std::endl<<"your sum is: "<<inch(sum())<<"inches";
        }
        else if (s1=="feet")
        {
            std::cout<<std::endl<<"your sum is: "<<feet(sum())<<"feets";
        }
        else
        std::cout<<std::endl<<"please enter valid input ";









    }
};
int main(){
    Distance d1;
    d1.input();
    d1.output();
    return 0;
}
#include<iostream>

//we defined a variable named pi as a constant and assigned 3.14 in it.
const double pi=3.14F;

class Circle{
private:
    double red=0.0F;
    double a=0;
public:
double Area(void){
    std::cout<<"please enter the redius";
    std::cin>>red;
    a=pi*red*red;
    std::cout<<"the area is: "<<a;
    return a;
}

};

class Triangle{
private:
    double base=0,per=0;
    double a;
public:
    double Area(void){
    std::cout<<"please enter the base and perpendicular leghth respectively: ";
    std::cin>>base>>per;
    a=0.5*base*per;
    std::cout<<"the area is: "<<a;
    return a;
    }
};

class Square{
private:
    int base;
    int a;
public:
    int area(void){
    std::cout<<"please enter the base";
    std::cin>>base;
    a=base*base;
    std::cout<<"the area is: "<<a;
    return a;
    }
};

int main(){
    Circle c1;
    c1.Area();
    return 0;
}
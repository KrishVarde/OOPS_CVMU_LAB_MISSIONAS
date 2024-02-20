#include<iostream>
class number
{
private:
    //assume that a is the most greatest b is second greatest and c is the least valued one
    int a,b,c;
        void swap(int *x,int *y)
    {
        int temp;
        temp=*x;
        *x=*y;
        *y=temp;
    }
    int find_max(void)
    {
        //user have entered values in random order
        if (b>a)
        {
            swap(&a,&b);
        }
        if (c>a)
        {
            swap(&a,&c);
        }
        if (c>b)
        {
            swap(&c,&b);
        }
        return a;
    }
public:
    int give_max(void)
    {
        std::cout<<"please enter any three numbers: ";
        std::cin>>a>>b>>c;
        int max=find_max();
        std::cout<<"the max number is "<<max;
        return max;
    }
};

int main(){
    number z;
    z.give_max();
    return 0;
}
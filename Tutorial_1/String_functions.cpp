#include<iostream>
using namespace std;

//donzo!

class String_functions{
    //output
    char a[10];
    //second input
    char c[10];
    //primary input string
    char b[10];
public:
    void input(void){
        cout<<"please enter your string: ";
        cin>>b;
    }
    void strcpy(char *a){
        for (int i = 0; b[i] !='\0'; i++){
            a[i]=b[i];
        }
    }
    int strlen(){
        int size=0;
        for (int i =0; b[i]!='\0'; i++){
            size++;
        }
        return size;
    }
    int strcmp(char *a){
        int flag=1;
        for (int i = 0; b[i] !='\0'; i++){
            if (b[i]==a[i])
            {
                flag= 0;
            }
            else
            {
                flag=1;
                break;
            }
        }
        return flag;
    }
    void strcon(char *c){
        cout<<"please enter the string to conc.: ";
        cin>>c;
        int size=sizeof(b)/sizeof(b[0]);
        int j=0;
        for (int i = size,j=0; c[i]!='\0'; i++,j++){
            a[size]=c[i];
        }
        cout<<a;
    }
    void give_op(char *c){
        for (int i = 0; b[i] !='\0'; i++){
            c[i]=b[i];
        }
    }
    int search(char ch){
        int count=0;
        int len=strlen();
        for (int i =0; b[i]!='\0'; i++){
            if (b[i]==ch)
            {
                break;
            }
            count++;
        }
        if (count==len)
        {
            exit(-1);
        }
        
        return count+1;
    }
};

int main(){
    char a[20]={"KK"};
    String_functions abc;
    abc.input();
    cout<<abc.strlen();
    cout<<endl<<abc.strcmp(a);
    cout<<endl<<"the position is "<<abc.search('k');
    return 0;
}

#include<iostream>
#define PI 3.1416

int r=2;
void area();


class myclass
{

public:
    int a;
    void display(){
    std::cout<<"hellow world"<<std::endl;

    }
    
};

int main(){

myclass m;
m.a=3;
m.display();
area();
    std::cout<<"I am superman"<<std::endl;
    std::cout<<m.a<<std::endl;
    return 0;
    
}
void area(){
    float area;

    area=PI*r*r;
    std::cout<<area<<std::endl;
}
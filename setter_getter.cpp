#include<iostream>
#include"pi.h"
#include"cylender.h"

// class cylender{

 
// public:
//     // constructor

//     cylender()
//     {
//         base_radius=2.0;
//         hight=2.0;
//     }
    
//     cylender(double red_pram,double hight_pram){

//        base_radius= red_pram;
//         hight=hight_pram;

//     }

// // function and mathod
//     double volume(){

//         return Pi*base_radius*base_radius*hight;
//     }



// double get_base_radius(){
//     return base_radius;
// }


// double get_hight(){
//     return hight;
// }


// // member variable
// private:
//     double base_radius{1};
//     double hight{1};


// };


int main(){

cylender cylender1(10,10); // Object
std::cout<<"valume : "<<cylender1.volume()<<std::endl;



return 0;

}
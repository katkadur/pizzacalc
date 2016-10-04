#include <iostream>
#include <string>


int user() {
    float numbpizza;
    float numbpeople;
    float price;
    float slices;
    std::cout<<"How many pizzas?"<< std::endl;
    std::cin>>numbpizza;
    //std::cout<<numbpizza <<std::endl;
    std::cout<<"How many people?"<<std::endl;
    std::cin>>numbpeople;
    std::cout<<"How much does one pizza cost?"<<std::endl;
    std::cin>>price;
    std::cout<<"How many slices does each pizza have?"<<std::endl;
    std::cin>>slices;

    float priceforall = price * numbpizza;
    float costperperson = priceforall / numbpeople;
    float sliceperperson = (slices * numbpizza) / numbpeople;
    std::cout<<"Each person gets "<< sliceperperson <<" slices."<<std::endl;
    std::cout<<"The price per person is $"<<costperperson<<std::endl;

    //std::cout<<numbpeople<<sy howtd::endl;
    return 0;
}




int main(){
    user();
    std::cout << "hello idiot";
    return 0;
}

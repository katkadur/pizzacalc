#include <iostream>
#include <string>

int getuserinput() {
    int numbpeople;
    float price;
    int desiredslices;
    float slices;
    int usernumbpizza;

    std::cout<<"How many people are you feeding?"<<std::endl;
    std::cin>>numbpeople;
    while (numbpeople <= 0) {
        std::cout<<"I'm sorry, you need some friends. Really, how many peoples you got?"<<std::endl;
        std::cin>>numbpeople;
    }
    std::cout<<"Cool!! "<<numbpeople<< " people it is.\n"<<std::endl;

    std::cout<<"How many slices does each person want? (p.s. YOU CAN ONLY EAT WHOLE PIECES OF PIZZA)"<<std::endl;
    std::cin>>desiredslices;
    if (desiredslices < 3) {
        std::cout<<"Okay, "<<desiredslices<<" slices of pizza per person coming right up\n"<<std::endl;
    }
    else{
        std::cout<<"Wow!! You guys must be really hungry if everyone wants "<<desiredslices<<" slices of pizza!\n"<<std::endl;
    }

    std::cout<<"How many slices does each pizza have?"<<std::endl;
    std::cin>>slices;
    while (slices <= 0) {
        std::cout<<"I'm sorry, that sounds like a really invisible pizza. How many slices does it really have?"<<std::endl;
        std::cin>>slices;
    }

    std::cout<<"Cool beans! Each pizza has "<<slices<<" slices.\n"<<std::endl;

    std::cout<<"How much does each pizza cost?"<<std::endl;
    std::cin>>price;
    std::cout<<"Okie dokie! Your answer is coming right up...\n"<<std::endl;

    float totalslices = numbpeople * desiredslices;
    float numbpizza = totalslices / slices;
    usernumbpizza = numbpizza + 0.99;
    float priceforall = usernumbpizza * price;
    float costperperson = priceforall / numbpeople;
    int leftovers = usernumbpizza % desiredslices;

    std::cout<<"You will need to order "<<usernumbpizza<<" pizzas"<<std::endl;
    std::cout<<"There will be "<<leftovers<<" pieces of pizza leftover"<<std::endl;
    std::cout<<"The total price is $"<<priceforall<<std::endl;
    std::cout<<"The price per person is $"<<costperperson<<std::endl;

    return 0;
}




int main(){
    getuserinput();
    return 0;
}

#include <iostream>
#include <string>

int getUserInput() {
    int numPeople;
    float price;
    int desiredSlices;
    float numSlices;
    int userNumPizza;

    std::cout << "How many people are you feeding?" << std::endl;
    std::cin >> numPeople;
    while (numPeople <= 0) {
        std::cout << "I'm sorry, you need some friends. Really, how many peoples you got?" << std::endl;
        std::cin >> numPeople;
    }
    std::cout << "Cool!! " << numPeople << " people it is.\n" << std::endl;

    std::cout << "How many slices does each person want? (p.s. YOU CAN ONLY EAT WHOLE PIECES OF PIZZA)" << std::endl;
    std::cin >> desiredSlices;
    if (desiredSlices < 3) {
        std::cout << "Okay, " << desiredSlices << " slices of pizza per person coming right up\n" << std::endl;
    }
    else{
        std::cout << "Wow!! You guys must be really hungry if everyone wants " << desiredSlices << " slices of pizza!\n" << std::endl;
    }

    std::cout << "How many slices does each pizza have?" << std::endl;
    std::cin >> numSlices;
    while (numSlices <= 0) {
        std::cout << "I'm sorry, that sounds like a really invisible pizza. How many slices does it really have?" << std::endl;
        std::cin >> numSlices;
    }

    std::cout << "Cool beans! Each pizza has " << numSlices << " slices.\n" << std::endl;

    std::cout << "How much does each pizza cost?" << std::endl;
    std::cin >> price;
    std::cout << "Okie dokie! Your answer is coming right up...\n" << std::endl;

    float totalSlices = numPeople * desiredSlices;
    float numPizza = totalSlices / numSlices;
    userNumPizza = numPizza + 0.99;
    float priceForAll = userNumPizza * price;
    float costPerPerson = priceForAll / numPeople;
    int leftovers = numSlices * userNumPizza - totalSlices;

    std::cout << "You will need to order " << userNumPizza << " pizzas" << std::endl;
    std::cout << "There will be " << leftovers << " pieces of pizza leftover" << std::endl;
    std::cout << "The total price is $" << priceForAll << std::endl;
    std::cout << "The price per person is $" << costPerPerson << std::endl;

    return 0;

}




int main(){
    getUserInput();
    return 0;
}

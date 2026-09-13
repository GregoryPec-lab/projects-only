#include <iostream>


void clearScreen() {
    std::cout << "\033[H\033[2J" << std::flush;
}

int main(){
    while (true) {
        std::cout << "Clear";
        clearScreen();
    }
}

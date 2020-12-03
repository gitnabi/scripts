#include <cstdio>
#include <iostream>
#include <string>

int main(void) {
    std::string input;
    int symbol;
    while ((symbol = getchar()) && symbol != EOF) {
        input.push_back(static_cast<char>(symbol));
    }
    std::cout << input;
    return 0;
}

//main.cpp
//Created by Henryk Sosnowski 01/22/2021
//Converts temperature from F to C for HW0

#include <iostream>
#include <string>

//Converts degrees F to C
double cpp_ftoc(const char* str){
    double degF = std::stod(str);
    return (degF-32.0)/1.8;
}

int main() {
    char tempInput[] = "80.0";
    std::cout << cpp_ftoc(tempInput);
    return 0;
}

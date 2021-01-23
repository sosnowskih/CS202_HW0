//main.cpp
//Created by Henryk Sosnowski 01/22/2021
//Converts temperature from F to C for HW0

#include <iostream>
#include <string>

//Converts degrees F to C
double cpp_ftoc(const char* str){
    double degF = std::stod(str);
    return (degF - 32.0) / 1.8;
}

//Converts degrees C to F
double c_ctof(const char* str){
    double degC = std::strtod(str, NULL);
    return degC * 1.8 + 32.0;
}

int main() {
    char tempInput[] = "80.0";
    std::cout << c_ctof(tempInput);
    return 0;
}

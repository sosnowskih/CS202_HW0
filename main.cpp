//main.cpp
//Created by Henryk Sosnowski 01/22/2021
//Converts temperature from F to C for HW0

#include <iostream>
#include <string>
#include <vector>

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

int main(int argc, const char** argv) {
    std::vector<std::string> args;
    for(int index = 0; index < argc; index++){
        args.push_back(argv[index]);
    }

    if(argc >= 2 && args[1] == "--ftoc"){
        std::cout << cpp_ftoc(args[2].c_str()) << " C\n";
    }
    else if(argc >= 2 && args[1] == "--ctof"){
        std::cout << c_ctof(args[2].c_str()) << " F\n";
    }
    else{
        std::cout << "Input error. Enter --ftoc or --ctof.\n";
    }

    return 0;
}
#include <iostream>
#include <cmath>

int main() {
    double w;
    double h;
    double BMI;
    
    std::cout << "================= BMI CALCULATOR ===================\n";
    
    std::cout << "Enter your weight (in kilograms): ";
    std::cin >> w;

    std::cout << "Enter your height (in meters): ";
    std::cin >> h;

    BMI = w / pow(h, 2);

    std::cout << "BMI: " << BMI << " ";

    if(BMI < 18.5){
        std::cout << "- Underweight\n";
    }
    else if(BMI <= 24.9) {
        std::cout << "- Normal\n";
    }
    else if(BMI <= 29.9) {
        std::cout << "- Overweight\n";
    }
    else if(BMI <= 34.9) {
        std::cout << "- Obese\n";
    }
    else {
        std::cout << "- Extremely Obese\n";
    }
    
    std::cout << "====================================================\n";

    return 0;
}
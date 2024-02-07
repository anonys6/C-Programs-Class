#include <iostream>
#include <cmath>

int main() {
    double a;
    std::cout << "Enter the value of angle 'a' in degrees: ";
    std::cin >> a;

    // Convert angle from degrees to radians
    double radian_a = a * M_PI / 180.0;

    // Calculate sin^2(a) + cos^2(a)
    double result = pow(sin(radian_a), 2) + pow(cos(radian_a), 2);

    std::cout << "sin^2(a) + cos^2(a) = " << result << std::endl;

    return 0;
}

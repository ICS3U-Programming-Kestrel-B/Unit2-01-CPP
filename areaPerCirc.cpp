// Copyright (c) 2022 KestrelBryce All rights reserved
//
// Created by KestrelBryce
// Date: Sep. 21, 2022
// This program calculates the area and circumference
// of a circle with a radius of 30 mm

#include <iostream>
#include <cmath>

int main() {
    std::cout << "For a circle with a radius\n";
    std::cout << "of 30 mm:\n";
    std::cout << "\n";
    std::cout << "Area = " << M_PI * pow(30, 2) << " mm^2\n";
    std::cout << "Circumference = " << 2*M_PI*30 << " mm\n";
}

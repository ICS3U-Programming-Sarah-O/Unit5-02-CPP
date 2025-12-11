// Copyright (c) 2025 Sarah OUAMOU. All rights reserved.
// Created by: Sarah OUAMOU
// Date: 12 11 2025
// This program calculates the area of a triangle given its base and height.

#include <iostream>

void AreaOfTriangle() {
    float base;
    float height;
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;
    float area = 0.5f * base * height;
    std::cout << "The area of the triangle is: " << area << std::endl;
}

int main() {
    AreaOfTriangle();
    return 0;
}

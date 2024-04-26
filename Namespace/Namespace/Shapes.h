#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

namespace Geometry {
	namespace Shapes {
        class Shape {
        public:
            virtual ~Shape() {}

            virtual double area() const = 0;
            virtual void print() const {
                cout << area() << " : ";
            }
        };

        class Rectangle : public Shape {
        public:
            Rectangle(int side1, int side2) : side1(side1), side2(side2) {
                if (side1 <= 0 || side2 <= 0) {
                    throw invalid_argument("Side size should be greater than 0");
                }
            }
            double area() const override {
                return side1 * side2;
            }
        private:
            int side1;
            int side2;
        };

        class Circle : public Shape {
        public:
            Circle(int radius) : radius(radius) {
                if (radius <= 0) {
                    throw invalid_argument("Radius should be greater than 0");
                }
            }
            double area() const override {
                return M_PI * pow(radius, 2);
            }
        private:
            int radius;
        };

        class RightTriangle : public Shape {
        public:
            RightTriangle(int leg1, int leg2) : leg1(leg1), leg2(leg2) {
                if (leg1 <= 0 || leg2 <= 0) {
                    throw invalid_argument("Leg size should be greater than 0");
                }
            }
            double area() const override {
                return (leg1 * leg2) / 2.0;
            }
        private:
            int leg1;
            int leg2;
        };

        class Trapezoid : public Shape {
        public:
            Trapezoid(int side1, int side2, int height) : side1(side1), side2(side2), height(height) {
                if (side1 <= 0 || side2 <= 0 || height <= 0) {
                    throw invalid_argument("All dimensions should be greater than 0");
                }
            }
            double area() const override {
                return (side1 + side2) * height / 2.0;
            }
        private:
            int side1;
            int side2;
            int height;
        };

	}
}

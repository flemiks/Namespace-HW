#pragma once
#include <iostream>

namespace Geometry {
	namespace Point {
		class Point2D {
		public:
			Point2D(double x, double y) : x(x), y(y) {}
			double getX() const {
				return x;
			}
			double getY() const {
				return y;
			}
			void printPoint() {
				cout << "x: " << x << ", y: " << y << endl;
			}
		private:
			double x;
			double y;

		};
		class Point3D {
		public:
			Point3D(double x, double y, double z) : x(x), y(y), z(z) {}
			double getX() const {
				return x;
			}
			double getY() const {
				return y;
			}
			double getZ() const {
				return z;
			}
			void printPoint() {
				cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
			}
		private:
			double x;
			double y;
			double z;

		};
	}
}
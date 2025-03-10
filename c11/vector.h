#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>

namespace VECTOR{
    class Vector{
        public:
            enum Mode {RECT, POL};
        private:
            double x; 
            double y;
            double mag;
            double angle;
            Mode mode;
            void set_mag();
            void set_angle();
            void set_x();
            void set_y();
        public:
            Vector();
            Vector(double n1, double n2, Mode d=RECT);
            ~Vector();
            void reset(double n1, double n2, Mode d=RECT);
            double xval() const { return x; }
            double yval() const { return y; }
            double magval() const { return mag; }
            double angval() const { return angle; }
            void polar_mode();
            void rect_mode();
            Vector operator+(const Vector& b) const;
            Vector operator-(const Vector& b) const;
            Vector operator-() const;
            Vector operator*(double n) const;
            friend Vector operator*(double n, const Vector& a);
            friend std::ostream& operator<<(std::ostream& os, const Vector& v);
    };
};
#endif // VECTOR_H_
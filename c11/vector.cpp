#include <cmath>
#include "vector.h"
using namespace std;
namespace VECTOR {
    const  double Rad_to_deg = 45.0 / atan(1.0);
    void Vector::set_mag()
    {
        mag = sqrt(x * x + y * y);
    }
    void Vector::set_angle()
    {
        if (x == 0.0 && y == 0.0)
        {
            angle = 0.0;
        }
        else
        {
            angle = atan2(y, x) / Rad_to_deg;
        }
    }
    void Vector::set_x()
    {
        x = mag * cos(angle);
    }
    void Vector::set_y()
    {
        y = mag * sin(angle);
    }
    Vector::Vector()
    {
        x = y = mag = angle = 0.0;
        mode = RECT;
    }
    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_angle();
        }
        else if (form == POL)
        {
            mag = n1;
            angle = n2;
            set_x();
            set_y();
        } else
        {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = mag = angle = 0.0;
            mode = RECT;
        }
    }

    Vector::~Vector()
    {
        cout << "deleting" << endl;
    }

    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if (form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_angle();
        }
        else if (form == POL)
        {
            mag = n1;
            angle = n2;
            set_x();
            set_y();
        }
        else
        {
            cout << "Incorrect 3rd argument to Vector() -- ";
            cout << "vector set to 0\n";
            x = y = mag = angle = 0.0;
            mode = RECT;
        }
    }

    void Vector::polar_mode()
    {
        mode = POL;
    }
    void Vector::rect_mode()
    {
        mode = RECT;
    }

    Vector Vector::operator+(const Vector &b) const
    {
        return Vector(x + b.x, y + b.y);
    }
    Vector Vector::operator-(const Vector &b) const
    {
        return Vector(x - b.x, y - b.y);
    }
    Vector Vector::operator-() const
    {
        return Vector(-x, -y);
    }
    Vector Vector::operator*(double n) const
    {
        return Vector(x * n, y * n);
    }
    Vector operator*(double n, const Vector &a) // friend function
    {
        return a * n;
    }
    std::ostream &operator<<(std::ostream &os, const Vector &v) // friend function
    {
        if (v.mode == Vector::RECT)
        {
            os << "(" << v.x << ", " << v.y << ")";
        }
        else if (v.mode == Vector::POL)
        {
            os << "(" << v.mag << ", " << v.angle << ")";
        }
        else
        {
            os << "Vector object mode is invalid";
        }
        return os;
    }

}
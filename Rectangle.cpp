#include <iostream>
using namespace std;

// Khai bao lop Rectangle (hinh chu nhat)
class Rectangle {
private:
    double width;   // chieu rong
    double height;  // chieu cao

public:
    // Ham khoi tao (constructor)
    Rectangle(double w, double h) {
        width = w;      // gan chieu rong
        height = h;     // gan chieu cao
    }

    // Ham tinh dien tich
    double getArea() {
        return width * height;   // dien tich = rong * cao
    }

    // Ham in thong tin hinh chu nhat
    void printInfo() {
        cout << "Width: " << width 
             << ", Height: " << height
             << ", Area: " << getArea() << endl;
    }
};

int main() {
    // Tao 2 hinh chu nhat
    Rectangle r1(4, 5);
    Rectangle r2(6, 3);

    // In thong tin tung hinh
    cout << "Rectangle 1: ";
    r1.printInfo();

    cout << "Rectangle 2: ";
    r2.printInfo();

    // So sanh dien tich 2 hinh
    if (r1.getArea() > r2.getArea()) {
        cout << "Rectangle 1 lon hon." << endl;
    } 
    else if (r1.getArea() < r2.getArea()) {
        cout << "Rectangle 2 lon hon." << endl;
    } 
    else {
        cout << "Hai hinh co dien tich bang nhau." << endl;
    }

    return 0;
}


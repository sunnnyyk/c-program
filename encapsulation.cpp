#include <iostream>
using namespace std;

class rectangle {
private:
    double length;
    double width;

public:
    // Setter methods
    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    // Getter methods
    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    double calculateArea() const {
        return length * width;
    }
};

int main() {
    rectangle R;
    R.setLength(5.0);
    R.setWidth(3.0);
    cout << "Length is " << R.getLength() << endl;
    cout << "Width is: " << R.getWidth() << endl;
    cout << "Area of rectangle is: " << R.calculateArea() << endl;
    return 0;
}



#include <iostream>
#include <locale>
#include <Windows.h>
#include <string>

class Figure {
public:
    virtual void print() {
    }
};

class Triangle: public Figure {
private:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;

public:
    Triangle() {
        this->a = 10;
        this->b = 20;
        this->c = 30;
        this->A = 10;
        this->B = 20;
        this->C = 30;
    }

    void print() override {
        std::cout << "Треугольник: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " b = " << this->b << " c = " << this->c << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " B = " << this->B << " C = " << this->C << std::endl;
    }

};

class RightTriangle : public Figure {
private:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C = 90;

public:
    RightTriangle() {
        this->a = 10;
        this->b = 20;
        this->c = 30;
        this->A = 50;
        this->B = 60;
    }

    void print() override {
        std::cout << "Прямоугольный треугольник: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a  << " b = " << this->b << " c = " << this->c << std::endl;
        std::cout << "Углы: " << "A = " << this->A  << " B = " << this->B << " C = " << this->C << std::endl;
    }
};

class Isoscelestriangle : public Figure {
private:
    int a;
    int b;
    int A;
    int B;
    int C;

public:
    Isoscelestriangle() {
        this->a = 10;
        this->b = 20;
        this->A = 50;
        this->B = 60;
    }

    void print() override {
        std::cout << "Равнобедренный треугольник: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " b = " << this->b << " c = " << this->a << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " B = " << this->B << " C = " << this->A << std::endl;
    }
};

class EquilateralTriangle : public Figure {
private:
    int a;
    int A = 60;


public:
    EquilateralTriangle() {
        this->a = 30;
    }

    void print() override {
        std::cout << "Равносторонний треугольник: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " b = " << this->a << " c = " << this->a << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " B = " << this->A << " C = " << this->A << std::endl;
    }
};

class Quadrilateral : public Figure {
private:
    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;

public:
    Quadrilateral() {
        this->a = 10;
        this->b = 20;
        this->c = 30;
        this->d = 40;
        this->A = 50;
        this->B = 60;
        this->C = 70;
        this->D = 80;
    }

    void print() override {
        std::cout << "Четырёхугольник: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " b = " << this->b << " c = " << this->c << " d = " << this->d << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " B = " << this->B << " C = " << this->C << " D = " << this->D << std::endl;
    }

};

class Rectangles : public Figure {
private:
    int a;
    int b;
    int A = 90;


public:
    Rectangles() {
        this->a = 20;
        this->b = 20;
    }

    void print() override {
        std::cout << "Прямоугольник: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " b = " << this->b << " c = " << this->a << " d = " << this->b << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " B = " << this->A << " C = " << this->A << " D = " << this->A << std::endl;
    }

};

class Square : public Figure {
private:
    int a;
    int A;

public:
    Square() {
        this->a = 20;
        this->A = 90;
    }

    void print() override {
        std::cout << "Квадрат: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " " << "b = " << this->a << " " << "c = " << this->a << " " << "d = " << this->a << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " " << "B = " << this->A << " " << "C = " << this->A << "D = " << this->A << std::endl;
    }

};

class Parallelogram : public Figure {
private:
    int a;
    int b;
    int A;
    int B;

public:
    Parallelogram() {
        this->a = 20;
        this->b = 30;
        this->A = 30;
        this->B = 40;
    }

    void print() override {
        std::cout << "Параллелограмм: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " " << "b = " << this->b << " " << "c = " << this->a << " " << "d = " << this->b << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " " << "B = " << this->B << " " << "C = " << this->A << "D = " << this->B << std::endl;
    }

};

class Rhomb : public Figure {
private:
    int a;
    int A;
    int B;

public:
    Rhomb() {
        this->a = 30;
        this->A = 30;
        this->B = 40;
    }

    void print() override {
        std::cout << "Ромб: " << std::endl;
        std::cout << "Стороны: " << "a = " << this->a << " " << "b = " << this->a << " " << "c = " << this->a << " " << "d = " << this->a << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " " << "B = " << this->B << " " << "C = " << this->A << " " << "D = " << this->B << std::endl;
    }

};


void print_info(Figure* figure) {
    figure->print();
    std::cout << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle triangle;
    RightTriangle rightTriangle;
    Isoscelestriangle isoscelestriangle;
    EquilateralTriangle equilateralTriangle;
    Quadrilateral quadrilateral;
    Rectangles rectangle;
    Square square;
    Parallelogram parallelogram;
    Rhomb rhomb;

    
    print_info(&triangle);
    print_info(&rightTriangle);
    print_info(&isoscelestriangle);
    print_info(&equilateralTriangle);
    print_info(&quadrilateral);
    print_info(&rectangle);
    print_info(&square);
    print_info(&parallelogram);
    print_info(&rhomb);

}
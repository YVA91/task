

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
    Triangle(int aa, int ab, int ac, int aA, int aB, int aC) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->A = aA;
        this->B = aB;
        this->C = aC;
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
    RightTriangle(int aa, int ab, int ac, int aA, int aB) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->A = aA;
        this->B = aB;
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
    int c;
    int A;
    int B;
    int C;

public:
    Isoscelestriangle(int aa, int ab, int aA, int aB) {
        this->a = aa;
        this->b = ab;
        this->c = aa;
        this->A = aA;
        this->B = aB;
        this->C = aA;
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
    EquilateralTriangle(int aa) {
        this->a = aa;
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
    Quadrilateral(int aa, int ab, int ac, int ad, int aA, int aB, int aC, int aD) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->d = ad;
        this->A = aA;
        this->B = aB;
        this->C = aC;
        this->D = aD;
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
    Rectangles(int aa, int ab) {
        this->a = aa;
        this->b = ab;
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
    int A = 90;

public:
    Square(int aa) {
        this->a = aa;
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
    Parallelogram(int aa, int ab, int aA, int aC) {
        this->a = aa;
        this->b = ab;
        this->A = aA;
        this->B = aC;
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
    Rhomb(int aa, int aA, int aB) {
        this->a = aa;
        this->A = aA;
        this->B = aB;
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

    Triangle triangle (10, 20, 30, 50, 60, 70);
    RightTriangle rightTriangle(10, 20, 30, 50, 60);
    Isoscelestriangle isoscelestriangle (10, 20, 30, 40);
    EquilateralTriangle equilateralTriangle (10);
    Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangles rectangle (10, 20);
    Square square (10);
    Parallelogram parallelogram (10, 20, 30, 40);
    Rhomb rhomb (10, 20, 30);

    
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
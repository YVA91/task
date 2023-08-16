

#include <iostream>
#include <locale>
#include <Windows.h>
#include <string>

class Figure {
protected:
    int Nsides = 0;
    std::string boolean;
    std::string name = "Фигура";
public:
    virtual void print() {
        check();
        std::cout << name << ": " << std::endl;
        std::cout << boolean << std::endl;
        std::cout << "Количество сторон: " << Nsides << std::endl;
    }
    virtual void check() {
        if (this->Nsides == 0) {
            boolean = "Правильная";
        } else {
            boolean = "Неправильная";
        }
    }
};

class Triangle : public Figure {
protected:
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
        this->Nsides = 3;
        this->name = "Треугольник";
    }

    void print() override {
        Figure::print();
        std::cout << "Стороны: " << "a = " << this->a << " b = " << this->b << " c = " << this->c << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " B = " << this->B << " C = " << this->C << std::endl;
    }
    void check() override {
        if (this->Nsides == 3 && (this->A + this->B + this->C == 180)) {
            boolean = "Правильная";
        }
        else {
            boolean = "Неправильная";
        }
    }

};

class RightTriangle : public Triangle {

public:
    RightTriangle(int aa, int ab, int ac, int aA, int aB, int aC) : Triangle (aa, ab, ac, aA, aB, aC) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->A = aA;
        this->B = aB;
        this->C = aC;
        this->name = "Прямоугольный треугольник";
    }

    void print() override {
        Triangle::print();
    }
    void check() override {
        Triangle::check();
        if (boolean == "Правильная") {
            if (this->C == 90 || this->B == 90 || this->A == 90) {
                boolean = "Правильная";
            }
            else {
                boolean = "Неправильная";
            }
        }
        else {
            boolean = "Неправильная";
        }
    }
};

class Isoscelestriangle : public Triangle {

public:
    Isoscelestriangle(int aa, int ab, int ac, int aA, int aB, int aC) : Triangle(aa, ab, ac, aA, aB, aC) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->A = aA;
        this->B = aB;
        this->C = aC;
        this->Nsides = 3;
        this->name = "Равнобедренный треугольник";
    }

    void print() override {
        Triangle::print();
    }
    void check() override {
        Triangle::check();
        if (boolean == "Правильная") {
            if ((a == c) && (A == C)) {
                boolean = "Правильная";
            }
            else {
                boolean = "Неправильная";
            }
        }
        else {
            boolean = "Неправильная";
        }
    }

};

class EquilateralTriangle : public Triangle {

public:
    EquilateralTriangle(int aa, int ab, int ac, int aA, int aB, int aC) : Triangle(aa, ab, ac, aA, aB, aC) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->A = aA;
        this->B = aB;
        this->C = aC;
        this->Nsides = 3;
        this->name = "Равносторонний треугольник";
    }

    void print() override {
        Triangle::print();
    }
    void check() override {
        Triangle::check();
        if (boolean == "Правильная") {
            if ((a == c && a == b) && (A == 60 && B == 60 && C == 60)) {
                boolean = "Правильная";
            }
            else {
                boolean = "Неправильная";
            }
        }
        else {
            boolean = "Неправильная";
        }
    }
};

class Quadrilateral : public Figure {
protected:
    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;
public:
    Quadrilateral (int aa, int ab, int ac, int ad, int aA, int aB, int aC, int aD) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->d = ad;
        this->A = aA;
        this->B = aB;
        this->C = aC;
        this->D = aD;
        this->Nsides = 4;
        this->name = "Четырёхугольник";
    }

    void print() override {
        Figure::print();
        std::cout << "Стороны: " << "a = " << this->a << " b = " << this->b << " c = " << this->c << " d = " << this->d << std::endl;
        std::cout << "Углы: " << "A = " << this->A << " B = " << this->B << " C = " << this->C << " D = " << this->D << std::endl;
    }
    void check() override {
        if (A+B+C+D == 360) {
            boolean = "Правильная";
        }
        else {
            boolean = "Неправильная";
        }
    }
};

class Rectangles : public Quadrilateral {

public:
    Rectangles (int aa, int ab, int ac, int ad, int aA, int aB, int aC, int aD) : Quadrilateral(aa, ab, ac, ad, aA, aB, aC, aD) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->d = ad;
        this->A = aA;
        this->B = aB;
        this->C = aC;
        this->D = aD;
        this->name = "Прямоугольник";
    }

    void print() override {
        Quadrilateral::print();
    }
    void check() override {
        Quadrilateral::check();
        if (boolean == "Правильная") {
            if ((a == c && b == d) && (A == 90 && B == 90 && C == 90 && D == 90)) {
                boolean = "Правильная";
            }
            else {
                boolean = "Неправильная";
            }
        }
        else {
            boolean = "Неправильная";
        }
    }
};

class Square : public Quadrilateral {

public:
    Square(int aa, int ab, int ac, int ad, int aA, int aB, int aC, int aD) : Quadrilateral(aa, ab, ac, ad, aA, aB, aC, aD) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->d = ad;
        this->A = aA;
        this->B = aB;
        this->C = aC;
        this->D = aD;
        this->name = "Квадрат";
    }

    void print() override {
        Quadrilateral::print();
    }
    void check() override {
        Quadrilateral::check();
        if (boolean == "Правильная") {
            if ((a == c && a == b && a == d) && (A == 90 && B == 90 && C == 90 && D == 90)) {
                boolean = "Правильная";
            }
            else {
                boolean = "Неправильная";
            }
        }
        else {
            boolean = "Неправильная";
        }
    }
};

class Parallelogram : public Quadrilateral {

public:
    Parallelogram(int aa, int ab, int ac, int ad, int aA, int aB, int aC, int aD) : Quadrilateral(aa, ab, ac, ad, aA, aB, aC, aD) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->d = ad;
        this->A = aA;
        this->B = aB;
        this->C = aC;
        this->D = aD;
        this->name = "Параллелограмм";
    }

    void print() override {
        Quadrilateral::print();
    }
    void check() override {
        Quadrilateral::check();
        if (boolean == "Правильная") {
            if ((a == c && b == d) && (A == C && B == D)) {
                boolean = "Правильная";
            }
            else {
                boolean = "Неправильная";
            }
        }
        else {
            boolean = "Неправильная";
        }
    }

};

class Rhomb : public Quadrilateral {
 
public:
    Rhomb(int aa, int ab, int ac, int ad, int aA, int aB, int aC, int aD) : Quadrilateral(aa, ab, ac, ad, aA, aB, aC, aD) {
        this->a = aa;
        this->b = ab;
        this->c = ac;
        this->d = ad;
        this->A = aA;
        this->B = aB;
        this->C = aC;
        this->D = aD;
        this->name = "Ромб";
    }

    void print() override {
        Quadrilateral::print();
    }
    void check() override {
        Quadrilateral::check();
        if (boolean == "Правильная") {
            if ((a == c && a == b && a == d) && (A == C && B == D)) {
                boolean = "Правильная";
            }
            else {
                boolean = "Неправильная";
            }
        }
        else {
            boolean = "Неправильная";
        }
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
    
    Triangle triangle(10, 20, 30, 70, 40, 70);
    RightTriangle rightTriangle(10, 20, 30, 30, 60, 90);
    Isoscelestriangle isoscelestriangle(10, 20, 10, 60, 60, 60);
    EquilateralTriangle equilateralTriangle(10, 10, 10, 60, 60, 60);
    Quadrilateral quadrilateral(10, 20, 30, 70, 60, 70, 40, 40);
    Rectangles rectangle(10, 20, 30, 70, 60, 70, 40, 40);
    Square square(10, 20, 30, 70, 60, 70, 40, 40);
    Parallelogram parallelogram(10, 20, 30, 70, 60, 70, 40, 40);
    Rhomb rhomb(10, 10, 10, 10, 80, 100, 80, 100);
    Figure figure;

    print_info(&figure);
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
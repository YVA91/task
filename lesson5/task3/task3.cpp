

#include <iostream>
#include <locale>
#include <Windows.h>
#include <string>

class Figure {
protected:
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int Nsides = 0;
    std::string boolean;
    std::string name = "Фигура";
public:
    virtual void print() {
        check();
        std::cout << name << ": " << std::endl;
        std::cout << boolean << std::endl;
        std::cout << "Количество сторон: " << Nsides << std::endl;
        if (Nsides == 3) {
            std::cout << "Стороны: " << "a = " << this->a << " b = " << this->b << " c = " << this->c << std::endl;
            std::cout << "Углы: " << "A = " << this->A << " B = " << this->B << " C = " << this->C << std::endl;
        }
        else if (Nsides == 4) {
            std::cout << "Стороны: " << "a = " << this->a << " b = " << this->b << " c = " << this->c << " d = " << this->d << std::endl;
            std::cout << "Углы: " << "A = " << this->A << " B = " << this->B << " C = " << this->C << " D = " << this->D << std::endl;
        }
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

public:
    Triangle() {
        this->a = 10;
        this->b = 20;
        this->c = 30;
        this->A = 60;
        this->B = 60;
        this->C = 60;
        this->Nsides = 3;
        this->name = "Треугольник";
    }

    void print() override {
        Figure::print();
    }
    void check() override {
        if (this->Nsides == 3 && (this->A+ this->B+ this->C == 180)) {
            boolean = "Правильная";
        }
        else {
            boolean = "Неправильная";
        }
    }

};

class RightTriangle : public Figure {
  
public:
    RightTriangle() {
        this->a = 10;
        this->b = 20;
        this->c = 30;
        this->A = 50;
        this->B = 60;
        this->C = 90;
        this->Nsides = 3;
        this->name = "Прямоугольный треугольник";
    }

    void print() override {
        Figure::print();
    }
    void check() override {
        if (this->C == 90) {
            boolean = "Правильная";
        }
        else {
            boolean = "Неправильная";
        }
    }
};

class Isoscelestriangle : public Figure {

public:
    Isoscelestriangle() {
        this->a = 10;
        this->b = 20;
        this->c = 10;
        this->A = 50;
        this->B = 60;
        this->C = 50;
        this->Nsides = 3;
        this->name = "Равнобедренный треугольник";
    }

    void print() override {
        Figure::print();
    }
    void check() override {
        if ((a == c) && (A==C)) {
            boolean = "Правильная";
        }
        else {
            boolean = "Неправильная";
        }
    }
};

class EquilateralTriangle : public Figure {

public:
    EquilateralTriangle() {
        this->a = 10;
        this->b = 10;
        this->c = 10;
        this->A = 60;
        this->B = 60;
        this->C = 60;
        this->Nsides = 3;
        this->name = "Равносторонний треугольник";
    }

    void print() override {
        Figure::print();
    }
    void check() override {
        if ((a == c && a==b) && (A == 60 && B == 60 && C == 60)) {
            boolean = "Правильная";
        }
        else {
            boolean = "Неправильная";
        }
    }
};

class Quadrilateral : public Figure {

public:
    Quadrilateral() {
        this->a = 10;
        this->b = 20;
        this->c = 30;
        this->d = 40;
        this->A = 90;
        this->B = 90;
        this->C = 90;
        this->D = 90;
        this->Nsides = 4;
        this->name = "Четырёхугольник";
    }

    void print() override {
        Figure::print();
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

class Rectangles : public Figure {

public:
    Rectangles() {
        this->a = 10;
        this->b = 20;
        this->c = 10;
        this->d = 20;
        this->A = 90;
        this->B = 90;
        this->C = 90;
        this->D = 90;
        this->Nsides = 4;
        this->name = "Прямоугольник";
    }

    void print() override {
        Figure::print();
    }
    void check() override {
        if ((a==c && b==d) && (A==90 && B==90 && C==90 && D==90)) {
            boolean = "Правильная";
        }
        else {
            boolean = "Неправильная";
        }
    }
};

class Square : public Figure {

public:
    Square() {
        this->a = 10;
        this->b = 10;
        this->c = 10;
        this->d = 10;
        this->A = 90;
        this->B = 90;
        this->C = 90;
        this->D = 90;
        this->Nsides = 4;
        this->name = "Квадрат";
    }

    void print() override {
        Figure::print();
    }
    void check() override {
        if ((a == c && a == b && a == d) && (A == 90 && B == 90 && C == 90 && D == 90)) {
            boolean = "Правильная";
        }
        else {
            boolean = "Неправильная";
        }
    }
};

class Parallelogram : public Figure {

public:
    Parallelogram() {
        this->a = 10;
        this->b = 10;
        this->c = 10;
        this->d = 10;
        this->A = 90;
        this->B = 90;
        this->C = 90;
        this->D = 90;
        this->Nsides = 4;
        this->name = "Параллелограмм";
    }

    void print() override {
        Figure::print();
    }
    void check() override {
        if ((a == c && b == d) && (A == C && B == D)) {
            boolean = "Правильная";
        }
        else {
            boolean = "Неправильная";
        }
    }

};

class Rhomb : public Figure {
private:
 

public:
    Rhomb() {
        this->a = 10;
        this->b = 10;
        this->c = 10;
        this->d = 10;
        this->A = 90;
        this->B = 90;
        this->C = 90;
        this->D = 90;
        this->Nsides = 4;
        this->name = "Ромб";
    }

    void print() override {
        Figure::print();
    }
    void check() override {
        if ((a == c && a == b && a == d) && (A == C && B == D)) {
            boolean = "Правильная";
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
    
    Triangle triangle;
    RightTriangle rightTriangle;
    Isoscelestriangle isoscelestriangle;
    EquilateralTriangle equilateralTriangle;
    Quadrilateral quadrilateral;
    Rectangles rectangle;
    Square square;
    Parallelogram parallelogram;
    Rhomb rhomb;
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
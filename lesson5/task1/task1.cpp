
#include <iostream>
#include <locale>
#include <Windows.h>
#include <string>

class Figure {
    private:
        int sides_count;
        std::string name;
    protected:
        Figure(int asides_count, std::string aname) {
            this->sides_count = asides_count;
            this->name = aname;
        }
    public: 
        Figure() {
            this->sides_count = 0;
            this->name = "Фигура: ";
        };

        void get_name() {
            std::cout << this->name;
        };

        void get_sides_count() {
            std::cout << this->sides_count << std::endl;
        };


};


class Triangle : public Figure {
    public:
        Triangle() :Figure(3, "Треугольник: ") {

        }      
};

class Quadrangle : public Figure {
    public:
        Quadrangle() :Figure(4, "Четырёхугольник: ") {

        }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    Figure figure;
    figure.get_name();
    figure.get_sides_count();

    Triangle triangle;
    triangle.get_name();
    triangle.get_sides_count();

    Quadrangle quadrangle;
    quadrangle.get_name();
    quadrangle.get_sides_count();
   
}

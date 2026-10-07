#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    double m, L, D, T, a, ay;
    const double g = 9.81;

    cout << "Введите массу самолета m (кг): ";
    cin >> m;

    if (m <= 0) {
        cout << "Ошибка: масса должна быть больше нуля!" << endl;
        return 1;
    }

    cout << "Введите подъемную силу L (Н): ";
    cin >> L;
    cout << "Введите сопротивление D (Н): ";
    cin >> D;
    cout << "Введите тягу двигателя T (Н): ";
    cin >> T;

    a = (T - D) / m;
    ay = (L - m * g) / m;

    cout << "Ускорение по направлению движения (a) = " << a << " м/с^2" << endl;
    cout << "Вертикальное ускорение (ay) = " << ay << " м/с^2" << endl;

    return 0;
}
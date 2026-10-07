#include <iostream>
#include <locale.h>

using namespace std;

double calculateDrag(double rho, double V, double S, double CD) {
    return 0.5 * rho * V * V * S * CD;
}

int main() {
    setlocale(LC_ALL, "Russian");

    double S, V, rho, CD, D;

    cout << "Введите площадь крыла S: ";
    cin >> S;
    cout << "Введите скорость полета V: ";
    cin >> V;
    cout << "Введите плотность воздуха rho: ";
    cin >> rho;
    cout << "Введите коэффициент сопротивления CD: ";
    cin >> CD;

    D = calculateDrag(rho, V, S, CD);

    cout << "Аэродинамическое сопротивление D = " << D << " Н" << endl;

    return 0;
}
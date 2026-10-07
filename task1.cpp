#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double S, V, rho, CL, L;

    cout << "Введите площадь крыла S: ";
    cin >> S;
    cout << "Введите скорость полета V: ";
    cin >> V;
    cout << "Введите плотность воздуха rho: ";
    cin >> rho;
    cout << "Введите коэффициент подъемной силы CL: ";
    cin >> CL;

    L = 0.5 * rho * V * V * S * CL;

    cout << "Подъемная сила L = " << L << " Н" << endl;

    return 0;
}
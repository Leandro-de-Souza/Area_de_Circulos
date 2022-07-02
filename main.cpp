#include <iostream>
#include <iomanip>


using namespace std;

int main()
{

        double r, area, pi;

        cout << "Digite o valor do raio do circulo: ";
        cin >> r;

        pi = 3.14159;
        area = pi * r * r;

        cout << fixed << setprecision(3);
        cout << "AREA = " << area << endl;


    return 0;
}

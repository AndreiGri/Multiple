#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Изменение кодировки консоли:
    system("chcp 1251 > nul");

    int a = 0;
    int b = 0;

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;

    if (b == 0) {
        cout << "Деление на ноль не допустимо!" << endl;
    }
    else {
        if (a % b == 0) {
            cout << "Число " << a << " кратно числу " << b << "!" << endl;
        }
        else {
            cout << "Число " << a << " не делится на число " << b << " без остатка!" << endl;
        }
    }

    // Задержка консольного окна:
    system("pause > nul");
    return 0;
}
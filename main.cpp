#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    // Налаштування кодування консолі
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    // 1. Опис змінних заданих типів
    unsigned short a;
    int b;
    float c;
    double d;

    // 2. Опис покажчиків відповідних типів
    unsigned short* pa;
    int* pb;
    float* pc;
    double* pd;

    // 3. Нетипізований покажчик
    void* pv;

    // 4. Покажчики отримують адреси змінних
    pa = &a;
    pb = &b;
    pc = &c;
    pd = &d;

    // 5. Запис значень через розіменування покажчиків
    *pa = 87;
    *pb = 11239;
    *pc = -532.98987f;
    *pd = 3.9e-41;

    // Виведення значень
    cout << "===== ЗНАЧЕННЯ ЗМІННИХ =====" << endl;
    cout << "unsigned short: " << a << endl;
    cout << "int:            " << b << endl;
    cout << "float:          " << c << endl;
    cout << "double:         " << d << endl;

    cout << endl;

    // 6. Визначення розміру всіх змінних
    cout << "===== РОЗМІР ЗМІННИХ =====" << endl;
    cout << "unsigned short: " << sizeof(a) << " байт" << endl;
    cout << "int:            " << sizeof(b) << " байт" << endl;
    cout << "float:          " << sizeof(c) << " байт" << endl;
    cout << "double:         " << sizeof(d) << " байт" << endl;

    cout << endl;

    // Адреси змінних
    cout << "===== АДРЕСИ ЗМІННИХ =====" << endl;
    cout << "unsigned short: " << pa << endl;
    cout << "int:            " << pb << endl;
    cout << "float:          " << pc << endl;
    cout << "double:         " << pd << endl;

    cout << endl;

    // 7. Робота з нетипізованим покажчиком
    cout << "===== НЕТИПІЗОВАНИЙ ПОКАЖЧИК =====" << endl;

    pv = pa;
    cout << "void* -> unsigned short: " << pv << endl;

    pv = pb;
    cout << "void* -> int:            " << pv << endl;

    pv = pc;
    cout << "void* -> float:          " << pv << endl;

    pv = pd;
    cout << "void* -> double:         " << pv << endl;

    cout << endl;

    // 8. Опис посилання
    int& reference = b;

    cout << "===== ПОСИЛАННЯ =====" << endl;
    cout << "Значення через посилання: " << reference << endl;
    cout << "Адреса посилання:         " << &reference << endl;

    return 0;
}
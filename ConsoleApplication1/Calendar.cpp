#include <stdio.h>  
#include <iostream> 
#include <iomanip>
#include "Header.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int year, month;

    cout << "Введите год: ";
    cin >> year;
    cout << "Введите месяц (1-12): ";
    cin >> month;

    int daysInMonth = GetDaysInMonth(year, month);
    int startDay = GetStartDay(year, month);

    cout << "Дней в месяце: "  << daysInMonth << endl << endl;

    // Выводим заголовок календаря 
    cout << " Пн Вт Ср Чт Пт Сб Вс" << endl;

    // Выводим числа месяца 
    for (int day = 1; day <= daysInMonth; day++) {
        cout << " " << day;
        startDay++;
        if (startDay % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl; // Добавлено для корректного вывода
}


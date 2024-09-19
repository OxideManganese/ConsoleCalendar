#include "pch.h"
#include "CppUnitTest.h"
#include "..\\ConsoleApplication1\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalendarUnitTest
{
    TEST_CLASS(CalendarTests)
    {
    public:

        TEST_METHOD(TestDaysInMonth)
        {
            // Проверка функции подсчета дней в месяце
            Assert::AreEqual(29, GetDaysInMonth(2024, 2)); // високосный год
            Assert::AreEqual(28, GetDaysInMonth(2023, 2)); // обычный год
            Assert::AreEqual(30, GetDaysInMonth(2023, 4));
            Assert::AreEqual(31, GetDaysInMonth(2023, 1));
        }

        //TEST_METHOD(TestStartDay)
        //{
        //    // Проверка функции расчета дня недели
        //    Assert::AreEqual(7, GetStartDay(2023, 1)); // 1 января 2023 - воскресенье (7)
        //    Assert::AreEqual(2, GetStartDay(2024, 2)); // 1 февраля 2024 - вторник (2)
        //}
    };
}

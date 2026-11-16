#include "pch.h"
#include <Windows.h>
using namespace System;
int main(array<System::String ^> ^args)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Console::Write(L"Введіть варіант: ");
    int n = Int32::Parse(Console::ReadLine());
    double c = n, w = n + 5, l = n + 10;
    Console::WriteLine(L"Розмір кімнати {0} метри на {1} м", l, w);
    Console::WriteLine(L"Площа кімнати {0} м. кв.", l*w);
    Console::WriteLine(L"Ціна килимового покриття {0} грн", l * w * c);
    return 0;
}
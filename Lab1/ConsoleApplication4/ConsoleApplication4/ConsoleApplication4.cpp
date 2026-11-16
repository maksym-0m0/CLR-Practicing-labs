#include "pch.h"
#include <Windows.h>
using namespace System;

int main(array<System::String ^> ^args)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Console::Write(L"Введіть рядок: ");
    String^ strin(Console::ReadLine());
    String^ strresult = L"begin" + strin + L"end";
    Console::WriteLine(L"Довжина рядка '{0}' складає {1}", strresult, strresult->Length);
    return 0;
}
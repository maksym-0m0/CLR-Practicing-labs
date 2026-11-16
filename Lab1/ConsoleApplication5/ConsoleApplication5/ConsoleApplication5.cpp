#include "pch.h"
#include <Windows.h>
using namespace System;

int main(array<System::String ^> ^args)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Console::Write("Введіть рядок: ");
    String^ ryadok(Console::ReadLine());
    String^ reversedryadok(L"");
    for (int i = ryadok->Length-1; i >= 0; i--) reversedryadok += ryadok[i];
    Console::WriteLine(L"Цей рядок у зворотньому порядку: {0}", reversedryadok);
    return 0;
}
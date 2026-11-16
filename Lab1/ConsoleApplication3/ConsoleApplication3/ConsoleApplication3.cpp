#include "pch.h"
#include <Windows.h>
using namespace System;

int main(array<System::String ^> ^args)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Console::Write(L"¬вед≥ть перший р€док: ");
    String^ ryadok1(Console::ReadLine());
    Console::Write(L"¬вед≥ть другий р€док: ");
    String^ ryadok2(Console::ReadLine());
    int result(String::Compare(ryadok1, ryadok2));
    if (result < 0)
        Console::WriteLine(L"{0} менше н≥ж {1}.", ryadok1, ryadok2);
    else if (result > 0)
        Console::WriteLine(L"{0} б≥льше н≥ж {1}.", ryadok1, ryadok2);
    else
        Console::WriteLine(L"{0} екв≥валентно {1}.", ryadok1, ryadok2);
    return 0;
}
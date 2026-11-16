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
    Console::WriteLine(L"ќб'Їданан≥ р€дки: {0}", ryadok1 + ryadok2);
    return 0;
}

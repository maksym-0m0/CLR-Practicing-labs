#include "pch.h"
#include <Windows.h>
using namespace System;

int main(array<System::String ^> ^args)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Console::Write("¬вед≥ть перший р€док: ");
    String^ ryadok1(Console::ReadLine());
    Console::Write("¬вед≥ть другий р€док: ");
    String^ ryadok2(Console::ReadLine());
    String^ ryadok1nospaces(ryadok1->Trim(L' '));
    String^ ryadok2nospaces(ryadok2->Trim(L' '));
    if (ryadok1nospaces->Length > ryadok2nospaces->Length) Console::WriteLine(L"–€док '{0}' без проб≥л≥в довший за '{1}' без проб≥л≥в", ryadok1, ryadok2);
    else if (ryadok1nospaces->Length < ryadok2nospaces->Length) Console::WriteLine(L"–€док '{1}' без проб≥л≥в довший за '{0}' без проб≥л≥в", ryadok1, ryadok2);
    else Console::WriteLine(L"–€док '{0}' без проб≥л≥в однаковий за довжиною з '{1}' без проб≥л≥в", ryadok1, ryadok2);
    return 0;
}

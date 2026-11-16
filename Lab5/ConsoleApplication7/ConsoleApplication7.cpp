#include "pch.h"
#include <windows.h>

using namespace System;

int main(array<System::String^>^ args)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Random^ rnd = gcnew Random();
    int choice;
    do {
        Console::WriteLine(L"Оберіть завдання (1-2). 0 - Покинути програму");
        choice = Convert::ToInt32(Console::ReadLine());
        switch (choice) {
        case 1:
        {
            Console::WriteLine("Завдання 1:");
            int n;
            do {
                Console::Write(L"Введіть кількість коефіцієнтів поліному (n > 1): ");
                n = Convert::ToInt32(Console::ReadLine());
            } while (n <= 1);

            array<int>^ A = gcnew array<int>(n);

            // Заповнення масиву A випадковими коефіцієнтами від -10 до 10
            // Старший коефіцієнт не може бути рівним 0
            A[0] = rnd->Next(1, 11) * (rnd->Next(2) == 0 ? 1 : -1);
            for (int i = 1; i < n; i++)
            {
                A[i] = rnd->Next(-10, 11);
            }

            Console::WriteLine(L"\nЗгенерований масив коефіцієнтів поліному A:");
            for (int i = 0; i < A->Length; i++)
            {
                Console::Write(L"{0,5}", A[i]);
            }
            Console::WriteLine();

            int m = A->Length - 1;
            array<int>^ B = gcnew array<int>(m);

            // Коефіцієнти першої похідної
            for (int i = 0; i < m; i++)
            {
                B[i] = A[i] * (m - i);
            }

            Console::WriteLine(L"Масив коефіцієнтів першої похідної B:");
            for (int i = 0; i < B->Length; i++)
            {
                Console::Write(L"{0,5}", B[i]);
            }
            Console::WriteLine(L"\n\n" + gcnew String('=', 50) + L"\n");
            break;
        }
        case 2:
        {
            Console::WriteLine(L"Завдання 2:");

            int N, M;
            do {
                Console::Write(L"Введіть кількість рядків матриці N (N > 0): ");
                N = Convert::ToInt32(Console::ReadLine());
            } while (N <= 0);

            do {
                Console::Write(L"Введіть кількість стовпців матриці M (M > 0): ");
                M = Convert::ToInt32(Console::ReadLine());
            } while (M <= 0);

            array<int, 2>^ matrix = gcnew array<int, 2>(N, M);

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    matrix[i, j] = rnd->Next(1, 21); // Заповнення від 1 до 20
                }
            }

            Console::WriteLine(L"\nПочаткова матриця {0}x{1}:", N, M);

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    Console::Write(L"{0,5}", matrix[i, j]);
                }
                Console::WriteLine();
            }

            // Процес віднімання
            for (int i = N - 1; i >= 0; i--)
            {
                for (int j = 0; j < M; j++)
                {
                    matrix[i, j] -= matrix[0, j];
                }
            }

            Console::WriteLine(L"\nМатриця після віднімання першого рядка:");

            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    Console::Write(L"{0,5}", matrix[i, j]);
                }
                Console::WriteLine();
            }

            break;
        }
        case 0: break;
        default: {
            Console::WriteLine(L"Введіть допустиме значення"); 
            break;
        }
        }
    } while (choice != 0);
    if (choice == 0) {
        Console::WriteLine("Вихід...");
    }
    return 0;
}
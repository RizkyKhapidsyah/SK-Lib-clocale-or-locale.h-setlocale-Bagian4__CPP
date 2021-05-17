#pragma warning(disable:4996)

/*  Source by CPPReference
    Modified For Learn by Rizky Khapidsyah
    I.D.E : Visual Studio 2019 
*/

#include <cstdio>
#include <clocale>
#include <ctime>
#include <cwchar>
#include <conio.h>

int main() {
    // the C locale will be UTF-8 enabled English;
    // decimal dot will be German
    // date and time formatting will be Japanese
    std::setlocale(LC_ALL, "en_US.UTF-8");
    std::setlocale(LC_NUMERIC, "de_DE.UTF-8");
    std::setlocale(LC_TIME, "ja_JP.UTF-8");

    wchar_t str[100];
    std::time_t t = std::time(NULL);
    std::wcsftime(str, 100, L"%A %c", std::localtime(&t));
    std::wprintf(L"Number: %.2f\nDate: %Ls\n", 3.14, str);

    _getch();
    return 0;
}
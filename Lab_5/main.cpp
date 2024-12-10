#include "ConnectWindow.h"
#include "MainWindow.h"


using namespace System;
using namespace Lab5;

[STAThreadAttribute]
int main(array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    // Создание и запуск формы
    Lab5::ConnectWindow^ connectWindow = gcnew Lab5::ConnectWindow();
    Application::Run(connectWindow);
    return 0;
}
#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace std;
using namespace System;
using namespace System::IO;


int main() {
    // Rašymas į failą
    String^ filePath = "tekstas.txt";
    String^ textToWrite = "Hello, world!";
    File::WriteAllText(filePath, textToWrite);

    // Skaitymas iš failo
    String^ readText = File::ReadAllText(filePath);
    Console::WriteLine("Skaitytas tekstas: " + readText);

    return 0;
}
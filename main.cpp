#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[NELEMENTS]; //hibás változónév NELEMENTS nincs definiálva
    std::cout << '1-100 ertekek duplazasa' //; hiány és '' helyett "" mivel ez string
        for (int i = 0;) //Hiányos forciklus
        {
            b[i] = i * 2;
        }
    for (int i = 0; i; i++) //Hiányos forciklus
    {
        std::cout << "Ertek:" // nincs ;
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //atlagot nem előnyös int ként definiálni és nincs daklaráció: atlag=0
    for (int i = 0; i < N_ELEMENTS, i++) //for ciklus syntaxis hibás
    {
        atlag += b[i] // nincs ;
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
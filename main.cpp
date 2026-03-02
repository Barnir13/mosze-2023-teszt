#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // NELEMENTS helyett N_ELEMENTS

    std::cout << '1-100 ertekek duplazasa' // karakterliterál helyett string kell (" ") és hiányzik pontosvessző

    for (int i = 0;) //for ciklus szintaxisa rossz, hiányzik a feltétel és inkrementálás
    {
        b[i] = i * 2;
    }

    for (int i = 0; i; i++) //ciklus feltétele rossz, i; nem értelmezhető
    {
        std::cout << "Ertek:" //hiányzik az érték kiírása, a pontosvessző és endl
    }    

    std::cout << "Atlag szamitasa: " << std::endl;

    int atlag; //nincs inicializálva, így random értékkel indul
    for (int i = 0; i < N_ELEMENTS, i++) //vessző helyett pontosvessző kell a ciklusban
    {
        atlag += b[i] //hiányzik a pontosvessző
    }

    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    return 0; // nem szabad elfelejteni delete[] b a memória felszabadításához
}
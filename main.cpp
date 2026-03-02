#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];

    std::cout << "1-100 ertekek duplazasa" << std::endl;

    // Értékek feltöltése duplázva
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        b[i] = i * 2;
    }

    // Értékek kiíratása
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        std::cout << "Ertek[" << i << "]: " << b[i] << std::endl;
    }

    // Átlag számítása
    int atlag = 0;
    for (int i = 0; i < N_ELEMENTS; i++)
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;

    std::cout << "Atlag: " << atlag << std::endl;

    delete[] b; // memória felszabadítása

    std::cout << "Ez az uj branchbol jon!" << std::endl;

    return 0;
}
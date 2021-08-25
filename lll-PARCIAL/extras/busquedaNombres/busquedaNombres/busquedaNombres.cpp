#pragma warning(disable:4996)
#include <algorithm>
#include <iostream>
#include <string>
#include <ctype.h>
#include <cstring>
#include<conio.h>
#include <vector>
#include <stdio.h>
#include <stdlib.h>



using namespace std;
void busqueda();


int main()
{
    busqueda();
}

void busqueda()
{
    vector<string> arr = { "Sanchez", "Waterloo", "McDonald", "Bartolome",
                        "Jorba", "Clara", "David", "Robinson",
                        "Francisco", "Westfalia" };


    for (const auto& item : arr) {
        cout << item << "; ";
    }
    cout << endl;

    sort(arr.begin(), arr.end());

    for (const auto& item : arr) {
        cout << item << "; ";
    }
    cout << endl;
}
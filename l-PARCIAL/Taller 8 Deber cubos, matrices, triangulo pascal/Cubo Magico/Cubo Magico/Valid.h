/* Fecha creación : 31 / 05 / 2021
Fecha modificación : 24 / 06 / 2021 */
#pragma once
#include <chrono>
#include <random>
#include <iostream>
#include <exception>
#include <limits>
#include <ios>
namespace Valid
{
    class Validacion
    {
    public:
        static bool validarLetra(const std::string&);
        static bool validarNumeros(int&);
        static bool validarNumeros(double&);
        static bool validarNumeros(float&);
        static bool validarDigitos(int number);
        template <typename T>
        static T validation_numbers(std::string);
    };

    bool Validacion::validarLetra(const std::string& str)
    {
        for (size_t i = 0; i < str.size(); i++)
        {
            char c = str[i];
            if (!isalpha(c) && !isspace(c))
            {
                std::cout << "DATO MAL INGRESADO" << std::endl;
                return true;
            }
        }
        return false;
    }

    bool Validacion::validarNumeros(int& number)
    {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "DATO MAL INGRESADO!" << std::endl;
            return true;
        }
        return false;
    }

    bool Validacion::validarNumeros(double& number)
    {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "DATO MAL INGRESADO!" << std::endl;
            return true;
        }
        return false;
    }

    bool Validacion::validarNumeros(float& number)
    {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "DATO MAL INGRESADO" << std::endl;
            return true;
        }
        return false;
    }

    bool Validacion::validarDigitos(int number)
    {
        int x = int(std::log10(number) + 1);
        if (x == 3)
        {
            return false;
        }
        return true;
    }

    template <typename T>
    T Validacion::validation_numbers(std::string str)
    {
        char error = 'a';
        T number;
        int x = 1;
        while (x == 1)
        {
            try
            {
                std::cout << str << " : ";
                std::cin >> number;
                if (!std::cin)
                {
                    throw error = -1;
                }
                x = 0;
            }
            catch (...)
            {
                std::cin.clear(); // Clear error flags
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "DATO MAL INGRESADO" << std::endl;
                x = 1;
            }
        }
        return number;
    }

    class Generar
    {
    public:
        static int random(const int, const int);
    };

    int Generar::random(const int min, const int max)
    {
        std::random_device rd;
        std::uniform_int_distribution<> dist(min, max);
        static std::mt19937_64 random_generator(
            std::chrono::system_clock::now().time_since_epoch().count());

        return dist(random_generator);
    }

    class MathaMatrix
    {
    public:
    };
}
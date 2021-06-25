/*Fecha creación: 03/05/2021
Fecha modificación: 24/06/2021 */
#pragma once
#include <chrono>
#include <random>
#include <iostream>
#include <exception>
#include <limits>
#include <ios>
namespace Utils
{
    class Validation
    {
    public:
        static bool validarLetras(const std::string&);
        static bool validarNumeros(int&);
        static bool validarNumeros(double&);
        static bool validarNumeros(float&);
        static bool validarDigitos(int number);
        template <typename T>
        static T validation_numbers(std::string);
    };

    bool Validation::validarLetras(const std::string& str)
    {
        for (size_t i = 0; i < str.size(); i++)
        {
            char c = str[i];
            if (!isalpha(c) && !isspace(c))
            {
                std::cout << "INGRESE NUEVAMENTE: " << std::endl;
                return true;
            }
        }
        return false;
    }

    bool Validation::validarNumeros(int& number)
    {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "INGRESE NUEVAMENTE: " << std::endl;
            return true;
        }
        return false;
    }

    bool Validation::validarNumeros(double& number)
    {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "INGRESE NUEVAMENTE: " << std::endl;
            return true;
        }
        return false;
    }

    bool Validation::validarNumeros(float& number)
    {
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            std::cout << "INGRESE NUEVAMENTE: " << std::endl;
            return true;
        }
        return false;
    }

    bool Validation::validarDigitos(int number)
    {
        int size = int(std::log10(number) + 1);
        if (size == 3)
        {
            return false;
        }
        return true;
    }

    template <typename T>
    T Validation::validation_numbers(std::string str)
    {
        char error = 'a';
        T number;
        int again = 1;
        while (again == 1)
        {
            try
            {
                std::cout << str << " : ";
                std::cin >> number;
                if (!std::cin)
                {
                    throw error = -1;
                }
                again = 0;
            }
            catch (...)
            {
                std::cin.clear(); // Clear error flags
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "INGRESE NUEVAMENTE: " << std::endl;
                again = 1;
            }
        }
        return number;
    }

    class Generator
    {
    public:
        static int random_int(const int, const int);
    };

    int Generator::random_int(const int min, const int max)
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

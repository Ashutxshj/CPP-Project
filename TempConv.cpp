//? Write a program that converts temperature between Celsius, Fahrenheit, and Kelvin
#include <iostream>
using namespace std;
float KeltoCel(float temp)
{
    return temp - 273.15;
}
float CeltoKel(float temp)
{
    return temp + 273.15;
}
float FahtoCel(float temp)
{
    return (temp - 32) * (5.0 / 9.0);
}
float CeltoFah(float temp)
{
    return (temp * 9.0 / 5.0) + 32;
}
float FahtoKel(float temp) //* CTRL + H to replace
{
    return (temp - 32) * (5.0 / 9.0) + 273.15;
}
float KeltoFah(float temp)
{
    return (temp - 273.15) * (9.0 / 5.0) + 32;
}
main()
{
    int input;
    float tem;
    cout << "-------------------------------Welcome to Ashu's Temp Conversion----------------------------------------------" << endl;
    cout << "Give temperature: ";
    cin >> tem;
    cout << "What operation to perform?" << endl;
    cout << "1.Celsius to Kelvin\n2.Kelvin to Celcius\n3.Fahrenheit to Celcius\n4.Celsius to Fahrenheit\n5.0.Fahrenheit to Kelvin\n6.Kelvin to Fahrenheit\n";
    cin >> input;
    switch (input)
    {
    case 1:
        cout << CeltoKel(tem) << endl;
        break;

    case 2:
        cout << KeltoCel(tem) << endl;
        break;

    case 3:
        cout << FahtoCel(tem) << endl;
        break;

    case 4:
        cout << CeltoFah(tem) << endl;
        break;

    case 5:
        cout << FahtoKel(tem) << endl;
        break;

    case 6:
        cout << KeltoFah(tem) << endl;
        break;

    default:
        cout << "Invalid Input" << endl;
        break;
    }
    cout << "----------------------------------------------------THE END---------------------------------------------------";
}
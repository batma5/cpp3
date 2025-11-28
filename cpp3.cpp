#include <iostream>
#include <array>

struct Leg                  // Первый пользовательский тип
{
    int length;
};

struct Arm                  // Второй пользовательский тип
{
    int power;
};

struct Person               // Третий пользовательский тип
{
    std::array<Leg, 2> legs; // массив из 2-х объектов Leg
    Arm arms[2];             // массив из 2-х объектов Arm
};

int LegPlusPlus(Leg* arr)
{
    arr->length *= 2;
    return arr.length;
}

int main()
{
    Person person;

    
    // Заполнение данных для демонстрации
    person.legs[0].length = 100;
    person.legs[1].length = 110;

    
    
    Leg* arr1 = &person.legs[0];
    Leg* arr2 = &person.legs[1];
    
    
    // Метод который принимает ссылку ногу и увеличивает её длину
    std::cout << LegPlusPlus(person.legs[1]) << std::endl;
    
    std::cout << person.legs[1].length << std::endl;

    std::cout << arr1 << std::endl;
    std::cout << arr2 << std::endl;
    
    // int* pa = a.data();
    // int& b = *pa;

    // std::array<int, 2> arr { 1, 2 };
    // int& arr1 = *(p.data() + 1)
}

// Тут есть 3 пользовательских типа: Leg, Arm, Person
// И 7 объектов: person, person.legs[0], person.legs[1], person.arms, person.arms[0], person.arms[1]

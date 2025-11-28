#include <string.h>
#include <iostream>

struct TwoInts
{
    int a;                                                  // Создаём переменную a
    int b;                                                  // Создаём переменную b
};


struct StructWithArray
{
    int arr[4];                                             // Создаём массив из 4-х целых чисел
    int* someNumber;                                        // Создаём указатель на целое число
};

int main()
{
    // Создаём объекта структуры TwoInts и инициализация нулями
    TwoInts i2 = { };
    i2.a = 5;                                               // Присвваем значения переменне a
    i2.b = 7;                                               // Присвваем значения переменне b

    // Выводим значения структур переменных на экран
    std::cout << i2.a << std::endl; // 5
    std::cout << i2.b << std::endl; // 7

    // Создаём объекты структур StructWithArray и инициализация нулями
    StructWithArray s = { };
    s.arr[0] = 10;                                          // Присваиваем значения первому элементу массива

    StructWithArray s1 = { };
    s1.arr[0] = 15;                                         // Присваиваем значения первому элементу массива

    // Созданём указатель на структуру и измененяем через него ->
    StructWithArray* sPointer = &s;
    sPointer->arr[0] = 20;                                  // Меняем arr[0] через указатель

    // Проверяем изменения
    std::cout << s.arr[0] << std::endl;     // Ответ: 20
    s.arr[0] = 25;                                          // Меняем напрямую через объект
    std::cout << s.arr[0] << std::endl;     // Ответ: 25
    sPointer->arr[0] = 30;                                  // Меняем через указатель снова
    std::cout << s.arr[0] << std::endl;     // Ответ: 30

    // Перенаправляем указатель на другой объект
    sPointer = &s1;
    sPointer->arr[0] = 35;                                  // Меняем arr[0] второго объекта
    std::cout << s.arr[0] << std::endl;                     // 30 - первый объект не изменился
    std::cout << s1.arr[0] << std::endl;                    // 35 - второй объект изменился

    // Создание массива структур
    StructWithArray structArray[2] = { };
    structArray[0].arr[3] = 77;                             // Присваиваем значение последнему элементу массива первого объекта
    structArray[1].someNumber = &structArray[0].arr[3];     // Указатель второго объекта указывает на arr[3] первого объекта

    // Создание указателя и демонстрация работы с ним
    sPointer = &s;
    int* pointer = &sPointer->arr[3];                       // pointer указывает на arr[3] объекта s
    s.arr[3] = 72;                                          // Меняем arr[3] через объект
    std::cout << *pointer;                                  // 72 — pointer показывает изменения

    // Очистка памяти структуры (зануляем все поля)
    StructWithArray memory;
    memset(&memory, 0, sizeof(StructWithArray));

    return 0;
}

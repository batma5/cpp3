#include <iostream>

int main()
{
    int i;                           // 1. Объявить i типа int 
    i = 69;                          // 2. инициализировать на 69
    int number = 72;                 // 3. Определить переменную number типа int, дать значение 72

    i = i + number;                  // 4. Перезаписать значение i на 69 + 72 (i + number)

    int arr[3] = {0, 0, 0};          // 5. Определить группу переменных (массив) из 3 элементов (инициализированных на 0)

    int* iPointer = &i;              // 6. Создать указатель на i (iPointer)

    number = *iPointer;              // 7. Считать данные по адресу из указателя в переменную number

    *iPointer = 15;                  // 8. Вписать в i через указатель значение 15

    iPointer = &arr[0];              // 9. Сменить адрес в iPointer на адрес первого элемента массива

    iPointer = iPointer + 2;         // 10. Переместиться на третий элемент массива, используя pointer arithmetic

    arr[0] = 5;                      // 11. Вписать в первый элемент массива напрямую, значение 5
    *iPointer = 6;                   //     Вписать в третий элемент массива через iPointer, значение 6

    // результаты
    std::cout << "i = " << i << std::endl;
    std::cout << "number = " << number << std::endl;
    std::cout << "arr[0] = " << arr[0] << std::endl;
    std::cout << "arr[1] = " << arr[1] << std::endl;
    std::cout << "arr[2] = " << arr[2] << std::endl;
}

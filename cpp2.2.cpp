#include <iostream>
#include <stdio.h>

struct Prices {
    int drink;
    int first;
    int second;
};

struct Choices {
    int drink;
    int first;
    int second;
};

int customerTotal(Prices prices, Choices choices)
{
    int total = 0;
    total += choices.drink  * prices.drink;
    total += choices.first  * prices.first;
    total += choices.second * prices.second;
    return total;
}

int main()
{
    Prices prices;
    prices.drink  = 10;
    prices.first  = 20;
    prices.second = 30;

    Choices client1;
    client1.drink  = 100;
    client1.first  = 0;
    client1.second = 250;

    Choices client2;
    client2.drink  = 0;
    client2.first  = 300;
    client2.second = 0;

    int total1 = customerTotal(prices, client1);
    int total2 = customerTotal(prices, client2);

    printf("Стоимость заказа клиента 1: %i\n", total1);
    printf("Стоимость заказа клиента 2: %i\n", total2);

    return 0;
}

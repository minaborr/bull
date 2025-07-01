/*
Система управления Атракциона "Родео на быке"
*/

#include <stdio.h>

int main()
{
    int speed; // базовая скорость 
    float timeUser; // время сколько продержался игрок
    long statistics; // общая статистика времени для ТО
    
    printf("задайте скорость\n");
    scanf("%2u", &speed);
    
    if(speed <= 5)
    {
        printf("установлен режим 1");
    }
    else
    {
        printf("установлен режим 2");
    }
    
    return 0;
}

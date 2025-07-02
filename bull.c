/**
* Система управления Аттракциона "Родео на быке"
*/
#include <stdio.h>

// в зависимости от скорости выбираем радиус поворота нижней платформы
int radbottom (int s){
    if (s <= 5)
        printf("установлен режим 1\n");
    else
        printf("установлен режим 2\n");
}

int main()
{
    int speed; // базовая скорость 
    float timeUser; // время сколько продержался игрок
    long statistics; // общая статистика времени для ТО
    
    printf("задайте скорость\n");
    scanf("%2u", &speed);
    radbottom(speed);
    
    return 0;
}

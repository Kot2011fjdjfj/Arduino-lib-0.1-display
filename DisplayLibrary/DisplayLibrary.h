#ifndef DisplayLibrary_h
#define DisplayLibrary_h

#include <Arduino.h>

class Display {
public:
    Display(); // Конструктор
    void begin(); // Инициализация дисплея
    void setPixel(int x, int y, bool state); // Установить пиксель в заданном состоянии
    void clearDisplay(); // Очистить дисплей
    void updateDisplay(); // Обновить отображение
private:
    byte displayBuffer[128][8]; // Буфер для хранения данных дисплея
};

#endif
#include <Arduino.h>
#include <DisplayLibrary.h>

Display display; // Создаем экземпляр класса Display

void setup() {
  display.begin(); // Инициализируем дисплей
}

void loop() {
  display.clearDisplay(); // Очищаем дисплей

  // Устанавливаем пиксели на дисплее
  display.setPixel(0, 0, true);
  display.setPixel(10, 20, true);
  display.setPixel(30, 40, true);

  display.updateDisplay(); // Обновляем отображение на дисплее

  delay(1000); // Задержка 1 секунда
}

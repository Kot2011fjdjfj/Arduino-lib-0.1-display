#include "DisplayLibrary.h"

Display display; // Создаем объект для работы с дисплеем

void setup() {
  display.begin(); // Инициализируем дисплей
  display.clearDisplay(); // Очищаем дисплей
  
  // Устанавливаем пиксели для каждой буквы слова "HELLO"
  display.setPixel(0, 0, true);
  display.setPixel(0, 1, true);
  display.setPixel(0, 2, true);
  display.setPixel(0, 3, true);
  display.setPixel(0, 4, true);
  display.setPixel(2, 0, true);
  display.setPixel(2, 2, true);
  display.setPixel(2, 4, true);
  display.setPixel(4, 0, true);
  display.setPixel(4, 2, true);
  display.setPixel(4, 3, true);
  display.setPixel(4, 4, true);
  display.setPixel(6, 0, true);
  display.setPixel(6, 1, true);
  display.setPixel(6, 2, true);
  display.setPixel(6, 3, true);
  display.setPixel(6, 4, true);
  display.setPixel(8, 0, true);
  display.setPixel(8, 2, true);
  display.setPixel(8, 4, true);
  display.setPixel(10, 0, true);
  display.setPixel(10, 2, true);
  display.setPixel(10, 4, true);
  
  // Устанавливаем пиксели для каждой буквы слова "WORLD"
  display.setPixel(20, 0, true);
  display.setPixel(20, 1, true);
  display.setPixel(20, 2, true);
  display.setPixel(20, 3, true);
  display.setPixel(20, 4, true);
  display.setPixel(22, 0, true);
  display.setPixel(24, 1, true);
  display.setPixel(26, 2, true);
  display.setPixel(24, 3, true);
  display.setPixel(22, 4, true);
  display.setPixel(28, 0, true);
  display.setPixel(28, 1, true);
  display.setPixel(28, 2, true);
  display.setPixel(28, 3, true);
  display.setPixel(28, 4, true);
  display.setPixel(30, 0, true);
  display.setPixel(32, 1, true);
  display.setPixel(34, 2, true);
  display.setPixel(32, 3, true);
  display.setPixel(30, 4, true);
  display.setPixel(36, 0, true);
  display.setPixel(36, 1, true);
  display.setPixel(36, 2, true);
  display.setPixel(36, 3, true);
  display.setPixel(36, 4, true);
  
  // Обновляем отображение
  display.updateDisplay();
}

void loop() {
  // Ваш код здесь
}

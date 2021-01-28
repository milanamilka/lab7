/**
 * @mainpage
 * # Загальне завдання
 * 1. **Визначити**, Знайти НОД двух заданих чисел
 * @author Nikolaenko M.
 * @date 17-dec-2020
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи структури та методів
 * оперування ним.
 *
 * @author Nikolaenko M.
 * @date 17-dec-2020
 * @version 1.0
 */
// программа находит НОД заданных чисел
  #include <stdio.h>

int main(void) {
  int a = random(1, 500);
  int b = random(1, 500);
  count(a, b);
  /**
 * Головна функція.
 *
 * Послідовність дій:
 * - оголошення змінних 
 *	@param цикл while, що вираховує НОД двух заданих чисел методом Евклiда
 * @return успішний код повернення з програми (0)
 */
  
}

int count(int a, int b){
  int NOD;
//int a =126, b = 426;
  while(a != b) 
  {
     if (a > b) {
 a = a-b;
 NOD = a;
}
   else {
 b = b - a;
 NOD = b;
   }
 }
  return 0;
}

int random(int lower, int upper) 
{ 
    int num = (rand() % (upper - lower + 1)) + lower; 
    return num;
}


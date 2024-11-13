#include <iostream>
#include <queue>

int main() {
    // Створюємо чергу цілих чисел
    std::queue<int> numbers;

    // Заповнюємо чергу деякими числами
    numbers.push(120);
    numbers.push(45);
    numbers.push(250);
    numbers.push(90);
    numbers.push(200);
    numbers.push(130);

    int count = 0;  // Лічильник елементів, що більше 100
    int sum = 0;    // Сума елементів, що більше 100

    // Проходимо через всі елементи черги
    while (!numbers.empty()) {
        int num = numbers.front();  // Отримуємо перший елемент черги
        numbers.pop();               // Видаляємо цей елемент з черги

        // Перевірка, чи більше число за 100
        if (num > 100) {
            count++;
            sum += num;
        }
    }

    // Виводимо результати
    std::cout << "sum of elements more than 100: " << count << std::endl;
    std::cout << "Sum of elemetns less than 100: " << sum << std::endl;

    return 0;
}

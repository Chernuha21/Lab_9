#include <iostream>
#include <queue>

int main() {
    // ��������� ����� ����� �����
    std::queue<int> numbers;

    // ���������� ����� ������� �������
    numbers.push(120);
    numbers.push(45);
    numbers.push(250);
    numbers.push(90);
    numbers.push(200);
    numbers.push(130);

    int count = 0;  // ˳������� ��������, �� ����� 100
    int sum = 0;    // ���� ��������, �� ����� 100

    // ��������� ����� �� �������� �����
    while (!numbers.empty()) {
        int num = numbers.front();  // �������� ������ ������� �����
        numbers.pop();               // ��������� ��� ������� � �����

        // ��������, �� ����� ����� �� 100
        if (num > 100) {
            count++;
            sum += num;
        }
    }

    // �������� ����������
    std::cout << "sum of elements more than 100: " << count << std::endl;
    std::cout << "Sum of elemetns less than 100: " << sum << std::endl;

    return 0;
}

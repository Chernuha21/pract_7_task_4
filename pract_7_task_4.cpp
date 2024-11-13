#include <iostream>
#include <queue>
#include <string>

struct Student {
    std::string lastName;
    double averageGrade;
};

int main() {
    std::queue<Student> studentQueue;

    // Додаємо відомості про студентів у чергу
    studentQueue.push({ "Ivanov", 75.5 });
    studentQueue.push({ "Petr", 82.0 });
    studentQueue.push({ "Anastasia", 90.0 });
    studentQueue.push({ "Dr.Steive", 68.0 });
    studentQueue.push({ "Rovalenko", 85.5 });

    std::cout << "Students with average bal >= 80:" << std::endl;

    // Перевірка та виведення студентів зі середнім балом >= 80
    int size = studentQueue.size(); // Запам'ятовуємо початковий розмір черги

    for (int i = 0; i < size; ++i) {
        Student currentStudent = studentQueue.front(); // Отримуємо перший елемент
        studentQueue.pop(); // Видаляємо його з черги

        // Перевіряємо середній бал
        if (currentStudent.averageGrade >= 80) {
            std::cout << "Second Name: " << currentStudent.lastName
                << ", Average bal: " << currentStudent.averageGrade << std::endl;
        }

        // Повертаємо студента назад у чергу (якщо потрібно)
        studentQueue.push(currentStudent);
    }

    return 0;
}

// cpp_lessons.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <fstream>
#include <string>
#include "Stack.h"
#include "TypeOne.h"
#include "TypeTwo.h"
using namespace std;

//void Write(string file_path, string text)
//{
//    ofstream out;          // поток для записи
//    out.open(file_path); // окрываем файл для записи
//    if (out.is_open())
//    {
//        out << text << std::endl;
//    }
//    out.close();
//}
//
//int Read(string file_path)
//{
//    ifstream in;
//    int digit;
//    in.open(file_path);
//    if (in.is_open())
//    {
//        in >> digit;
//    }
//    in.close();
//
//    return digit;
//}
//
//string ReadAll(string file_path)
//{
//    string res, buff; // сюда будем класть считанные строки
//    ifstream file(file_path); // файл из которого читаем (для линукс путь будет выглядеть по другому)
//
//    while (getline(file, buff)) { // пока не достигнут конец файла класть очередную строку в переменную (s)
//        res += buff + "\n"; // выводим на экран
//    }
//
//    file.close(); // обязательно закрываем файл что бы не повредить его
//
//    return res;
//}
//
//void DecToBin()
//{
//    int dec, bin = 0, mod;
//
//    cin >> dec;
//
//    while (dec)
//    {
//        mod = dec % 2;
//        dec /= 2;
//
//        bin = 10 * bin + mod;
//    }
//
//    cout << bin << endl;
//
//    system("pause");
//}
//
//int Rand(int min, int max)
//{
//    int result = rand();
//    result = min + result % (max - min);
//    return result;
//}
//
//int** RandomInit(int size_x, int size_y)
//{
//    int** arr2D = new int* [size_x];
//    for (size_t i = 0; i < size_x; i++)
//    {
//        arr2D[i] = new int[size_y];
//        for (size_t j = 0; j < size_y; j++)
//        {
//            arr2D[i][j] = Rand(-100, 100);
//        }
//    }
//    return arr2D;
//}
//
//void TestAmpersant()
//{
//    int variable = 10;
//    int* arr = new int[3]{ 10, 2, -1 };
//    int** arr2D = new int* [2];
//    arr2D[0] = new int[2]{0, 3};
//    arr2D[1] = new int[2]{1, 2};
//
//    cout << variable << endl;
//    cout << &variable << endl;
//    cout << *&variable << endl;
//    cout << *&*&variable << endl;
//    cout << *(arr + 1) << endl;
//    cout << *(arr + 2) << endl;
//    cout << (*arr + 1) << endl;
//
//    int dx = 0, dy = 1;
//    cout << *(*(arr2D + dx) + dy) << endl;
//
//    int p = 10;
//    auto b = &p;
//    (*b)++;
//    cout << &p << endl;
//    cout << *&p;
//    cout << p << '\t' << *b << '\n';
//}

void StackFunk(int count, string name)
{
    auto st = new Stack(count, name);
    st->Push(1);
    cout << "push succes=" << st->push_succes << endl;

    auto element = st->Pop();
    cout << "pop succes=" << st->pop_succes << endl;

    cout << "name=" << st->name << endl
        << "max count=" << st->get_max_count() << endl
        << "count=" << st->get_count() << endl;

    while (!st->stack_overflow)
    {
        st->Push(rand() % 10);
        cout << "push succes=" << st->push_succes << endl;
    }
    st->Print();
}

void stack_main()
{
    StackFunk(3, "stack one");
    StackFunk(5, "stack two");
}


void friend_main()
{
    auto one = new TypeOne(10);
    auto two = new TypeTwo(1, -1);

    cout << FindMax(one, two);
}

int main()
{
    stack_main();
    friend_main();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

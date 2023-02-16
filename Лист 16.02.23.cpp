#include <iostream>
#include <list>
using namespace std;

void print(list<int> a) {
    for(auto it = a.begin(); it != a.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    list<int> a(10, 2); // создайте список из 10 элементов, каждый из которых равен 2
    a.push_back(1); // добавить в конец 1, в начало 8
    a.push_front(8);
    auto it = a.begin(); // добавить после 4-ого число 5 a.insert(итератор, значение)
    for(int i = 0; i < 4; i++){
        it++;
    }
    a.insert(it, 5); 
    
    for(int i = 0; i < 4; i++){ // добавить после 8-ого 3 копии числа 3 
        it++;
    }
    a.insert(it, 3, 3);
    
    a.sort(); //сортировать
    print(a); //вывести
    a.unique(); //удалить повторы
    print(a); //вывести
    cout << a.back() << endl; //найти максимальное число
}
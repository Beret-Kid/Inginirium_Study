#include <iostream>
#include <map>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int house;
    cout << "Введите количество домов на вашей улице: " << endl;
    cin >> house;
    map<int, int> ylica; // ключ - номер дома, значение - колво людей в доме
    for(int i = 0; i < house; i++) { // n=house
        int people;
        cout << "Введите кол-во людей в доме: " << endl;
        cin >> people;
        ylica[i+1] = people; 
    }
    map<int, int>::iterator it, it2, DelHouse, DelHouse2;
    while (true) {
        int operation;
        cout << "Выберите, что вы желаете сделать: " << endl;
        cout << "0.  Выбрать дом и узнать сколько в нём человек." << endl;
        cout << "1.  Удалить существующий дом на вашей улице." << endl;
        cout << "2.  Добавить новый дом в вашу улицу." << endl;
        cin >> operation;
        switch(operation){
            case 0:
                //Дома и люди
                cout << "Введите номер дома: "; cin >> house;
                it = ylica.find(house);
                cout << "Кол-во людей в доме: " << it->second << endl;
                
                it2 = ylica.find(house);
                if(it2 == ylica.end()){
                    cout << "Такого дома нет!" << endl;
                }
                
                break;
            case 1:
                //Удаление дома
                int DeleteHouse;
                cout << "Введите номер дома для удаления: "; cin >> DeleteHouse;
                DelHouse = ylica.find(DeleteHouse);
                if(ylica.find(DeleteHouse) == ylica.end()){
                    cout << "Такого дома нет!" << endl;
                }
                else{
                ylica.erase(DelHouse);
                cout << "Дом удалён!" << endl;
                }
                break;
            case 2:
                int AddHouse, AddPeople;
                cout << "Какой дом вы хотите добавить: "; cin >> AddHouse;
                cout << "Сколько людей вы хотите туда поселить: "; cin >> AddPeople;
                ylica.insert(make_pair(AddHouse, AddPeople));
                cout << "Добавлено!" << endl; 
                break;
            default:
                cout << "Такой операции нет!" << endl;
                break;
        return 0;
        } 
    }
}

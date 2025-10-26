//#define task_1
#define task_6

#include <iostream>
using namespace std;

#ifdef task_6
int main() {
    int floors;
    
    cout << "Скажите, сколько этажей в отеле?" << endl;
    cin >> floors;
    
    while (floors < 1) {
        cout << "Извините, мы не принимаем ответ с числом этажей меньше 1" << endl;
        cout << "Введи ответ с числом этажей снова" << endl;
        cin >> floors;
    } 
    
    int totalRooms = 0;
    int occupiedrooms = 0;
    
    for (int i = 1; i <= floors; i++) {
        if (i == 13) {
            cout << "У нас в отеле нет 13 этажа из-за суеверия." << endl;
        continue;
        } 
    
    int roomsOnFloor;
    cout << "Какое количество комнат на " << i << "-м этаже?" << endl;
    cin >> roomsOnFloor;
    
    while (roomsOnFloor < 10) {
        cout << "На одном этаже отеля у нас находится не меньше 10 комнат. Введите снова: ";
        cin >> roomsOnFloor;
        }
    
    int occupiedroomsOnFloor;
    cout << "Сколько из них занято? ";
    cin >> occupiedroomsOnFloor;
    
    while (occupiedroomsOnFloor < 0 || occupiedroomsOnFloor > roomsOnFloor) {
        cout << "Число занятых комнат не может быть меньше 0 или больше общего числа комнат на этаже. Введите снова: ";
        cin >> occupiedroomsOnFloor;
        }
    
    totalRooms += roomsOnFloor;
    occupiedrooms += occupiedroomsOnFloor;
    }
    
    int freeRooms = totalRooms - occupiedrooms;
    double percentoccupied = (double)occupiedrooms / totalRooms * 100;
    
    cout << "Общее число всех комнат: " << totalRooms << endl;
    
    cout << "Занятые комнаты: " << occupiedrooms << endl;
    
    cout << "Свободные комнаты: " << freeRooms << endl;
    
    cout << "Процент занятости отеля: " << percentoccupied << "%" << endl;
    
    return 0;
    
} 

#endif

#include <iostream>
#include <ctime>//для бібліотеки time
#include <cstdlib>//для бібліотеки random
using namespace std;
int main(){
	int arr[4][7];
	int value = 0;//змінна для мінімального числа
  int column=0;//j 
  int line=0;//i
	srand(time(NULL));//отримує у вигляді параметра поточний системний час, який при кожному запуску програми буде різним. 
	for (int i = 0; i < 4; i++) { // для рядків 
		for (int j = 0; j < 7; j++) {// для стовпчиків
			arr[i][j] =rand()%20;
		}
	}
	for (int i = 0; i < 4; i++) {//визначення найбільшого числа
		for (int j = 0; j < 7; j++) {
			if(value<arr[i][j]){
        value=arr[i][j];//найбільше число
        column=j;
        line=i;
      }
		}
	}
  for (int i = 0; i < 4; i++) {
	  for (int j = 0; j < 7; j++) {
		  if(value>arr[i][j]){//від більшого числа йдемо до найменшого
        value=arr[i][j];
        column=j;
        line=i;
      }
	  }
  }
  cout << "for "<<line <<" line and "<<column <<" column biggest number = " << value << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 7; j++) {
			cout << arr[i][j] << ' ';
		}//виведення двовимірного масиву
		cout << endl;
	}
}
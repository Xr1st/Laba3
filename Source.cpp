#include <iostream>
using namespace std;


void one() {
    int a, b, size;
    cout << "Размер массива: " << endl;
    cin >> size;
    int counter = 0;
    int* arr = new int[size];

    cout << "Заполинте: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
        {
            counter++;

        }
    }
     counter = size - counter;
    int* copy_plus_array = new int[counter];
    int j = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            copy_plus_array[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < counter; i++)
    {
        cout << copy_plus_array[i] << " ";
    }
}


void two() {
    cout << "Строка: ";
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y')
        {
            cout << str[i] << " ";
        }
    }
}
int main() {

    setlocale(LC_ALL, "Russian");
    one();
    cout << endl;
    two();
 

}


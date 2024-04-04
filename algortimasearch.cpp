#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input() {
    while (true)
    {
        cout << "Masukan panjang elemnt array : ";
        cin >> n;

        if (n <+ 20)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
    }

    cout << "\n--------------------" << endl;
    cout << "\nEnter Array Elemnt" << endl;
    cout << "\n--------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void LinearSearch()
{
    char ch;
}

int main(){

}
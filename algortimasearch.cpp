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
    int ctr; // number of comparisons
    int item;

    do
    {
        // accept the number to be searched
        cout << "\nEnter the element you want to search : "; // step 1
        cin >> item;

        ctr = 0;
        i = 0; // step 2
        while (i < n) // step 3
        {
            
        }
        
    } while ();
}

int main(){

}
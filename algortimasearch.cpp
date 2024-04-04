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
            ctr++;
            if (arr[i] == item)
            {
                cout << "\n" << item << " found at position" << (i + 1) << endl; // step 6
                break;
            }
            i++; //step 4
        }

        if (i == n) // step 5
            cout << "\n" << item << " not found in the array\n";
        cout << "\nNumber of comparisons : " << ctr << endl;

        cout << "\nContinue search (y/n) : ";
        cin >> ch;
        
    } while ((ch == 'y') || (ch == 'Y'));
}

void display()
{
    cout << "Array elements are : ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){

}
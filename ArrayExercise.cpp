#include <iostream>
using namespace std;

int array[22];
int num = -1;
int v = 0;

/* Function to change val in array to 1876 */

void change1876(int x)
{
    array[x - 1] = 1876;
}

/* Main */

int main()
{
    /* Initialize array and print original values*/

    for(int i = 2001; i < 2023; i++)
    {
        array[v] = i;
        cout << array[v] << "\n";
        v++;
    }

    cout << "\nEnter number 1-22: ";

    /* Condition */

    while(num < 1 || num > 22)
    {
        cin >> num;
        if(num >= 1 && num <= 22)
        {  
            cout << "Number at array[num]: " << array[num - 1] << " - changing to value '1876' :)\n\n";
            change1876(num);
            break;
        }
        else
        {
            cout << "Try again: ";
        }
    }

    for(int i = 0; i < 23; i++)
    {
        cout << array[i] << "\n";
        v++;
    }
}
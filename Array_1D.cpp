#include <iostream>
using namespace std;

int main()
{
    bool error = false; int rang = 0, search; // setup for easy to coding

    do {
        if (error) // ** if it first time for loop. error comment do nothing **
            cout << "Sorry, we have rang 1-10.";

        cout << "Enter cout of number : ";
        cin >> rang;

        error = !(rang < 11 && rang > 0); // cheak error. i want u input by rang 1 - 10 only
    } while (error); // if error. do it again until not error

    float number[10], max = 0, min = 0, sum = 0, avg; // setup for process

    // pocessing
    for (int i = 0; i < rang; i++) {
        cout << "Enter number " << i+1<< ": ";
        cin >> number[i];

        // cheak find max and min of array
        max = (max < number[i] || i == 0) ? number[i] : max;
        min = (min > number[i] || i == 0) ? number[i] : min;
        
        sum += number[i];
    }
    avg = sum / rang;

    cout << "Max is "<< max << endl;
    cout << "Min is "<< min << endl;
    cout << "Sum is "<< sum << endl;
    cout << "AVG is "<< avg << endl;

    do {
        if (error)
            cout << "Out of rang, Please try again."; // ****

        cout << "Search number by array's index : "; // teacher mean index or number of data ?
        cin >> search;
        
        error = !(search < rang && search > 0); // cheak if input number but this number out of data we have.
    } while (error);

    cout << "Index of " << search << " is " << number[search];

    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int size;
        cin >> size;

        int numbers[size], pendulum[size] = {0};
        for (int i = 0; i < size; ++i)
        {
            cin >> numbers[i];
        }

        sort(numbers, numbers + size);
        cout << '\n';
        int mid = (size - 1) / 2, j = 0;

        pendulum[mid] = numbers[0];
        for (int i = 1; i <= mid; ++i)
        {
            pendulum[mid + i] = numbers[++j];
            pendulum[mid - i] = numbers[++j];

            if (size % 2 == 0)
                pendulum[++j] = numbers[size - 1];

            for (int i = 0; i < size; ++i)
            {
                cout << pendulum[i] << " ";
            }
            cout << '\n';
        }
    }
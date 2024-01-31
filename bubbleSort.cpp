#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {5, -11, 4, 56, 0, 11, 22, -4};
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                std::swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// CALL PAPA FOR MOMO

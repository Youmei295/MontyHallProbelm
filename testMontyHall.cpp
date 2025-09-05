#include <iostream>
using namespace std;
void testMontyHall(float& counter)
{
    int winningNum = 1 + rand() % 3;
    int chosenNum = 1 + rand() % 3;
    bool swapped = false, readyToSwap=false;
    int i = 0;
    while (true)
    {
        if (1 + i % 3 == chosenNum)
        {
            i++; 
            continue;
        }
        if (readyToSwap)
        {
            chosenNum = 1 + i % 3;
            break;
        }
        if (1+i%3 != winningNum) readyToSwap = true;
        i++;
    }
    if (winningNum == chosenNum)
    {
        counter++;
    }
}
int main()
{
    int n;
    float counter = 0.0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        testMontyHall(counter);
    }
    cout << counter / n;
}

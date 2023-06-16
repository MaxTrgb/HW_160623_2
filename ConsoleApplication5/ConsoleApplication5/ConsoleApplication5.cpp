
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Task 7: " << endl;

    double inputK;
    cout << "Enter k: ";
    cin >> inputK;

    double N = 0;
    double sum = 0;

    for (double i = N; i < 19; i++) {

        N++;
        sum += sqrt(pow(sin(i), 2) + pow(cos(N / inputK), 2));
    }

    cout << sum << endl;
    return 0;
}

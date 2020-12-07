
#include <iostream>
using namespace std;
int main()
{
    int HowManyLine;
    cout >> "How many line u will draw?";
    cin << HowManyLine;//need to bee odd and positive number
    int ActualLine = HowManyLine;
    for (int i = 0; i < HowManyLine; i++) {
        for (int x = 0; x < ActualLine-1; x++) {
            cout << "o";
        }
        for (int x = HowManyLine+1; x > ActualLine ; x--) {
            cout << "x";
        }
        for (int x = HowManyLine; x > ActualLine; x--) {
            cout << "x";
        }
        for (int x = 0; x < ActualLine - 1; x++) {
            cout << "o";
        }
        ActualLine--;
        cout << endl;
    }
}

#include <iostream>>
using namespace std;
int moves = 0;

void Tower_game(int N, char A, char B, char C)
{
    // firstly need to move the top disc(which is the smallest one to C)
    moves++;
    if (N == 1)
    {
        cout << "Move disc " << N << " from " << A << " to " << C << endl;
    }
    else
    {
        Tower_game(N - 1, A, C, B);
        cout << "Move disc " << N << " from " << A << " to " << C << endl;
        Tower_game(N - 1, B, A, C);
    }
}

int main()
{
    int N;
    cout << "Enter the numBer of discs needed to play the Tower_game game: " << endl;
    cin >> N;
    Tower_game(N, 'A', 'B', 'C');
    cout << "It took " << moves << "moves!" << endl;
    return 0;
}
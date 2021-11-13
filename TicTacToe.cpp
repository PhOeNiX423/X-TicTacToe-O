#include <iostream>
using namespace std;

void BoardDraw(char boardArray[]) {

    // Make terminal clear ~
    system("cls");
    cout << "               TIC TAC TOE" << endl;
    cout << "         X-Player   VS   O-Player" << endl;
    cout << " " << endl;
    cout << "               |         |            " << endl;
    cout << "           " << boardArray[0] << "   |    " << boardArray[1] << "    |   " << boardArray[2] << endl;
    cout << "               |         |            " << endl;
    cout << "        -------------------------" << endl;
    cout << "               |         |            " << endl;
    cout << "           " << boardArray[3] << "   |    " << boardArray[4] << "    |   " << boardArray[5] << endl;
    cout << "               |         |            " << endl;
    cout << "        -------------------------" << endl;
    cout << "               |         |            " << endl;
    cout << "           " << boardArray[6] << "   |    " << boardArray[7] << "    |   " << boardArray[8] << endl;
    cout << "               |         |            " << endl;
    cout << " " << endl;
    
}

void XPlayerTurn(char boardArray[]) {
    int Xturn;
    cout << "X-Player, enter the number: ";
    cin >> Xturn;

    bool freeNum = false;

    while (freeNum != true) {
        if (boardArray[Xturn - 1] == 'O' || boardArray[Xturn - 1] == 'X') {
            cout << "ERROR" << endl;
            cout << "X-Player, enter the free number: ";
            cin >> Xturn;
        }
        else {
            boardArray[Xturn - 1] = 'X';
            freeNum = true;
        }
    }

}

void OPlayerTurn(char boardArray[]) {
    int Oturn;
    cout << "O-Player, enter the number: ";
    cin >> Oturn;

    bool freeNum = false;

    while (freeNum != true) {
        if (boardArray[Oturn - 1] == 'X' || boardArray[Oturn - 1] == 'O') {
            cout << "ERROR" << endl;
            cout << "O-Player, enter the free number: ";
            cin >> Oturn;
        }
        else {
            boardArray[Oturn - 1] = 'O';
            freeNum = true;
        }
    }

}

bool WinChecker(char boardArray[], char whoseTurn) {
    
    int winOrTie;

    if (boardArray[0] == whoseTurn && boardArray[1] == whoseTurn && boardArray[2] == whoseTurn) {
        system("cls");
        cout << ' ' << endl;
        cout << "  *--------------------------------------*" << endl;
        cout << ' ' << endl;
        cout << "              CONGRATULATIONS!" << endl;
        cout << ' ';
        cout << "            " << "Player " << whoseTurn << " is winner" << endl;
        cout << ' ' << endl;
        cout << "  *--------------------------------------*" << endl;
        return true;
    }
    else {
        return false;
    }
  
}

int main()
{
    char boardArray[9] = { '1','2','3',
                           '4','5','6',
                           '7','8','9' };

    while (true) {

        BoardDraw(boardArray);
        XPlayerTurn(boardArray);
        if (WinChecker(boardArray, 'X')) {
            break;
        }

        BoardDraw(boardArray);
        OPlayerTurn(boardArray);
        if (WinChecker(boardArray, 'O')) {
            break;
        }
    }
    
}

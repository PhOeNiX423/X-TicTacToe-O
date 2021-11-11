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
    boardArray[Xturn - 1] = 'X';
}

void OPlayerTurn(char boardArray[]) {
    int Oturn;
    cout << "O-Player, enter the number: ";
    cin >> Oturn;
    boardArray[Oturn - 1] = 'O';
}

bool WinChecker(char boardArray[]) {

    if (boardArray[0] == boardArray[1] == boardArray[2]) {
        return true;
    }

    if (boardArray[3] == boardArray[4] == boardArray[5]) {
        return true;
    }

    if (boardArray[6] == boardArray[7] == boardArray[8]) {
        return true;
    }

    if (boardArray[0] == boardArray[3] == boardArray[6]) {
        return true;
    }

    if (boardArray[1] == boardArray[4] == boardArray[7]) {
        return true;
    }

    if (boardArray[2] == boardArray[5] == boardArray[8]) {
        return true;
    }

    if (boardArray[0] == boardArray[4] == boardArray[8]) {
        return true;
    }

    if (boardArray[2] == boardArray[4] == boardArray[6]) {
        return true;
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
        if (WinChecker(boardArray)) {
            break;
        }
        BoardDraw(boardArray);
        OPlayerTurn(boardArray);
        if (WinChecker(boardArray)) {
            break;
        }
    }
    
}

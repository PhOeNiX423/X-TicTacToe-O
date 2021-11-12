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

void WinChecker(char boardArray[]) {
    
    if (boardArray[0] == boardArray[1] == boardArray[2] == 'X') {
        system("cls");
        cout << "WIN";
    }

    if (boardArray[3] == boardArray[4] == boardArray[5]) {
        
    }

    if (boardArray[6] == boardArray[7] == boardArray[8]) {
       
    }

    if (boardArray[0] == boardArray[3] == boardArray[6]) {
       
    }

    if (boardArray[1] == boardArray[4] == boardArray[7]) {
        
    }

    if (boardArray[2] == boardArray[5] == boardArray[8]) {
       
    }

    if (boardArray[0] == boardArray[4] == boardArray[8]) {
        
    }

    if (boardArray[2] == boardArray[4] == boardArray[6]) {
        
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
        
        BoardDraw(boardArray);
        OPlayerTurn(boardArray);
        
    }
    
}

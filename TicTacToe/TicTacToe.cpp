#include <iostream>
#include <vector>
#include <string>

using namespace std;

void printBoard(vector< vector<char> > &board) {

    
    for (int i = 0; i < board.size(); i++)
    {
        cout << "+---+---+---+\n";

        for (int j = 0; j < board[i].size(); j++)
        {
            cout << "| " << board[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << "+---+---+---+\n";
}


 //+---+---+---+
 //| X | X | X |
 //+---+---+---+
 //| X | X | X |
 //+---+---+---+
 //| X | X | X |
 //+---+---+---+

void placeMark(vector< vector<char> >& board, char mark, int pos) {
    int count = 0;

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if (count == pos - 1) {
                board[i][j] = mark;
            }
            count++;
        }
    }
    
}

//int main()
//{
//    vector<vector<char>> gameBoard;
//    char space = ' ';
//    char p1 = 'X', p2 = 'O';
//    bool gameEnd = false;
//    bool playerTurn = false; // false = player1, true = player2
//    string player1, player2;
//    int newPos;
//
//
//
//    cout << "Enter Player 1 Name: " << endl;
//    cin >> player1;
//    cout << "Enter Player 2 Name: " << endl;
//    cin >> player2;
//
//    //Populate the game board
//    for (int i = 0; i < 3; i++) {
//
//        vector<char> temp;
//        for (int j = 0; j < 3; j++) {
//            temp.push_back(space);
//        }
//        gameBoard.push_back(temp);
//    }
//    printBoard(gameBoard);
//
//    //Begin game loop
//    while (gameEnd != true) {
//        if (playerTurn == false) {
//            cout << "Player 1's Turn: \n";
//        }
//        else {
//            cout << "Player 2's Turn: \n";
//        }
//
//        //Get position to enter new mark
//        cout << "Enter position to place mark (1-9):\n";
//        cin >> newPos;
//
//        if (playerTurn == false) {
//            placeMark(gameBoard, p1, newPos);
//        }
//        else {
//            placeMark(gameBoard, p2, newPos);
//        }
//
//        printBoard(gameBoard);
//
//        playerTurn = !playerTurn;
//    
//       // gameEnd = true;
//    }
//}


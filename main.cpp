#include <iostream>

using namespace std;

void drawFirstLine();
void drawMiddleLines();
void drawMiddleLineWithMessage();
void drawLastLine();

int main()
{
    char charToPrint = 'X';
    char tempChar;
    int row, column, calcNumMiddleRows, upperMiddle, hollowSpace;

    row = 5;
    column = 14;

    calcNumMiddleRows = row - 3;
    upperMiddle = calcNumMiddleRows / 2;
    lowerMiddle = calcNumMiddleRows - upperMiddle;

    calcNumCenteredSpaces = column - 2 - size;  //

    drawFirstLine();

    for ( int a = 0; a < upperMiddle; a++)
        drawMiddleLines();

    hollowSpace = column - sizeOfString;
    drawMiddleLineWithMessage();

   for ( int b = 0; b < lowerMiddle; b++)
        drawMiddleLines();

    drawLastLine();

    return 0;
}

    void drawFirstLine()
    {
    for ( int x = 0; x < column; x++)
        {
        cout << charToPrint;
        }
        cout << endl;
    }

    void drawMiddleLines
    {
        for ( int c = 0; c < column; c++)
        {
            if ( c == 0 | c == column)
                cout << charToPrint;
            else
                cout << " ";
        }
        cout << endl;
    }

    void drawMiddleLineWithMessage
    {
        cout charToPrint;
        for ( int d = 1; d < hollowSpace; d++ )
            cout " ";
        //this is where the cout theMessage string here
        for ( int d = 1; d < hollowSpace; d++ )
            cout " ";
        cout charToPrint;
    }


#include <bits/stdc++.h>

using namespace std;

class SAMEER
{
private:
    vector<vector<int>> sam;
    int rows, cols;

public:
    SAMEER(int r, int c) : rows(r), cols(c)
    {
        sam.resize(rows, vector<int>(cols, 0));
    }

    void insertElement(int r, int c, int value)
    {
        if (r >= 0 && r < rows && c >= 0 && c < cols)
        {
            sam[r][c] = value;
        }
        else
        {
            cout << "not a good position" << endl;
        }
    }

    int retrieveElement(int r, int c) const
    {
        if (r >= 0 && r < rows && c >= 0 && c < cols)
        {
            return sam[r][c];
        }
        else
        {
            cout << "Invalid position!" << endl;
            return -1;
        }
    }

    void displayMatrix() const
    {
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cout << sam[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{

    SAMEER sam(3, 3);

    // yha pe matrix element insert karenge
    sam.insertElement(0, 0, 92);
    sam.insertElement(0, 1, 83);
    sam.insertElement(0, 2, 78);
    sam.insertElement(1, 0, 69);
    sam.insertElement(1, 1, 52);
    sam.insertElement(1, 2, 44);
    sam.insertElement(2, 0, 35);
    sam.insertElement(2, 1, 22);
    sam.insertElement(2, 2, 17);

    //  matrix ko dikhane ke liye
    cout << "SAMEER:" << endl;
    sam.displayMatrix();

    //kise specific position ke element
    int value = sam.retrieveElement(1, 1);
    cout << "Element at position (1,1): " << value << endl;

    return 0;
}

#include <iostream>
#include <string>
#include <fstream>

#define BLOCK_WIDTH 4
#define BLOCK_HEIGHT 4
#define BG_HEIGHT 40
#define BG_WIDTH 15
using namespace std;

ifstream test("Tetris.data");
ofstream output("Tetris.output");

int blocks[20][BLOCK_HEIGHT][BLOCK_WIDTH] =
    {
        {{0, 0, 0, 0},
         {0, 0, 0, 0},
         {1, 1, 1, 0},
         {0, 1, 0, 0}},
        {{0, 0, 0, 0},
         {0, 1, 0, 0},
         {1, 1, 0, 0},
         {0, 1, 0, 0}},
        {{0, 0, 0, 0},
         {0, 0, 0, 0},
         {0, 1, 0, 0},
         {1, 1, 1, 0}},
        {{0, 0, 0, 0},
         {1, 0, 0, 0},
         {1, 1, 0, 0},
         {1, 0, 0, 0}},
        {{0, 0, 0, 0},
         {1, 0, 0, 0},
         {1, 0, 0, 0},
         {1, 1, 0, 0}},
        {{0, 0, 0, 0},
         {0, 0, 0, 0},
         {1, 1, 1, 0},
         {1, 0, 0, 0}},
        {{0, 0, 0, 0},
         {1, 1, 0, 0},
         {0, 1, 0, 0},
         {0, 1, 0, 0}},
        {{0, 0, 0, 0},
         {0, 0, 0, 0},
         {0, 0, 1, 0},
         {1, 1, 1, 0}},
        {{0, 0, 0, 0},
         {0, 1, 0, 0},
         {0, 1, 0, 0},
         {1, 1, 0, 0}},
        {{0, 0, 0, 0},
         {0, 0, 0, 0},
         {1, 0, 0, 0},
         {1, 1, 1, 0}},
        {{0, 0, 0, 0},
         {1, 1, 0, 0},
         {1, 0, 0, 0},
         {1, 0, 0, 0}},
        {{0, 0, 0, 0},
         {0, 0, 0, 0},
         {1, 1, 1, 0},
         {0, 0, 1, 0}},
        {{0, 0, 0, 0},
         {0, 0, 0, 0},
         {0, 1, 1, 0},
         {1, 1, 0, 0}},
        {{0, 0, 0, 0},
         {1, 0, 0, 0},
         {1, 1, 0, 0},
         {0, 1, 0, 0}},
        {{0, 0, 0, 0},
         {0, 0, 0, 0},
         {1, 1, 0, 0},
         {0, 1, 1, 0}},
        {{0, 0, 0, 0},
         {0, 1, 0, 0},
         {1, 1, 0, 0},
         {1, 0, 0, 0}},
        {{1, 0, 0, 0},
         {1, 0, 0, 0},
         {1, 0, 0, 0},
         {1, 0, 0, 0}},
        {{0, 0, 0, 0},
         {0, 0, 0, 0},
         {0, 0, 0, 0},
         {1, 1, 1, 1}},
        {{0, 0, 0, 0},
         {0, 0, 0, 0},
         {1, 1, 0, 0},
         {1, 1, 0, 0}},
        {{0, 0, 0, 0},
         {0, 0, 0, 0},
         {0, 0, 0, 0},
         {0, 0, 0, 0}}

};
class Block
{
private:
    char blockType;
    char direction;
    int col;
    int row;

public:
    int shape[BLOCK_HEIGHT][BLOCK_WIDTH];
    Block(char type[], int col)
    {
        this->row = 0;
        this->col = col - 1;
        blockType = type[0];
        if (blockType != 'O')
            direction = type[1];
        int i, j;
        switch (blockType)
        {
        case 'T':
            switch (direction)
            {
            case '1':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[0][i][j];
                    }
                }
                break;
            case '2':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[1][i][j];
                    }
                }
                break;
            case '3':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[2][i][j];
                    }
                }
                break;
            case '4':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[3][i][j];
                    }
                }
                break;
            default:
                break;
            }
            break;
        case 'L':
            switch (direction)
            {
            case '1':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[4][i][j];
                    }
                }
                break;
            case '2':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[5][i][j];
                    }
                }
                break;
            case '3':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[6][i][j];
                    }
                }
                break;
            case '4':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[7][i][j];
                    }
                }
                break;
            default:
                break;
            }
            break;
        case 'J':
            switch (direction)
            {
            case '1':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[8][i][j];
                    }
                }
                break;
            case '2':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[9][i][j];
                    }
                }
                break;
            case '3':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[10][i][j];
                    }
                }
                break;
            case '4':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[11][i][j];
                    }
                }
                break;
            default:
                break;
            }
            break;

        case 'S':
            switch (direction)
            {
            case '1':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[12][i][j];
                    }
                }
                break;
            case '2':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[13][i][j];
                    }
                }
                break;
            default:
                break;
            }
            break;

        case 'Z':
            switch (direction)
            {
            case '1':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[14][i][j];
                    }
                }
                break;
            case '2':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[15][i][j];
                    }
                }
                break;
            default:
                break;
            }
            break;

        case 'I':
            switch (direction)
            {
            case '1':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[16][i][j];
                    }
                }
                break;
            case '2':
                for (i = 0; i < BLOCK_HEIGHT; i++)
                {
                    for (j = 0; j < BLOCK_WIDTH; j++)
                    {
                        shape[i][j] = blocks[17][i][j];
                    }
                }
                break;
            default:
                break;
            }
            break;

        case 'O':
            for (i = 0; i < BLOCK_HEIGHT; i++)
            {
                for (j = 0; j < BLOCK_WIDTH; j++)
                {
                    shape[i][j] = blocks[18][i][j];
                }
            }
            break;
        default:
            for (i = 0; i < BLOCK_HEIGHT; i++)
            {
                for (j = 0; j < BLOCK_WIDTH; j++)
                {
                    shape[i][j] = blocks[19][i][j];
                }
            }
        }
    }

    int getRow()
    {
        return this->row;
    }
    int getCol()
    {
        return this->col;
    }

    void fall()
    {
        row += 1;
    }
};

class Board
{

private:
    int width;
    int height;

public:
    int background[BG_HEIGHT + 4][BG_WIDTH];
    Board(int m, int n)
    {
        height = m + 4;
        width = n;
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                background[i][j] = 0;
            }
        }
    }
    void refreshBlock(Block &block)
    {
        int x = block.getRow();
        int y = block.getCol();
        for (int i = 0; i < BLOCK_HEIGHT; i++)
        {
            for (int j = 0; j < BLOCK_WIDTH; j++)
            {

                if (block.shape[i][j] == 1)
                    background[x + i][y + j] = 1;
            }
        }
    }
    void deleteLine()
    {
        bool flag;
        for (int k = 0; k < 4; k++)
        {
            for (int i = 4; i < height; i++)
            {
                flag = false;
                for (int j = 0; j < width; j++)
                    if (background[i][j] == 0)
                    {
                        flag = true;
                        break;
                    }
                if (flag)
                    continue;
                for (int j = i; j >= 0; j--)
                    for (int k = 0; k < width; k++)
                        background[j][k] = background[j - 1][k];
                for (int i = 0; i < width; i++)
                {
                    background[0][i] = 0;
                }
            }
        }
    }
    bool detect(Block &block)
    {
        bool flag = false;
        int x = block.getRow();
        int y = block.getCol();
        int temp = x + 1;
        for (int i = 0; i < BLOCK_WIDTH; i++)
        {
            for (int j = 0; j < BLOCK_HEIGHT; j++)
            {
                if (background[j + temp][y + i] == 1 && block.shape[j][i] == 1)
                {
                    flag = true;
                }

                if (j + temp > height - 1)
                {
                    flag = true;
                }
            }
        }
        return flag;
    }

    bool gameOver()
    {
        bool flag = false;

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < width; j++)
            {
                if (background[i][j] == 1)
                {
                    flag = true;
                }
            }
        }
        return flag;
    }
    void show()
    {
        for (int i = 4; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                output << background[i][j];
            }
            output << "\n";
        }
    }
};

int main()
{
    int m, n;
    // int i, j;
    string type;
    char typo[2];
    int col;
    bool over = false;

    test >> m >> n;

    Board board(m, n);

    while (test >> type && type != "End")
    {
        for (int i = 0; i < 2; i++)
        {
            typo[i] = type[i];
        }
        test >> col;
        Block nowBlock(typo, col);
        if (!over)
        {
            while (!board.detect(nowBlock))
            {
                nowBlock.fall();
            }

            board.refreshBlock(nowBlock);
            board.deleteLine();
            over = board.gameOver();
        }
    }

    board.show();

    return 0;
}

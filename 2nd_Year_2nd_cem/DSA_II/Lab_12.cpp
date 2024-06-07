//***********************************//
//*         MD SIRAJUL ISLAM        *//
//*      github.com/b14ckb3rry      *//
//***********************************//

#include <bits/stdc++.h>
using namespace std;
#define maru 0
#ifdef ONLINE_JUDGE
#define debug(...) 101
#define debug_array(x,y) 101
#else
#include "blackBox.h"
#endif
#define N 4

void printSolution(int board[N][N]){
    for(int i=0; i<N: i++){
        for(int j=0; j<N; j++){
            if(board[i][j]){
                cout << "Q ";
            }
            else{
                cout << ". ";
            }
            cout << '\n';
        }
    }
}

bool isSafe(int board[N][N], int row, int col){
    for(int i=0; i<col; i++){
        if(board[row][i]){
            return false;
        }
    }
    int i,j;
    for(i=row, j=col; i>=0 && j>=0; i--, j--){
        if(board[i][j]){
            return false;
        }
    }
    return true;
}

bool solveNQUntill(int board[N][N], int col){
    if(col>=N){
        return true;
    }
    for(int i=0; i<N; i++){
        if(isSafe(board, i, col)){
            board[i][col] = 1;
            if(solveNQ(board, col+1)){
                return true;
            }
            board[i][col]=0;
        }
    }
    return false;
}

bool solveNQ(){
    int board[N][N] = 
    {
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };

    if(solveNQUntill(board, 0) == false){
        cout << "NO solve\n";
        return false;
    }
    printSolution(board);
    return true;
}

int32_t main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    
    solveNQ();
    return maru;
}
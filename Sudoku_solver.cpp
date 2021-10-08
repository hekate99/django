//Sudoku problem solving using backtrcking
#include<bits/stdc++.h>
using namespace std;
#define UNASSIGNED 0
#define n 9
bool findunassignedlocation(int grid[n][n],int& row,int& col){
    for(row=0;row<n;row++)
        for(col=0;col<n;col++)
            if(grid[row][col]==UNASSIGNED)
                return true;
        return false;    
        
    

}
bool usedinrow(int grid[n][n],int row,int num){
    for(int col=0;col<n;col++)
        if(grid[row][col]==num)
            return true;
    return false;
    
}
bool usedincol(int grid[n][n],int col,int num){
    for(int row=0;row<n;row++)
    if(grid[row][col]==num)
        return true;
    return false;  
    
}
bool usedinbox(int grid[n][n],int boxstartrow,int boxstartcol,int num){
    for(int row=0;row<3;row++)
        for(int col=0;col<3;col++)
            if(grid[row+boxstartrow][col+boxstartcol]==num)
                return true;
        return false;
        
    
}
bool issafe(int grid[n][n],int row,int col, int num){
     return !usedinrow(grid,row,num)&&!usedincol(grid,col,num)&&!usedinbox(grid,row-row%3,col-col%3,num)&&grid[row][col]==UNASSIGNED;
}
bool solvesudoku(int grid[n][n]){
 int row,col;
    if(!findunassignedlocation(grid, row,col))
        return true;
    for(int num=1;num<=9;num++){
        if(issafe(grid,row,col,num)){
            grid[row][col]=num;
            if (solvesudoku(grid))
                return true;
            grid[row][col]=UNASSIGNED;    
        }
    } 
    return false;   
}
void printgrid(int grid[n][n]){
    cout<<"The solution is:"<<endl;
    for (int row=0;row<n;row++){
        for(int col=0;col<n;col++)
            cout<<grid[row][col]<<" ";
        cout<<endl;    
        
    }
}
int main(){
    int grid[n][n];
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    if(solvesudoku(grid)==true)
        printgrid(grid);
    else
        cout<<"No solution exist";
    return 0;
}


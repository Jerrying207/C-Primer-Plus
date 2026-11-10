int min(int a,int b)
{
    return a<b?a:b;
}

int minPathSum(int **grid,int gridSize,int *gridCplSize)
{
    int m=gridSize;
    int n=gridCplSize[0];
    for(int j=1;j<n;j++)
    {
        grid[0][j]=grid[0][j-1]+grid[0][j];
    }
    for(int i=1;i<m;i++)
    {
        grid[i][0]=grid[i-1][0]+grid[i][0];
    }

    for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            grid[i][j]=min(grid[i-1][j],grid[i][j-1])+grid[i][j];
        }
    }
    return grid[m-1][n-1];
}
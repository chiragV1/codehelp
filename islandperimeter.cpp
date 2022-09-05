class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
       int t=0,u=0,n=0,x=0,z=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                
                if(i!=0 && (grid[i][j]==1 && grid[i-1][j]==1))
                    u=u+2;  //Delete mid edges
                if(grid[i][j]==1 && (n==0 || n==2))
                {
                    if(n==2 && z>0)
                        t++; 
                    t = t+3;
                    n = n+3;  //Means current row already got a cube
                    z++;   //Used to check whether 0 arrived after a cube
                }
                else if(grid[i][j]==1 && n!=0)
                {
                    t = t+2;
                    z++;
                }
                else
                {
                    n=2;  //If zero comes then n=2
                }
            }
            if(u>0 || i==0)
            {
            if(i==0)
                t = t + 1;
            else
                t = (t - u)+1;   //Answer after subtracting mid edges
            }
            u=0;
            n=0;
            z=0;
        }
        return t;
    }
};

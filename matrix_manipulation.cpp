#include <bits/stdc++.h> 
#define N 3 
#define M 4 
using namespace std; 
  
// Return minimum operation required to make all 1s. 
int minOperation(bool arr[N][M]) 
{ 
    int ans = 0; 
    for (int i = N - 1; i >= 0; i--) 
    { 
        for (int j = M - 1; j >= 0; j--) 
        { 
            // check if this cell equals 0 
            if(arr[i][j] == 0) 
            { 
                // increase the number of moves 
                ans++; 
                cout<<i<<" "<<j<<" "<<arr[i][j]<<endl;
                // flip from this cell to the start point 
                for (int k = 0; k <= i; k++) 
                { 
                    for (int h = 0; h <= j; h++) 
                    { 
                        // flip the cell 
                        if (arr[k][h] == 1) 
                            arr[k][h] = 0; 
                        else
                            arr[k][h] = 1; 
                    } 
                } 
            } 
        } 
    } 
    return ans; 
} 
  
// Driven Program 
int main() 
{ 
    bool mat[N][M] = 
    { 
        1,0,0,1,
        1,1,1,0,
        0,1,1,1
    }; 
  
    cout << minOperation(mat) << endl; 
  
    return 0; 
}
//cheekushivam's code

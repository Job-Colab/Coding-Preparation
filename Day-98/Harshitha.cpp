int solve(int x, int y) {
    
    int count = 0 , dig_count = 0;
  
    
    while(x != 0 || y != 0)
    {
        if(x % 2 != y % 2) // 1,0 -- 0,0 -- 0,0 
        {
            ++ count;
        }
        x /= 2;
        y /= 2;
    }

    return count;
}

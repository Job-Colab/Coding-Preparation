class Solution {
public:
    int numWaterBottles(int Bottles, int Exchange) 
    {
        int  empty = 0 , drank = 0 , max_bottles = Bottles;
        
        while(Bottles >= Exchange)  
        {
            drank = Bottles / Exchange;
            max_bottles += drank;  
            empty = Bottles % Exchange; 
            Bottles = drank + empty; 
            
        }
        return max_bottles;
    }
};

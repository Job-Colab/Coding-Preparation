class Solution {
    fun kidsWithCandies(candies: IntArray, extraCandies: Int): BooleanArray {
        val s : Int = candies.size
        var ar = BooleanArray(s)
        var maxvalue : Int = -1
        for(i in candies.indices){
            if(candies[i]>maxvalue){maxvalue=candies[i]}
        }
        for(i in candies.indices){
            var temp = candies[i] + extraCandies
            when{
                temp>=maxvalue -> ar[i] = true
                else -> ar[i] = false
            }
        }
        return ar
    }
}

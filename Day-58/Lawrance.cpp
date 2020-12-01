class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	string printLargest(vector<string> &arr) {
	    sort(arr.begin(), arr.end(), [] (string one, string two) { return one + two > two + one; });
	    string ans = "";
	    for(string i : arr) {
	        ans += i;
	    }
	    return ans;
	}
};

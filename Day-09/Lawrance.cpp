#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin >> t;
	while(t--) {
	    int n,d;
	    cin >> n >> d;
	    int *cars = new int[n];
	    int *penalities = new int[n];
	    long ans = 0;
	    bool isEven = (d % 2 == 0);
	    for(int i = 0; i < n; i++) cin >> cars[i];
	    for(int i = 0; i < n; i++) cin >> penalities[i];
	    for(int i = 0; i < n; i++) {
	        if(isEven) {
	            if(cars[i] % 2) ans += penalities[i];
	        }
	        else {
	            if(!(cars[i] % 2)) ans += penalities[i];
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}

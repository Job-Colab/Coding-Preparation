def binSearch(a):
	l, r = 0, len(a)-1
	ans=-1
	while(l<=r):
		mid = (l+r)//2
		if(mid==a[mid]):
			ans = mid
			r=mid-1
		elif(mid<a[mid]):
			r=mid-1
		elif(mid>a[mid]):
			l=mid+1
	return ans
	

nums = list(map(int, input().split()))
ans=(binSearch(nums))
print(ans)
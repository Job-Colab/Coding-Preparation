int peakElement(int arr[], int n)
{
   // Your code here
   int i,ind;
   if(n==1)
    return 0;
   if(arr[0]>arr[1])
    return 0;
   for(i=0;i<n;i++)
    {
        if(arr[i+1]<arr[i]&&arr[i-1]<arr[i])
           // cout<<ind;
            ind=i;
    }
    if(arr[n-1]>arr[n-2])
        return n-1;
    return ind;
}
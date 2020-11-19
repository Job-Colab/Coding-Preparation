int peakElement(int a[], int n)
{
    int i=0, min=a[0], ind;
    if(n==1)
        return a[0];
    if(a[0]>a[1])
        return 0;
    for(i=1; i<n-1; i++){
        if(a[i]>a[i-1] and a[i]>a[i+1])
            return i;
    }
    if(a[n-1]>=a[n-2])
        return n-1;
    return i;
}
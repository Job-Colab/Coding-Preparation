int main()
{
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    int arr[n];
    int max=0;
    cout<<"\n enter the price of each element: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {   for(int j=i+1;j<n;j++)
        {   if(arr[j]-arr[i]>=max)
                max=arr[j]-arr[i];
        }
    }
    cout<<"\n maximum profit: "<<max;
    return 0;
}

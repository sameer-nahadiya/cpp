int getpivot(vector<int>&arr,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binarySearch(vector<int>&arr, int size, int key)
{
    int start = s;
    int end = e;
    // int mid = (start + end) / 2;
    //  agar kis test case me bahut bade values aa jae tho yeah mid ka formula kaam nahi aayega
    //  tho iske jagah hame niche wala formula use karna padega

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        //mid = (start + end) / 2; // same here
        mid = start + (end - start) / 2;
    }
    return -1;
}
int findpositions(vector<int>&arr,int n,int k)
{
    int pivot=getpivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1]){
        return binaryserach(arr,pivot,n-1,k);
    }
    else{
        return binarysearch(arr,0,pivot-1,k)
    }
}
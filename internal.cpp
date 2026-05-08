#include<iostream>
using namespace std;
int main(){
    cout<<"Merge Sorting\n";
    int n,a[50],i;
    cout<<"Enter number of elements:\n ";
    cin>>n;
    cout<<"Enter elements:";
    for(i=0;i<n;i++)
        cin>>a[i];
    int size,left;
    for(size=1;size<n;size=size*2){
        for(left=0;left<n-size;left=left+2*size){
            int mid=left+size-1;
            int right=left+2*size-1;
            if(right>=n)
                right=n-1;
			int i=left;
            int j=mid+1;
            int k=0;
            int tempArr[50];
            while(i<=mid && j<=right){
                if(a[i]<a[j])
                    tempArr[k++]=a[i++];
                else
                    tempArr[k++]=a[j++];
            }
            while(i<=mid)
                tempArr[k++]=a[i++];
            while(j<=right)
                tempArr[k++]=a[j++];
            for(i=left,k=0;i<=right;i++,k++)
                a[i]=tempArr[k]; 
        }
    }
    cout<<"Sorted array:\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}

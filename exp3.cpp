#include <iostream>
using namespace std;
int main()
{
    int a[50],n,i,j,temp,data,ch;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for(i = 0; i < n; i++)
    cin >> a[i];
	cout << "1. Linear Search\n";
    cout <<"2. Binary Search\n";
    cout <<"3. Bubble Sort\n";
    cout <<"4. Insertion Sort\n";
    cout <<"5. Selection Sort\n";
    cout <<"Enter your choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1: 
        cout<<"Linear search\n";
        cout <<"Enter element to search:";
            cin>>data;
            for(i=0; i<n; i++)
            {
                if(a[i] ==data)
                {
                    cout <<"Element found at position"<<i+1;
                    break;
                }
            }
            if(i==n)
                cout <<"Element not found";
            break;
        case 2: 
        cout<<"Binary search\n";
            cout<<"Enter element to search:";
            cin>>data;
            {
                int low=0,high=n-1,mid;
                while(low<=high)
                {
                    mid=(low+high)/2;
                    if(a[mid]==data)
                    {
                        cout<<"Element found at position"<<mid+1;
                        break;
                    }
                    else if(a[mid]<data)
                        low=mid+1;
                    else
                        high=mid-1;
                }
                if(low>high)
                    cout<<"Element not found";
            }
            break;
		case 3: 
        cout<<"Bubble sorting\n";
            for(i=0; i<n-1; i++)
            {
                for(j=0; j<n-i-1; j++)
                {
                    if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            }
            cout<<"Sorted array:\n";
            for(i=0; i<n; i++)
                cout<<a[i]<< " ";
            break;
        case 4: 
            cout<<"insertion sorting\n";
            for(i=1; i<n; i++)
            {
                temp=a[i];
                j=i-1;
                while(j>=0 && a[j]>temp)
                {
                    a[j+1]=a[j];
                    j--;
                }
                a[j+1]=temp;
            }
            cout<<"Sorted array:\n";
            for(i=0; i<n; i++)
                cout<<a[i]<< " ";
            break;
        case 5: 
        cout<<"Selection sorting\n";
            for(i=0; i<n-1; i++)
            {
                int min=i;
                for(j=i+1; j<n; j++)
                {
                    if(a[j]<a[min])
                        min = j;
                }
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
            }
            cout<<"Sorted array:\n";
            for(i=0; i<n; i++)
                cout<<a[i]<< " ";
            break;
        default:
            cout<<"Invalid choice";
    }

    return 0;
}


       if(arr[mid]==k){
           cout<<"found at index "<<mid;
           break;
       }
       else if(arr[mid]<k){
           low=mid+1;
       }
       else{
           high=mid-1;
       }
    }
    cout<<endl;
    cout<<"not found"<<endl
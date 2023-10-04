int arr1[n];
    for(int i=0;i<n;i++){
        arr1[i]=arr[i];
        
    }
    for(int i=0;i>n;i++){
        arr[i]=arr1[n-i-1];
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
        
    }
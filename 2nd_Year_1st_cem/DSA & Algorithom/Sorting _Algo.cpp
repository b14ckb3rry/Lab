void bubbleSort(int a[],int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
           if(a[j]>a[j+1]) {
                // swap(a[j],a[j+1]);
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
           }            
        }
    }
}
void selectionSort(int a[],int n) {
    for(int i=0 ; i<n-1; i++) {
        int index= i;
        for(int j=index+1; j<n; j++) {
            if(a[j]<a[index]) index=j;
        }
        swap(a[index],a[i]);
    }
}

void insertion_sort(int a[],int n) {
    for(int i=1; i<n; i++){
        int val=a[i];
        int j=i;
        while(j>0 && a[i-1]>val) {
            a[j]=a[j-1];
            j--;
        }
        a[j]=val;
    }
}
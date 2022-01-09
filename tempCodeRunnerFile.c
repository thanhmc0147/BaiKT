while(a[i]!=0){
            b[a[i]%10]++;
            a[i]/=10;
        }
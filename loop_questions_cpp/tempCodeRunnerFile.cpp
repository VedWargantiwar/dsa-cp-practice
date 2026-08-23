for(int i = 0 ; i < n; i++){
        for(int a = 0; a < 2*n; a++){
            if(a < n + i && a >= n - i ) cout<<" ";
            else cout<<'*';
        }
        cout<<'\n';
    }
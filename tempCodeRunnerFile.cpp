int rows;
cin>>rows;
for(int i=0; i<rows;i++)    {
    for(int j=0;j<=rows;j++) {
        if(j<(rows-i))
            cout<<" ";
        else
            cout<<"*";
    }